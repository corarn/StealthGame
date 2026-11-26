#include "GameScene.h"
#include "../../system/SceneClassFactory.h"

// game.cpp から "GameScene" という名前で呼べるように登録する
// 土台の手本はヘッダに書いているが、ヘッダだと #include したファイルの数だけ登録が走るので .cpp に置いた
REGISTER_CLASS(GameScene)

void GameScene::update(uint64_t deltaTimeMicrosec)
{
}

void GameScene::draw(uint64_t deltaTimeMicrosec)
{
}

void GameScene::init()
{
}

void GameScene::dispose()
{
}
