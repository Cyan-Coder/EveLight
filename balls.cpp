/**
 * A small test game
 */
#include <iostream>
#include <glm/glm.hpp>
#include <vector>
#include "entity.h"
#include "balls.h"

bool Balls::onGameInit()
{
    mProgram.Create("res/shaders/simple");

    mRects[0].Init(-0.95, -0.95, 0.45, 0.45);
    mRects[1].Init(-0.25, -0.25, 0.45, 0.45);
    mRects[2].Init(0.5, 0.5, 0.45, 0.45);

    return true;
}

bool Balls::onGameUpdate(uint32_t ticks)
{
    (void)ticks;

    for (int i = 0; i < 3; i++)
        mRects[i].Draw();

    mRects[0].SetPos(0.5, -0.5);
    //cout << mFPS << endl;

    return true;
}

void Balls::onGameDelete()
{
}
