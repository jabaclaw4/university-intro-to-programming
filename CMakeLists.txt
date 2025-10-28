cmake_minimum_required(VERSION 3.28)
project(universPrograming C)

set(CMAKE_C_STANDARD 11)

#add_executable(universPrograming0 secondPacket/array_io.c) #для задач первого модуля пакета
#add_executable(universPrograming1 firstPacket/num1.2.1.c)

add_executable(universPrograming0
        queuePacket/main.c
        queuePacket/operations/stackFunc.c
)