cmake_minimum_required(VERSION 3.10)

project(Auto_Ping-Pong)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SFML_DIR "D:/SFML-2.6.1/lib/cmake/SFML")

link_directories(D:/SFML-2.6.1/lib)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

add_executable(Auto_Ping-Pong src/main.cpp src/ball.cpp src/GameEngine.cpp src/GameLoop.cpp src/Player.cpp)

target_include_directories(Auto_Ping-Pong PRIVATE include)

target_compile_options(Auto_Ping-Pong PRIVATE -Wall -Wextra -Werror)

target_link_libraries(Auto_Ping-Pong PRIVATE sfml-system sfml-window sfml-graphics  sfml-audio-d)
