cmake_minimum_required(VERSION 3.16)

project(exercicio_1_pessoa LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercicio_1_pessoa main.cpp
    pessoa.h pessoa.cpp)

include(GNUInstallDirs)
install(TARGETS exercicio_1_pessoa
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
