#include "BuildingTips.Config.h"
#include "QJsonObject"
#include <QJsonDocument>
#include <QFile>
#include "Core/Setting/XSetting.h"

CBuildingTip *CBuildingTip::Get()
{
  static CBuildingTip *p = nullptr;
  if (!p)
  {
    p = new CBuildingTip();
    p->_BuildingTipConfig[EBuildingTips::OpNone] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpBoostByTool] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpBoost] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpDetails] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpSpeedUpByGold] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpSpeedUpByTool] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpUpgrade] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpTrade] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpAuction] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpResearch] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpBuild] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpTrain] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpHelp] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpReinforcements] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpWish] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpAllianceBattle] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpDefend] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMilitaryInfo] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCityInfo] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCityDecorate] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCityGift] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpAllianceTreasure] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCityBuff] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpHeal] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCollect] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpForging] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpStoragebox] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpPyramid] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpBadgeBourse] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpFriend] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMilitaryPoint] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpWar] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMonthGift] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpDailySign] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpResuscitate] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpDailyReward] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpPet] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpPetMap] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpPetExchange] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpPremiumVipMall] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpWarGem] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpWarTechnology] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpArena] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpDiscuss] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpSupport] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpSpringOfLife] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpFaction] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpInfoCenter] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMonument] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpTrainHall] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpPrison] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMastery] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMainMastery] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpDrawing] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpArtifact] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMonumentLegend] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpIntetior] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCounterSys] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpExclusiveVip] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpStarUpgrade] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpStarSpeedUp] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpEndlessTreasure] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpProcessStudy] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpWarframeForg] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpWarframeStoreroom] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpstatueBrave] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMilitaryFortress] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpForeignPavilion] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpNebulaTechnology] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpNebulaTechnologyReward] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMeteorMagic] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMagicLamp] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMagicLampPray] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMagicLampBreak] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMagicLampStrength] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpMagicLampClass] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
    p->_BuildingTipConfig[EBuildingTips::OpCityLevelGift] = QPointer<RBuildingTipConfig>(new RBuildingTipConfig());
  }
  return p;
}

void CBuildingTip::ProduceJson()
{
  QJsonObject lJson;
  for (auto [lBuildingType, lBuilding] : _BuildingTipConfig.asKeyValueRange())
  {
    lJson.insert(
        QString::number(static_cast<int>(lBuildingType)),
        lBuilding->ToJson());
  }
  QJsonDocument lJsonDoc(lJson);
  QFile file(XSetting::Get()->_StaticFilesPath + "Json/Building/BuildingTips.json");
  file.open(QIODevice::ReadWrite | QIODevice::Text);
  auto lJsonString = lJsonDoc.toJson();
  file.write(lJsonString);
  file.close();
}

