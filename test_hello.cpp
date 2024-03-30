#include <gtest/gtest.h>

#include "lib.h"

TEST(HelloTest, BasicAssertions) {
    EXPECT_TRUE(version() > 0);
}