# Base oficial do Dev Containers para C++
FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu

# Instalar ferramentas extras úteis no desenvolvimento C/C++
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    gdb \
    clang \
    clang-format \
    clang-tidy \
    valgrind \
    cppcheck \
    && apt-get clean