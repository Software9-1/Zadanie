#include <iostream>
#include <vector>
#include <cassert>
#include <limits.h>

using namespace std;

int threeSumClosest(vector<int>& num, int target) {
    // Ваша реализация функции threeSumClosest
    // Пример реализации:
    int closest = INT_MAX;
    int n = num.size();
    sort(num.begin(), num.end());
    
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = num[i] + num[left] + num[right];
            if (abs(sum - target) < abs(closest - target)) {
                closest = sum;
            }
            if (sum < target) {
                ++left;
            } else if (sum > target) {
                --right;
            } else {
                return sum; // точное совпадение
            }
        }
    }
    return closest;
}

void runTests() {
    // Ваши тесты
    // Тест 1: Простой случай
    {
        vector<int> nums = {-1, 2, 1, -4};
        int target = 1;
        int result = threeSumClosest(nums, target);
        assert(result == 2);
    }

    // Тест 2: Все элементы равны
    {
        vector<int> nums = {1, 1, 1, 1};
        int target = 3;
        int result = threeSumClosest(nums, target);
        assert(result == 3);
    }

    // Тест 3: Смешанные положительные и отрицательные числа
    {
        vector<int> nums = {0, 0, 0, 0};
        int target = 1;
        int result = threeSumClosest(nums, target);
        assert(result == 0);
    }

    // Тест 4: Положительные числа
    {
        vector<int> nums = {1, 2, 3, 4};
        int target = 6;
        int result = threeSumClosest(nums, target);
        assert(result == 6);
    }

    // Тест 5: Отрицательные числа
    {
        vector<int> nums = {-4, -2, -1, -3};
        int target = -5;
        int result = threeSumClosest(nums, target);
        assert(result == -6);
    }

    // Тест 6: Большие значения
    {
        vector<int> nums = {1000, 2000, 3000};
        int target = 5000;
        int result = threeSumClosest(nums, target);
        assert(result == 6000);
    }

    // Тест 7: Пустой массив
    {
        vector<int> nums = {};
        int target = 0;
        int result = threeSumClosest(nums, target);
        assert(result == INT_MAX); // Или любое другое значение для обработки пустого массива
    }

    cout << "Все тесты пройдены!" << endl;
}

int main() {
    runTests();
    return 0;
}
