cmake_minimum_required(VERSION 3.16)

set(QT5_CMAKE_DIR "D:/Tools/Qt/Qt5.15.8-Static/lib/cmake")
set(CMAKE_PREFIX_PATH ${QT5_CMAKE_DIR})

set(Qt5_USE_STATIC_LIBS ON) 
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(PROJECT_NAME "XServer")
project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core WebSockets)


file(GLOB_RECURSE SourceFileList
  "WsServer/**/*.cpp"
)
file(GLOB_RECURSE HeaderFileList
  "WsServer/*/*.h"
)
message(STATUS "SourceFileList: ${SourceFileList}")

add_executable(${PROJECT_NAME}
  ${HeaderFileList}
  ${SourceFileList}
  WsServer/main.cpp
)



target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt::WebSockets)

file(COPY ${CMAKE_SOURCE_DIR}/Config DESTINATION ${CMAKE_BINARY_DIR}/Debug)