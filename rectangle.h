#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>
#include "mesh.h"

class Rectangle : public Mesh
{
  public:
    Rectangle();
    ~Rectangle();
    void Init(float x, float y, float width, float height);
    void SetPos(float x, float y);
  
  private:
    enum { LB, LT, RT, RB };
    float mX, mY, mWidth, mHeight;
    void Update();
};
