cmake_minimum_required(VERSION 3.16)

project(exercicio_3_relogio LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercicio_3_relogio main.cpp
    relogio.h relogio.cpp)

include(GNUInstallDirs)
install(TARGETS exercicio_3_relogio
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
