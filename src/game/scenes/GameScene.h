#pragma once
#include <cstdint>
#include "../../system/IScene.h"

// ゲーム本編のシーン。今は土台が動くかを確かめるための、何もしないシーン
// TODO: 関数名（update など）は土台の IScene に合わせて小文字のまま。土台の名前をそろえるときに直す
class GameScene : public IScene
{
public:
	void update(uint64_t deltaTimeMicrosec) override;
	void draw(uint64_t deltaTimeMicrosec) override;
	void init() override;
	void dispose() override;
};
