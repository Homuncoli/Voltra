#include "gtest/gtest.h"
#include "Forumla.h"

TEST(Forumla, Square) {
    ASSERT_EQ(Formula::square(10), 100);
    ASSERT_EQ(Formula::square(5), 25);
}