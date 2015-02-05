#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    virtual bool onTouchBegan(Touch *touch, Event *unused_event);
    
    void addMonster(float dt);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
    
private:
    Sprite *_player;
};

#endif // __HELLOWORLD_SCENE_H__
