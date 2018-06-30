add_executable(hello hello.cpp)
target_link_libraries(hello hello-lib fost-cli)
install(TARGETS hello EXPORT hello RUNTIME DESTINATION bin)

