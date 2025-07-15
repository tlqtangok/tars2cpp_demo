# first lib, then other dependencies 
add_custom_command(
    OUTPUT ${SRC_ROOT}/dep/cell.h
    COMMAND ${TARS_ROOT}/tools/tars2cpp ${SRC_ROOT}/dep/cell.tars
    DEPENDS ${SRC_ROOT}/dep/cell.tars
    WORKING_DIRECTORY ${SRC_ROOT}/dep
    COMMENT "Generating cell.h at dep from cell.tars"
)

add_custom_target(gen_cell_h DEPENDS ${SRC_ROOT}/dep/cell.h)

add_library(arr_cell STATIC arr_cell.cpp)
add_dependencies(arr_cell gen_cell_h)
target_include_directories(arr_cell PUBLIC ${SRC_ROOT}/dep)
