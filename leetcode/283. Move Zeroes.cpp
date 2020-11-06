Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

code:-
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==0) {
                nums.erase(nums.begin()+i);
                zeroCount ++;
            }
        }
         nums.insert (nums.end(),zeroCount,0); 
    }
};
