#ifndef _GAMEMAIN_H_
#define _GAMEMAIN_H_
#include "cocos2d.h"
USING_NS_CC;

class GameMain:public CCLayer{
public:
	static CCScene* scene();
	CREATE_FUNC(GameMain);
	virtual bool init();
};

#endif
