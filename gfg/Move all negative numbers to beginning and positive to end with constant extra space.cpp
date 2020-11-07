An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
code:-



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
   for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++) {
        if (nums[cur] < 0) {
            swap(nums[lastNonZeroFoundAt++], nums[cur]);
        }
    }} 
};
