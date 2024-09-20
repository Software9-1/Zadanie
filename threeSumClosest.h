#pragma once 
#include<limits.h>
#include <vector>
#include <set>
#include <algorithm>

int threeSumClosest() {
    vector<int> num = {1,2,3};
    sort(num.begin(), num.end());
    int target = 1;
    int n = num.size();
    int distance = INT_MAX;
    int result;

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && num[i - 1] == num[i]) continue;
        int a = num[i];
        int low = i + 1;
        int high = n - 1;
        while (low < high) {
            int b = num[low];
            int c = num[high];
            int sum = a + b + c;
            if (sum - target == 0) {
                return target;
            }
            else {
                if (abs(sum - target) < distance) {
                    distance = abs(sum - target);
                    result = sum;
                }

                if (sum - target > 0) {
                    while (high > 0 && num[high] == num[high - 1]) high--;
                    high--;
                }
                else {
                    while (low < n && num[low] == num[low + 1]) low++;
                    //move the `low` pointer
                    low++;
                }
            }
        }
    }

    return result;
}
int ThreeSumClosest(int v, int target)
{
    return v + target;
}
