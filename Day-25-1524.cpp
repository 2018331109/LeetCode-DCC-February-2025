/*
1524. Number of Sub-arrays With Odd Sum
Given an array of integers arr, return the number of subarrays with an odd sum.

Since the answer can be very large, return it modulo 109 + 7.
*/
class Solution {
public:
    const int mod=1000000007;

    int numOfSubarrays(vector<int>& arr) {
        int ans=0, odd=0, even=1, curr=0;

        for(auto it: arr) {
            curr+=it;
            curr%=mod;

            if(curr%2) {
                ans+=even, odd++;
                ans%=mod;
            }
            else {
                ans+=odd, even++;
                ans%=mod;
            }
        }

        return ans;
    }
};