void CBuildingTip::Init()
{
  auto lTip = _BuildingTipConfig[EBuildingTips::OpBoostByTool];
  lTip->btnId = 1001;
  lTip->btnEnum = EBuildingTips::OpBoostByTool;
  lTip->OpName = "OpBoostByTool";
  lTip->Desc = "common_text_058";
  lTip->PicFile = "icon_building_up_food.png";
  lTip->OpSortIndex = 10;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpBoost];
  lTip->btnId = 1002;
  lTip->btnEnum = EBuildingTips::OpBoost;
  lTip->OpName = "OpBoost";
  lTip->Desc = "common_text_058";
  lTip->PicFile = "icon_building_output_speedup.png";
  lTip->OpSortIndex = 20;
  lTip->scale = 0;
  lTip->offset = {5, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpDetails];
  lTip->btnId = 1003;
  lTip->btnEnum = EBuildingTips::OpDetails;
  lTip->OpName = "OpDetails";
  lTip->Desc = "common_text_059";
  lTip->PicFile = "icon_building_details.png";
  lTip->OpSortIndex = 30;
  lTip->scale = 0;
  lTip->offset = {5, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpSpeedUpByGold];
  lTip->btnId = 1004;
  lTip->btnEnum = EBuildingTips::OpSpeedUpByGold;
  lTip->OpName = "OpSpeedUpByGold";
  lTip->Desc = "common_text_018";
  lTip->PicFile = "icon_building_gold_speedup.png";
  lTip->OpSortIndex = 40;
  lTip->scale = 0;
  lTip->offset = {0, -4};

  lTip = _BuildingTipConfig[EBuildingTips::OpSpeedUpByTool];
  lTip->btnId = 1005;
  lTip->btnEnum = EBuildingTips::OpSpeedUpByTool;
  lTip->OpName = "OpSpeedUpByTool";
  lTip->Desc = "common_text_018";
  lTip->PicFile = "icon_building_speedup.png";
  lTip->OpSortIndex = 50;
  lTip->scale = 0;
  lTip->offset = {-5, 2};

  lTip = _BuildingTipConfig[EBuildingTips::OpUpgrade];
  lTip->btnId = 1006;
  lTip->btnEnum = EBuildingTips::OpUpgrade;
  lTip->OpName = "OpUpgrade";
  lTip->Desc = "common_text_055";
  lTip->PicFile = "icon_building_levelup.png";
  lTip->OpSortIndex = 60;
  lTip->scale = 0;
  lTip->offset = {4, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpTrade];
  lTip->btnId = 1007;
  lTip->btnEnum = EBuildingTips::OpTrade;
  lTip->OpName = "OpTrade";
  lTip->Desc = "common_text_044";
  lTip->PicFile = "icon_building_trade.png";
  lTip->OpSortIndex = 70;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpAuction];
  lTip->btnId = 1008;
  lTip->btnEnum = EBuildingTips::OpAuction;
  lTip->OpName = "OpAuction";
  lTip->Desc = "common_text_2768";
  lTip->PicFile = "icon_saleRoom.png";
  lTip->OpSortIndex = 80;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpResearch];
  lTip->btnId = 1009;
  lTip->btnEnum = EBuildingTips::OpResearch;
  lTip->OpName = "OpResearch";
  lTip->Desc = "common_text_062";
  lTip->PicFile = "icon_building_research.png";
  lTip->OpSortIndex = 90;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpBuild];
  lTip->btnId = 1010;
  lTip->btnEnum = EBuildingTips::OpBuild;
  lTip->OpName = "OpBuild";
  lTip->Desc = "common_text_042";
  lTip->PicFile = "icon_building_trap_bulid.png";
  lTip->OpSortIndex = 100;
  lTip->scale = 0;
  lTip->offset = {5, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpTrain];
  lTip->btnId = 1011;
  lTip->btnEnum = EBuildingTips::OpTrain;
  lTip->OpName = "OpTrain";
  lTip->Desc = "common_text_061";
  lTip->PicFile = "icon_building_training.png";
  lTip->OpSortIndex = 110;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpHelp];
  lTip->btnId = 1012;
  lTip->btnEnum = EBuildingTips::OpHelp;
  lTip->OpName = "OpHelp";
  lTip->Desc = "common_text_037";
  lTip->PicFile = "icon_building_alliancehelp.png";
  lTip->OpSortIndex = 120;
  lTip->scale = 0;
  lTip->offset = {5, -2};

  lTip = _BuildingTipConfig[EBuildingTips::OpReinforcements];
  lTip->btnId = 1013;
  lTip->btnEnum = EBuildingTips::OpReinforcements;
  lTip->OpName = "OpReinforcements";
  lTip->Desc = "common_text_010";
  lTip->PicFile = "icon_building_armyhelp.png";
  lTip->OpSortIndex = 130;
  lTip->scale = 0;
  lTip->offset = {5, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpWish];
  lTip->btnId = 1014;
  lTip->btnEnum = EBuildingTips::OpWish;
  lTip->OpName = "OpWish";
  lTip->Desc = "common_text_060";
  lTip->PicFile = "icon_building_xunbao.png";
  lTip->OpSortIndex = 140;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpAllianceBattle];
  lTip->btnId = 1015;
  lTip->btnEnum = EBuildingTips::OpAllianceBattle;
  lTip->OpName = "OpAllianceBattle";
  lTip->Desc = "common_text_047";
  lTip->PicFile = "icon_building_alliance_war.png";
  lTip->OpSortIndex = 150;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpDefend];
  lTip->btnId = 1016;
  lTip->btnEnum = EBuildingTips::OpDefend;
  lTip->OpName = "OpDefend";
  lTip->Desc = "common_text_041";
  lTip->PicFile = "icon_building_def.png";
  lTip->OpSortIndex = 160;
  lTip->scale = 0;
  lTip->offset = {5, -10};

  lTip = _BuildingTipConfig[EBuildingTips::OpMilitaryInfo];
  lTip->btnId = 1017;
  lTip->btnEnum = EBuildingTips::OpMilitaryInfo;
  lTip->OpName = "OpMilitaryInfo";
  lTip->Desc = "common_text_045";
  lTip->PicFile = "icon_building_military.png";
  lTip->OpSortIndex = 170;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpCityInfo];
  lTip->btnId = 1018;
  lTip->btnEnum = EBuildingTips::OpCityInfo;
  lTip->OpName = "OpCityInfo";
  lTip->Desc = "common_text_039";
  lTip->PicFile = "icon_building_cityinfo.png";
  lTip->OpSortIndex = 190;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpCityDecorate];
  lTip->btnId = 1019;
  lTip->btnEnum = EBuildingTips::OpCityDecorate;
  lTip->OpName = "OpCityDecorate";
  lTip->Desc = "common_text_1798";
  lTip->PicFile = "icon_main_skin.png";
  lTip->OpSortIndex = 200;
  lTip->scale = 0.7;
  lTip->offset = {0, 5};

  lTip = _BuildingTipConfig[EBuildingTips::OpCityGift];
  lTip->btnId = 1020;
  lTip->btnEnum = EBuildingTips::OpCityGift;
  lTip->OpName = "OpCityGift";
  lTip->Desc = "common_text_4030";
  lTip->PicFile = "icon_castleLv_privilege.png";
  lTip->OpSortIndex = 180;
  lTip->scale = 0;
  lTip->offset = {-2, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpAllianceTreasure];
  lTip->btnId = 1021;
  lTip->btnEnum = EBuildingTips::OpAllianceTreasure;
  lTip->OpName = "OpAllianceTreasure";
  lTip->Desc = "allitreas_title_01";
  lTip->PicFile = "allitreas_box_01.png";
  lTip->OpSortIndex = 190;
  lTip->scale = 0.6;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpCityBuff];
  lTip->btnId = 1022;
  lTip->btnEnum = EBuildingTips::OpCityBuff;
  lTip->OpName = "OpCityBuff";
  lTip->Desc = "common_text_014";
  lTip->PicFile = "icon_building_cityeffect.png";
  lTip->OpSortIndex = 210;
  lTip->scale = 1.2;
  lTip->offset = {5, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpHeal];
  lTip->btnId = 1023;
  lTip->btnEnum = EBuildingTips::OpHeal;
  lTip->OpName = "OpHeal";
  lTip->Desc = "common_text_065";
  lTip->PicFile = "icon_building_cure.png";
  lTip->OpSortIndex = 220;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpCollect];
  lTip->btnId = 1024;
  lTip->btnEnum = EBuildingTips::OpCollect;
  lTip->OpName = "OpCollect";
  lTip->Desc = "common_text_057";
  lTip->PicFile = "ui_food.png";
  lTip->OpSortIndex = 230;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpForging];
  lTip->btnId = 1025;
  lTip->btnEnum = EBuildingTips::OpForging;
  lTip->OpName = "OpForging";
  lTip->Desc = "common_text_1339";
  lTip->PicFile = "icon_equip_forge2.png";
  lTip->OpSortIndex = 240;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpStoragebox];
  lTip->btnId = 1026;
  lTip->btnEnum = EBuildingTips::OpStoragebox;
  lTip->OpName = "OpStoragebox";
  lTip->Desc = "common_text_040";
  lTip->PicFile = "icon_equip_storagebox.png";
  lTip->OpSortIndex = 250;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpPyramid];
  lTip->btnId = 1027;
  lTip->btnEnum = EBuildingTips::OpPyramid;
  lTip->OpName = "OpPyramid";
  lTip->Desc = "common_text_1140";
  lTip->PicFile = "btn_pyramid.png";
  lTip->OpSortIndex = 260;
  lTip->scale = 0.9;
  lTip->offset = {1, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpBadgeBourse];
  lTip->btnId = 1028;
  lTip->btnEnum = EBuildingTips::OpBadgeBourse;
  lTip->OpName = "OpBadgeBourse";
  lTip->Desc = "common_text_1906";
  lTip->PicFile = "btn_badgeexchange.png";
  lTip->OpSortIndex = 270;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpFriend];
  lTip->btnId = 1029;
  lTip->btnEnum = EBuildingTips::OpFriend;
  lTip->OpName = "OpFriend";
  lTip->Desc = "friend_name_01";
  lTip->PicFile = "btn_embassy_friend.png";
  lTip->OpSortIndex = 280;
  lTip->scale = 0.8;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMilitaryPoint];
  lTip->btnId = 1030;
  lTip->btnEnum = EBuildingTips::OpMilitaryPoint;
  lTip->OpName = "OpMilitaryPoint";
  lTip->Desc = "common_text_2408";
  lTip->PicFile = "icon_miltary_exchange.png";
  lTip->OpSortIndex = 290;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpWar];
  lTip->btnId = 1031;
  lTip->btnEnum = EBuildingTips::OpWar;
  lTip->OpName = "OpWar";
  lTip->Desc = "common_text_310";
  lTip->PicFile = "icon_main_honourgrade.png";
  lTip->OpSortIndex = 60;
  lTip->scale = 1.2;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMonthGift];
  lTip->btnId = 1032;
  lTip->btnEnum = EBuildingTips::OpMonthGift;
  lTip->OpName = "OpMonthGift";
  lTip->Desc = "common_text_2476";
  lTip->PicFile = "icon_monthly_boat.png";
  lTip->OpSortIndex = 300;
  lTip->scale = 0.8;
  lTip->offset = {5, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpDailySign];
  lTip->btnId = 1033;
  lTip->btnEnum = EBuildingTips::OpDailySign;
  lTip->OpName = "OpDaylySign";
  lTip->Desc = "login_title_01";
  lTip->PicFile = "btn_dailyreward.png";
  lTip->OpSortIndex = 310;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpResuscitate];
  lTip->btnId = 1034;
  lTip->btnEnum = EBuildingTips::OpResuscitate;
  lTip->OpName = "OpResuscitate";
  lTip->Desc = "common_text_2499";
  lTip->PicFile = "btn_rechareactivity_27.png";
  lTip->OpSortIndex = 320;
  lTip->scale = 0.56;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpDailyReward];
  lTip->btnId = 1035;
  lTip->btnEnum = EBuildingTips::OpDailyReward;
  lTip->OpName = "OpDailyReward";
  lTip->Desc = "common_text_2657";
  lTip->PicFile = "icon_Daily_reward_sign.png";
  lTip->OpSortIndex = 330;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpPet];
  lTip->btnId = 1036;
  lTip->btnEnum = EBuildingTips::OpPet;
  lTip->OpName = "OpPet";
  lTip->Desc = "common_text_2975";
  lTip->PicFile = "icon_build_pet.png";
  lTip->OpSortIndex = 340;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpPetMap];
  lTip->btnId = 1037;
  lTip->btnEnum = EBuildingTips::OpPetMap;
  lTip->OpName = "OpPetMap";
  lTip->Desc = "common_text_2935";
  lTip->PicFile = "icon_build_pet_book.png";
  lTip->OpSortIndex = 350;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpPetExchange];
  lTip->btnId = 1038;
  lTip->btnEnum = EBuildingTips::OpPetExchange;
  lTip->OpName = "OpPetExchange";
  lTip->Desc = "common_text_3799";
  lTip->PicFile = "icon_pet_exchange_enter.png";
  lTip->OpSortIndex = 350;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpPremiumVipMall];
  lTip->btnId = 1039;
  lTip->btnEnum = EBuildingTips::OpPremiumVipMall;
  lTip->OpName = "OpPremiumVipMall";
  lTip->Desc = "common_text_1967";
  lTip->PicFile = "icon_wharf_Extreme_shop.png";
  lTip->OpSortIndex = 360;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpWarGem];
  lTip->btnId = 1040;
  lTip->btnEnum = EBuildingTips::OpWarGem;
  lTip->OpName = "OpWarGem";
  lTip->Desc = "common_text_3878";
  lTip->PicFile = "icon_stone_enter.png";
  lTip->OpSortIndex = 360;
  lTip->scale = 0;
  lTip->offset = {0, 5};

  lTip = _BuildingTipConfig[EBuildingTips::OpWarTechnology];
  lTip->btnId = 1041;
  lTip->btnEnum = EBuildingTips::OpWarTechnology;
  lTip->OpName = "OpWarTechnology";
  lTip->Desc = "common_text_3905";
  lTip->PicFile = "icon_WarTechnology_enter.png";
  lTip->OpSortIndex = 370;
  lTip->scale = 0;
  lTip->offset = {0, 5};

  lTip = _BuildingTipConfig[EBuildingTips::OpArena];
  lTip->btnId = 1042;
  lTip->btnEnum = EBuildingTips::OpArena;
  lTip->OpName = "OpArena";
  lTip->Desc = "arena_btn_01";
  lTip->PicFile = "btn_arena.png";
  lTip->OpSortIndex = 380;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpDiscuss];
  lTip->btnId = 1043;
  lTip->btnEnum = EBuildingTips::OpDiscuss;
  lTip->OpName = "OpDiscuss";
  lTip->Desc = "common_text_3421";
  lTip->PicFile = "icon_community.png";
  lTip->OpSortIndex = 390;
  lTip->scale = 1.25;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpSupport];
  lTip->btnId = 1044;
  lTip->btnEnum = EBuildingTips::OpSupport;
  lTip->OpName = "OpSupport";
  lTip->Desc = "common_btn_06";
  lTip->PicFile = "icon_service.png";
  lTip->OpSortIndex = 400;
  lTip->scale = 1.25;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpSpringOfLife];
  lTip->btnId = 1045;
  lTip->btnEnum = EBuildingTips::OpSpringOfLife;
  lTip->OpName = "OpSpringOfLife";
  lTip->Desc = "common_text_3459";
  lTip->PicFile = "btn_life_water.png";
  lTip->OpSortIndex = 325;
  lTip->scale = 1.2;
  lTip->offset = {2, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpFaction];
  lTip->btnId = 1046;
  lTip->btnEnum = EBuildingTips::OpFaction;
  lTip->OpName = "OpFaction";
  lTip->Desc = "civilization_system_text_04";
  lTip->PicFile = "btn_civilization_exchange.png";
  lTip->OpSortIndex = 410;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpInfoCenter];
  lTip->btnId = 1047;
  lTip->btnEnum = EBuildingTips::OpInfoCenter;
  lTip->OpName = "OpInfoCenter";
  lTip->Desc = "common_text_3162_ros";
  lTip->PicFile = "icon_message_01.png";
  lTip->OpSortIndex = 385;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMonument];
  lTip->btnId = 1048;
  lTip->btnEnum = EBuildingTips::OpMonument;
  lTip->OpName = "OpMonument";
  lTip->Desc = "buildDes_name_124";
  lTip->PicFile = "btn_main_monument.png";
  lTip->OpSortIndex = 420;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpTrainHall];
  lTip->btnId = 1049;
  lTip->btnEnum = EBuildingTips::OpTrainHall;
  lTip->OpName = "OpTrainHall";
  lTip->Desc = "common_text_061";
  lTip->PicFile = "btn_main_herotrain.png";
  lTip->OpSortIndex = 430;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpPrison];
  lTip->btnId = 1050;
  lTip->btnEnum = EBuildingTips::OpPrison;
  lTip->OpName = "OpPrison";
  lTip->Desc = "buildDes_name_125";
  lTip->PicFile = "btn_hero_prison_01.png";
  lTip->OpSortIndex = 440;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMastery];
  lTip->btnId = 1051;
  lTip->btnEnum = EBuildingTips::OpMastery;
  lTip->OpName = "OpMastery";
  lTip->Desc = "specialization_text_02";
  lTip->PicFile = "btn_specialization_star.png";
  lTip->OpSortIndex = 450;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMainMastery];
  lTip->btnId = 1052;
  lTip->btnEnum = EBuildingTips::OpMainMastery;
  lTip->OpName = "OpMainMastery";
  lTip->Desc = "specialization_text_03";
  lTip->PicFile = "btn_main_specialization.png";
  lTip->OpSortIndex = 445;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpDrawing];
  lTip->btnId = 1053;
  lTip->btnEnum = EBuildingTips::OpDrawing;
  lTip->OpName = "OpDrawing";
  lTip->Desc = "drawing_btn_01";
  lTip->PicFile = "btn_drawing_01.png";
  lTip->OpSortIndex = 448;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpArtifact];
  lTip->btnId = 1054;
  lTip->btnEnum = EBuildingTips::OpArtifact;
  lTip->OpName = "OpArtifact";
  lTip->Desc = "artifact_title_01";
  lTip->PicFile = "icon_artifact_entrance.png";
  lTip->OpSortIndex = 449;
  lTip->scale = 1.2;
  lTip->offset = {-2, -1};

  lTip = _BuildingTipConfig[EBuildingTips::OpMonumentLegend];
  lTip->btnId = 1055;
  lTip->btnEnum = EBuildingTips::OpMonumentLegend;
  lTip->OpName = "OpMonumentLegend";
  lTip->Desc = "history_name_11";
  lTip->PicFile = "btn_drawing_01.png";
  lTip->OpSortIndex = 448;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpIntetior];
  lTip->btnId = 1056;
  lTip->btnEnum = EBuildingTips::OpIntetior;
  lTip->OpName = "OpIntetior";
  lTip->Desc = "parliament_name_01";
  lTip->PicFile = "icon_parliament_enter.png";
  lTip->OpSortIndex = 449;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpCounterSys];
  lTip->btnId = 1057;
  lTip->btnEnum = EBuildingTips::OpCounterSys;
  lTip->OpName = "OpCounterSys";
  lTip->Desc = "CounterSystem_btn_01";
  lTip->PicFile = "icon_alliance_counter_sys.png";
  lTip->OpSortIndex = 450;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpExclusiveVip];
  lTip->btnId = 1058;
  lTip->btnEnum = EBuildingTips::OpExclusiveVip;
  lTip->OpName = "OpExclusiveVip";
  lTip->Desc = "privilege_text_06";
  lTip->PicFile = "btn_zxvip_01.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0.8;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpStarUpgrade];
  lTip->btnId = 1059;
  lTip->btnEnum = EBuildingTips::OpStarUpgrade;
  lTip->OpName = "OpStarUpgrade";
  lTip->Desc = "Glory_text_10";
  lTip->PicFile = "icon_build_star_06.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0.8;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpStarSpeedUp];
  lTip->btnId = 1060;
  lTip->btnEnum = EBuildingTips::OpStarSpeedUp;
  lTip->OpName = "OpStarSpeedUp";
  lTip->Desc = "Glory_text_29";
  lTip->PicFile = "icon_building_speedup.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0.8;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpEndlessTreasure];
  lTip->btnId = 1061;
  lTip->btnEnum = EBuildingTips::OpEndlessTreasure;
  lTip->OpName = "OpEndlessTreasure";
  lTip->Desc = "endless_treasures_text_01";
  lTip->PicFile = "icon_building_wjbz.png";
  lTip->OpSortIndex = 145;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpProcessStudy];
  lTip->btnId = 1062;
  lTip->btnEnum = EBuildingTips::OpProcessStudy;
  lTip->OpName = "OpProcessStudy";
  lTip->Desc = "Soldiers_armor_text_2";
  lTip->PicFile = "btn_armor_technology.png";
  lTip->OpSortIndex = 163;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpWarframeForg];
  lTip->btnId = 1063;
  lTip->btnEnum = EBuildingTips::OpWarframeForg;
  lTip->OpName = "OpWarframeForg";
  lTip->Desc = "Soldiers_armor_text_3";
  lTip->PicFile = "btn_armor_forging.png";
  lTip->OpSortIndex = 162;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpWarframeStoreroom];
  lTip->btnId = 1064;
  lTip->btnEnum = EBuildingTips::OpWarframeStoreroom;
  lTip->OpName = "OpWarframeStoreroom";
  lTip->Desc = "Soldiers_armor_text_4";
  lTip->PicFile = "btn_armor_stockpile.png";
  lTip->OpSortIndex = 161;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpstatueBrave];
  lTip->btnId = 1065;
  lTip->btnEnum = EBuildingTips::OpstatueBrave;
  lTip->OpName = "OpstatueBrave";
  lTip->Desc = "ice_carnival_text03";
  lTip->PicFile = "icon_build_star_06.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMilitaryFortress];
  lTip->btnId = 1066;
  lTip->btnEnum = EBuildingTips::OpMilitaryFortress;
  lTip->OpName = "OpMilitaryFortress";
  lTip->Desc = "fortress_name_01";
  lTip->PicFile = "btn_main_fortress.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpForeignPavilion];
  lTip->btnId = 1067;
  lTip->btnEnum = EBuildingTips::OpForeignPavilion;
  lTip->OpName = "OpForeignPavilion";
  lTip->Desc = "activity_name_9001374";
  lTip->PicFile = "icon_ygg_rktb.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpNebulaTechnology];
  lTip->btnId = 1068;
  lTip->btnEnum = EBuildingTips::OpNebulaTechnology;
  lTip->OpName = "OpNebulaTechnology";
  lTip->Desc = "nebula_war_text_0156";
  lTip->PicFile = "icon_building_research.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpNebulaTechnologyReward];
  lTip->btnId = 1069;
  lTip->btnEnum = EBuildingTips::OpNebulaTechnologyReward;
  lTip->OpName = "OpNebulaTechnologyReward";
  lTip->Desc = "Nebula_science_text_001";
  lTip->PicFile = "icon_castleLv_privilege.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMeteorMagic];
  lTip->btnId = 1070;
  lTip->btnEnum = EBuildingTips::OpMeteorMagic;
  lTip->OpName = "OpMeteorMagic";
  lTip->Desc = "meteoritesmagic_text_1";
  lTip->PicFile = "icon_yxmn_rukou.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMagicLamp];
  lTip->btnId = 1071;
  lTip->btnEnum = EBuildingTips::OpMagicLamp;
  lTip->OpName = "OpMagicLamp";
  lTip->Desc = "magic_lamp_text_016";
  lTip->PicFile = "icon_nebulawars_zheni.png";
  lTip->OpSortIndex = 451;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMagicLampPray];
  lTip->btnId = 1072;
  lTip->btnEnum = EBuildingTips::OpMagicLampPray;
  lTip->OpName = "OpMagicLampPray";
  lTip->Desc = "magic_lamp_text_003";
  lTip->PicFile = "icon_yxmn_rukou.png";
  lTip->OpSortIndex = 450;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMagicLampBreak];
  lTip->btnId = 1073;
  lTip->btnEnum = EBuildingTips::OpMagicLampBreak;
  lTip->OpName = "OpMagicLampBreak";
  lTip->Desc = "magic_lamp_text_005";
  lTip->PicFile = "icon_building_speedup.png";
  lTip->OpSortIndex = 449;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMagicLampStrength];
  lTip->btnId = 1074;
  lTip->btnEnum = EBuildingTips::OpMagicLampStrength;
  lTip->OpName = "OpMagicLampStrength";
  lTip->Desc = "magic_lamp_text_007";
  lTip->PicFile = "icon_building_speedup.png";
  lTip->OpSortIndex = 448;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  lTip = _BuildingTipConfig[EBuildingTips::OpMagicLampClass];
  lTip->btnId = 1075;
  lTip->btnEnum = EBuildingTips::OpMagicLampClass;
  lTip->OpName = "OpMagicLampClass";
  lTip->Desc = "magic_lamp_text_009";
  lTip->PicFile = "icon_building_speedup.png";
  lTip->OpSortIndex = 448;
  lTip->scale = 0;
  lTip->offset = {0, 0};

  ProduceJson();
}
