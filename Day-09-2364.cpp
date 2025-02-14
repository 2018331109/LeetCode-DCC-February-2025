/*
2364. Count Number of Bad Pairs
You are given a 0-indexed integer array nums. A pair of indices (i, j) is a bad pair if i < j and j - i != nums[j] - nums[i].

Return the total number of bad pairs in nums.

*/


class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        long long goodPairs = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int key = nums[i] - i;
            goodPairs += freq[key];
            freq[key]++;
        }
        
        return (n * (n - 1)) / 2 - goodPairs;
    }
};
