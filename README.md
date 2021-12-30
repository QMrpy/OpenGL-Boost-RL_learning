# OpenGL-Boost-RL learning repository

This repository contains some code samples to self-learn OpenGL, Boost C++ and RL.

## Steps to build the code on Linux (Ubuntu)

1. Assuming that CMake is installed, install the required libraries.
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

The executable `main` is created in `cmake/build`. The code runs to create an orange triangle with given vertices on a greyish-green background. The code must be run on Linux (not WSL2).
