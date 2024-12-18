cmake_minimum_required (VERSION 3.20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../Rel)

project ("Libraries-Dynamic-CMake")

add_subdirectory(Modules)

include_directories(Modules)

add_executable(Dynamic_Figures "Libraries-Figures_DLL.cpp")

target_link_libraries(Dynamic_Figures FiguresLib)