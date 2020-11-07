Given an array, rotate the array to the right by k steps, where k is non-negative.

Follow up:

Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
Could you do it in-place with O(1) extra space?
 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


code:-
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
         int count = 0;
         for (int start = 0; count < n; start++) {
          int current = start;
          int prev = nums[start];
          do {
            int next = (current + k) % n;
            int temp = nums[next];
            nums[next] = prev;
            prev = temp;
            current = next;
            count++;
          } while (start != current);
         }
      }
};

Runtime: 4 ms, faster than 99.05% of C++ online submissions for Rotate Array.
Memory Usage: 9.9 MB, less than 99.98% of C++ online submissions for Rotate Array.

code:-

class Solution {
 public:
     void rotate(vector<int>& nums, int k) {
         int temp;
         for(int j=0;j<k;j++)
        { int n =nums.size();
         temp = nums[n-1];
         for(int i=n-1 ; i>0 ;i--){
              nums[i]=nums[i-1];
        }
        nums[0]=temp;}
    }
 };
 
 Time Limit Exceeded	N/A	N/A	cpp
 
 
 
