#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <iostream>

using namespace std;

class Vertex
{
  public:
    Vertex& SetPos(float x, float y) { mX = x; mY = y; return *this;}
  private:
    float mX, mY;
};