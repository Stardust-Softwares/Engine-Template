
#include <Core/Utils/Log.hpp>

#include "GLFWExample.hpp"

int main() {
    stardust::core::utils::Log::init();

    GLFWExample app;
    app.run();
    return 0;
}