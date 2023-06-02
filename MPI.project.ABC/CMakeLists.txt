cmake_minimum_required(VERSION 3.25)
project(MPI_project_ABC C)

set(CMAKE_C_STANDARD 11)
# *******************************************
# ************ MPI LIBRARY **************
# *******************************************
find_package(MPI REQUIRED)

include_directories(SYSTEM ${MPI_INCLUDE_PATH})
add_executable(MPI_project_ABC main.c fifo.c sub0.c sub0.h core0.c core1.c core2.c core3.c sub1.c core4.c core5.c core6.c core7.c core8.c core9.c sub2.c core10.c core11.c core12.c core13.c core14.c core15.c code.c preesm_md5.c mac_barrier.c dump.c communication.c)
target_link_libraries(MPI_project_ABC ${MPI_C_LIBRARIES})