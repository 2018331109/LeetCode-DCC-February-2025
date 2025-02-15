/*
3066. Minimum Operations to Exceed Threshold Value II

You are given a 0-indexed integer array nums, and an integer k.

You are allowed to perform some operations on nums, where in a single operation, you can:

    Select the two smallest integers x and y from nums.
    Remove x and y from nums.
    Insert (min(x, y) * 2 + max(x, y)) at any position in the array.

Note that you can only apply the described operation if nums contains at least two elements.

Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.
*/
class Solution{
public:
    typedef long long ll;
    int minOperations(vector<int>& nums, int k){
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        int operation=0;

        for(auto& it:nums) pq.push(it);

        while(true){
            if(pq.size()>=2 and pq.top()<k){
                ll mn, mx;
                mn=pq.top(), pq.pop();
                mx=pq.top(), pq.pop();
                pq.push(mn*2+mx);
                operation++;
            }
            else break;
        }

        return operation;
    }
};
