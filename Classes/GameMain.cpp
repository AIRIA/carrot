#include "GameMain.h"

CCScene* GameMain::scene(){
	CCScene* mainScene = CCScene::create();
	GameMain* gm = GameMain::create();
	mainScene->addChild(gm);
	return mainScene;
}

bool GameMain::init(){
	do{
		CC_BREAK_IF(!CCLayer::init());
		
	}while(0);

	return true;
}