/*
1752. Check if Array Is Sorted and Rotated
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(), i=1, f=0, cnt=0;

        for(int i=1; i<n; i++){
            cnt+=nums[i]<nums[i-1];
        }

        if(cnt==0 or (cnt==1 and nums[n-1]<=nums[0]))
            return true;

        return false; 
    }
};
