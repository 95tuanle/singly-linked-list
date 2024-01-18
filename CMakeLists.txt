cmake_minimum_required(VERSION 3.14)
project(SinglyLinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(singly-linked-list
        main.cpp
        Node.cpp
        Node.hpp
        SinglyLinkedList.cpp
        SinglyLinkedList.hpp)