/*
1980. Find Unique Binary String
Given an array of strings nums containing n unique binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return any of them.
*/

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string res="";

        for(int i=0; i<n; i++) {
            char ch=nums[i][i];
            res+=(ch=='1')? '0': '1';
        }

        return res;
    }
};
