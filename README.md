# OpenGL-Boost-RL learning repository

This repository contains some code samples to self-learn OpenGL, Boost C++ and RL.

## Steps to build the code on Linux (Ubuntu 20.04)

1. Install the required libraries.
    ```
    sudo apt-get install mesa-utils libglfw3 libglfw3-dev libglew-dev libglm-dev
    ```

2. Clone the repository
    ```
    git clone https://github.com/QMrpy/OpenGL-Boost-RL_learning.git
    ```

3. Build using CMake.
    ```
    cd OpenGL-Boost-RL_learning
    mkdir -p cmake/build
    pushd cmake/build
    cmake ../..
    make
    popd
    ```

The executable `gl_init` is created in `cmake/build`. On WSL2, X11 and graphics drivers cause several problems, hence, the executable doesn't open any window currently. However, on a proper Linux machine, the code should run perfectly fine.
