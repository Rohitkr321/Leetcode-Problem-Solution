/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int > map;

        for ( int i = 0; i< nums.size(); i++) {
            map[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int remain = target - num;
            if (map.find(remain) != map.end() && map[remain] != i) {
                return vector<int>{i, map[remain]};
            }
        }
        return vector<int>{};
    };
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = solution.twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    return 0;
}
