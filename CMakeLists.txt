cmake_minimum_required(VERSION 3.10)
project(MonPremierJeu)

set(CMAKE_CXX_STANDARD 11)

add_executable(MonPremierJeu main.cpp Hero.h Hero.cpp Input.cpp Draw.cpp Engine.h Engine.cpp Update.cpp)



# Detect and add SFML
set(SFML_ROOT C:/SFML)
set(SFML_STATIC_LIBRARIES TRUE)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2 REQUIRED COMPONENTS audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()

