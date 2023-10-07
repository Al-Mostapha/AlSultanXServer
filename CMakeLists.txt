cmake_minimum_required(VERSION 3.16)

set(QT6_CMAKE_DIR "C:/Qt/6.5.2/msvc2019_64/lib/cmake")
set(CMAKE_PREFIX_PATH ${QT6_CMAKE_DIR})

set(Qt6_USE_STATIC_LIBS ON) 
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(PROJECT_NAME "XServer")
project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core WebSockets Sql)


file(GLOB_RECURSE SourceFileList "WsServer/**/*.cpp")
file(GLOB_RECURSE HeaderFileList "WsServer/*/*.h")
file(GLOB_RECURSE FwkSourceFileList "Fwk/**/*.cpp")
file(GLOB_RECURSE FwkHeaderFileList "Fwk/*/*.h")
file(GLOB_RECURSE GameSourceFileList "Game/**/*.cpp")
file(GLOB_RECURSE GameHeaderFileList "Game/*/*.h")

message(STATUS "SourceFileList: ${SourceFileList}")

add_executable(
  ${PROJECT_NAME}
  ${HeaderFileList}
  ${SourceFileList}
  main.cpp
)



add_library(XServer.Fwk STATIC ${FwkSourceFileList} ${FwkHeaderFileList})
target_link_libraries(XServer.Fwk PUBLIC Qt::Core Qt::WebSockets Qt::Sql)
target_include_directories(XServer.Fwk PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Fwk)

add_library(XServer.Game STATIC ${GameSourceFileList} ${GameHeaderFileList})
target_link_libraries(XServer.Game PUBLIC XServer.Fwk)
target_include_directories(XServer.Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Game)
target_include_directories(XServer.Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Fwk)


target_link_libraries(${PROJECT_NAME} PRIVATE Qt::Core Qt::WebSockets XServer.Game)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

file(COPY ${CMAKE_SOURCE_DIR}/Config DESTINATION ${CMAKE_BINARY_DIR}/Debug )
file(COPY ${CMAKE_SOURCE_DIR}/sqldrivers DESTINATION ${CMAKE_BINARY_DIR}/Debug )

add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Qt6::Core>
        $<TARGET_FILE:Qt6::WebSockets>
        $<TARGET_FILE:Qt6::Network>
        $<TARGET_FILE:Qt6::Sql>
        ${CMAKE_SOURCE_DIR}/Config
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
)