cmake_minimum_required(VERSION 3.16)

project(exercicio_7_carro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercicio_7_carro main.cpp
    carro.h carro.cpp)

include(GNUInstallDirs)
install(TARGETS exercicio_7_carro
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
