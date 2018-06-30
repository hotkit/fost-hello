cmake_minimum_required(VERSION 3.6)

# These contain targets and functions needed elsewhere
add_subdirectory(cord)
add_subdirectory(fost-base)

# Other libraries
add_subdirectory(Boost)
add_subdirectory(crypto++)
add_subdirectory(threading)

# This application and its libraries
add_subdirectory(hello/Cpp/hello-lib)
add_subdirectory(hello/Cpp/hello)
