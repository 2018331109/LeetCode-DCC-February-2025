/*
2342. Max Sum of a Pair With Equal Sum of Digits
You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].

Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions. If no such pair of indices exists, return -1.
*/
class Solution{
public:
    int get_sum(int it){
        int total=0;
        
        while(it) total+=it%10, it/=10;

        return total;
    }

    int maximumSum(vector<int>& nums){
        int ans=-1;
        unordered_map<int, int> mp;

        for(auto& it:nums){
            int dig_sum=get_sum(it);

            if(mp.count(dig_sum)) 
                ans=max(ans, mp[dig_sum]+it);

            mp[dig_sum]=max(mp[dig_sum], it);
        }

        return ans;
    }
};
