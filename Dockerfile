FROM ubuntu:22.04

RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get -qq install --yes git wget cmake gcc g++ gdb valgrind cppcheck clang-tidy clang-format