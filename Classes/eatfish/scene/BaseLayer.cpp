
#include "BaseLayer.h"

USING_NS_CC;
using namespace eatfish::scene;
using namespace CocosDenshion;

BaseLayer::~BaseLayer()
{

}

bool BaseLayer::init()
{
	if (Layer::init())
	{
		if (!SimpleAudioEngine::getInstance()->isBackgroundMusicPlaying())
			SimpleAudioEngine::getInstance()->playBackgroundMusic("audios_bg.mp3", true);

		return true;
	}
	return false;
}
