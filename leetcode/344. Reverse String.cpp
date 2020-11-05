class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=(n>>1)-1;i>=0;i--)      
            swap(s[i],s[n-i-1]);            
         }
};
