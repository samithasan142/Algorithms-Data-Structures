/* Leetcode Problem no: 704 (Easy) */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int result = sol.search(nums, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    }
    else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
