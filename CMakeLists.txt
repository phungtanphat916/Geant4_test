cmake_minimum_required(VERSION 3.22)
project(Geant4_simulation_test)
find_package(Geant4 REQUIRED ui_all vis_all)
include(${Geant4_USE_FILE})

file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh)

add_executable(G_sim G_sim.cpp ${sources} ${headers})
target_link_libraries(G_sim ${Geant4_LIBRARIES})

add_custom_target(${PROJECT_NAME} DEPENDS G_sim)

#install(TARGETS ${PROJECT_NAME} DESTINATION bin)
