/* Leetcode Problem no: 215 (Medium) */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
};

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int k = 3;

    Solution sol;
    int largest = sol.findKthLargest(nums, k);
    cout << "The kth largest element is: " << largest << std::endl;

    return 0;
}

/*
    Complexity:
    Time complexity: O(n*log(n)) for sorting
    Space complexity: O(1)
*/

/*
//Solution 2: Max-Heap Approach (Time complexity: O(n*log(k)))
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++)
            pq.pop();
        return pq.top();
    }
};
*/
