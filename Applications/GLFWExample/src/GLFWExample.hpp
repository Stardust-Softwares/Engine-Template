//
// Created by mathis on 24/05/2020.
//
#pragma once

#include <Core/BaseApplication.hpp>
#include "GLFWWindow.hpp"

class GLFWExample : public BaseApplication {
public:
    GLFWExample();
    ~GLFWExample() { GLFWWindow::terminate(); }///TODO: fix segfault (caused by the fact that BaseApplication is destroyed AFTER GLFWExample).

    void draw(double deltatime) override;

    void run();

private:
    void loadExampleScene();
};
