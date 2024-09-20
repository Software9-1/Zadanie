#include <gtest/gtest.h>
#include "threeSumClosest.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

TEST(ATEST, BTEST) {
    int a[] = { -1, 2, 1, -4 };
    vector<int> n(a, a + sizeof(a) / sizeof(int));
    int target = 1;
    EXPECT_EQ(2, threeSumClosest(n, target));
}
