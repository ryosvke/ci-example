#include "fibonacci.h"
#include "utest.h/utest.h"

UTEST(fibonacci, equal) {
    ASSERT_EQ(fibonacci(1), 0);
    ASSERT_EQ(fibonacci(2), 1);
    ASSERT_EQ(fibonacci(3), 1);
    ASSERT_EQ(fibonacci(4), 2);
    ASSERT_EQ(fibonacci(5), 3);
    ASSERT_EQ(fibonacci(6), 5);
}

UTEST(fibonacci, not_equal) {
    ASSERT_NE(fibonacci(2), 10);
}

UTEST_MAIN();
