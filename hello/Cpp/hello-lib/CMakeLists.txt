add_library(hello-lib
        hello-text.cpp
    )
target_link_libraries(hello-lib fost-core)
target_include_directories(hello-lib PUBLIC ../include)
install(TARGETS hello-lib LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)

if(TARGET check)
    add_library(hello-lib-smoke STATIC EXCLUDE_FROM_ALL
            hello-text-tests.cpp
        )
    target_link_libraries(hello-lib-smoke hello-lib)
    smoke_test(hello-lib-smoke)
endif()
