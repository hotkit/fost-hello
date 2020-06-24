/**
    Copyright 2009-2020 Red Anchor Trading Co. Ltd.
    Distributed under the Boost Software License, Version 1.0.
    See <http://www.boost.org/LICENSE_1_0.txt>
 */


#include <hello/hello-lib>
#include <fost/test>


FSL_TEST_SUITE(hello_lib);


FSL_TEST_FUNCTION(text) {
    FSL_CHECK_EQ(hello_world::text(), "Hello world!");
}
