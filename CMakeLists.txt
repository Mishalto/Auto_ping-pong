cmake_minimum_required(VERSION 3.10)

project(Auto_Ping-Pong)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(REMOVE_RECURSE ${CMAKE_SOURCE_DIR}/bin)
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.2
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(Auto_Ping-Pong src/main.cpp src/Spaceship.cpp src/Bullet.cpp src/GameManager.cpp src/TextureManager.cpp src/Enemy.cpp src/LoadedTextures.cpp)

target_compile_options(Auto_Ping-Pong PRIVATE -Wall -Wextra -Werror)

target_link_libraries(Auto_Ping-Pong PRIVATE sfml-graphics sfml-audio sfml-network)