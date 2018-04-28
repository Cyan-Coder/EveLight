#include "vertex.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::Init(float x, float y, float width, float height)
{
    mVertices.resize(4);
    mIndexes = { LB, LT, LT, RT, RT, RB, RB, LB, LB, RT, RB, LT};
    mDrawType = GL_LINES;

    mX = x;
    mY = y;
    mWidth = width;
    mHeight = height;

    Update();
}

void Rectangle::SetPos(float x, float y)
{
    if (mX == x && mY == y)
        return;
    mX = x;
    mY = y;
    Update();
}

void Rectangle::Update()
{
    mVertices[LB].SetPos(mX, mY);
    mVertices[LT].SetPos(mX, mY + mHeight);
    mVertices[RT].SetPos(mX + mWidth, mY + mHeight);
    mVertices[RB].SetPos(mX + mWidth, mY);
    mDirty = true;
}
