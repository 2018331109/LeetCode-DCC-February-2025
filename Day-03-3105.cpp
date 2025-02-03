/*
3105. Longest Strictly Increasing or Strictly Decreasing Subarray
You are given an array of integers nums. Return the length of the longest
subarray
of nums which is either
strictly increasing
or
strictly decreasing
.*/
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt1=1, cnt2=1, ans=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]) cnt1++;
            else cnt1=1;
            
            if(nums[i]<nums[i-1]) cnt2++;
            else cnt2=1;

            ans=max(ans, max(cnt1, cnt2));
        }

        return ans;
    }
};
