#include <gtest/gtest.h>
#include "threeSumClosest.h"
#include<vector>

TEST(ATEST, BTEST) {
  vector<int> nums = { -1, 2, 1, -4 };
    EXPECT_EQ(2, threeSumClosest({ -1, 2, 1, -4 }, 1));
}
