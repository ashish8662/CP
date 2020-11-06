Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Follow up:

Could you solve this problem without using the library's sort function?
Could you come up with a one-pass algorithm using only O(1) constant space?
 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

code:-
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount=0;
        int oneCount=0;
        int twoCount=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i] == 0) zeroCount ++;
           if(nums[i] == 1) oneCount ++;
           if(nums[i] == 2) twoCount ++;
       }
        nums.clear();
        nums.insert (nums.end(),zeroCount,0);    
        nums.insert (nums.end(),oneCount,1);
        nums.insert (nums.end(),twoCount,2);
    }
};







