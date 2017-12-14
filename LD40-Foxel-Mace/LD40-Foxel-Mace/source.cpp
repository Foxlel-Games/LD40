#include <iostream> 
#include <AssetLoader\KAssetLoader.h>
#include <SFML\Audio.hpp>

using namespace Krawler;
using namespace std;
using namespace sf;

int main(int argc, char* argv[])
{
	auto asset = KAssetLoader::getAssetLoader().loadSoundBuffer(KTEXT("res\\railgun.ogg"));
	SoundBuffer soundBuff;
	soundBuff.loadFromFile("res\\railgun.ogg");

	Sound soundKrawler;
	Sound soundSF;
	soundKrawler.setBuffer(asset);
	//soundSF.setBuffer(soundBuff);

	soundKrawler.play();

	system("pause");
	return 0;
}

