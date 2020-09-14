#include "ProjectNames.hpp"

ProjectNames::ProjectNames( cocos2d::Layer *layer, std::string projectName, int index ) {
    
    visibleSize = Director::getInstance()->getSafeAreaRect().size;
    origin = Director::getInstance()->getSafeAreaRect().origin;
    
    label = cocos2d::Label::createWithTTF( projectName, "fonts/arial.ttf", 10 );
    float padding = label->getBoundingBox().size.height;
    label->setPosition( Vec2( origin.x + visibleSize.width * 0.2, origin.y + visibleSize.height * 0.7 - ((label->getBoundingBox().size.height + padding) * index) ) );
    label->setColor( Color3B::BLACK );
    layer->addChild( label, kLayer_ProjectHandling );
    
    hide();
}

void ProjectNames::show() {
    label->setVisible( true );
}

void ProjectNames::hide() {
    label->setVisible( false );
}
