#include "GameMain.h"
#include "VisibleRect.h"
CCScene* GameMain::scene(){
	CCScene* mainScene = CCScene::create();
	GameMain* gm = GameMain::create();
	mainScene->addChild(gm);
	return mainScene;
}

bool GameMain::init(){
	do{
		CC_BREAK_IF(!CCLayer::init());
		CCSprite* bg = CCSprite::create("icon.png");
		bg->setPosition(VisibleRect::center());
		addChild(bg);
		
	}while(0);

	return true;
}