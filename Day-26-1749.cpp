/*
1749. Maximum Absolute Sum of Any Subarray
You are given an integer array nums. The absolute sum of a subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr).

Return the maximum absolute sum of any (possibly empty) subarray of nums.

Note that abs(x) is defined as follows:

    If x is a negative integer, then abs(x) = -x.
    If x is a non-negative integer, then abs(x) = x.
*/

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mx=0, mn=0, n=nums.size();
        int positive=0, negative=0;

        for(int i=0; i<n; i++) {
            positive+=nums[i];
            negative+=nums[i];
            
            if(positive<0) positive=0;
            if(negative>0) negative=0;

            mx=max(mx, positive);
            mn=min(mn, negative);
        }

        return max(mx, abs(mn));
    }
};
