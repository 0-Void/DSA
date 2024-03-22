
189. Rotate array (LC)

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]



 // --------------------method 1----------------------
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n)
            return;
        if (k > n)
            k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin()+k,nums.end());
    }
};


// ---------------method 2------------------------
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n)
            return;
        if (k > n)
            k = k % n;

        vector<int> temp(n);
        int x=0;
        for (int i = n - k; i < n; i++) {
             temp[x++]=nums[i];
        }
        for (int i = 0; i < n - k; i++) {
              temp[x++]=nums[i];
        }

        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
        return;
    }
};