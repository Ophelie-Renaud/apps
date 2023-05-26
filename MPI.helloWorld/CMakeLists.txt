cmake_minimum_required(VERSION 3.25)
project(MPI_project_ABC C)

set(CMAKE_C_STANDARD 11)
# *******************************************
# ************ MPI LIBRARY **************
# *******************************************
find_package(MPI REQUIRED)

include_directories(SYSTEM ${MPI_INCLUDE_PATH})
add_executable(MPI_project_ABC main.c)
target_link_libraries(MPI_project_ABC ${MPI_C_LIBRARIES})