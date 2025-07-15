cmake_minimum_required(VERSION 3.10)
project(cell_demo)

set(TARS_ROOT "/usr/local/tars/cpp" CACHE PATH "Tars root directory")
set(SRC_ROOT ${CMAKE_SOURCE_DIR} CACHE PATH "Project root directory")
set(CMAKE_CXX_STANDARD 11)

include_directories(${TARS_ROOT}/include)
include_directories(${SRC_ROOT}/dep)
link_directories(${TARS_ROOT}/lib)

add_subdirectory(dep)

add_executable(cell_main main.cpp)
add_dependencies(cell_main gen_cell_h)
target_link_libraries(cell_main arr_cell tarsservant tarsutil)
