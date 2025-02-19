/*
1415. The k-th Lexicographical String of All Happy Strings of Length n
A happy string is a string that:

    consists only of letters of the set ['a', 'b', 'c'].
    s[i] != s[i + 1] for all values of i from 1 to s.length - 1 (string is 1-indexed).

For example, strings "abc", "ac", "b" and "abcbabcbcb" are all happy strings and strings "aa", "baa" and "ababbc" are not happy strings.

Given two integers n and k, consider a list of all happy strings of length n sorted in lexicographical order.

Return the kth string of this list or return an empty string if there are less than k happy strings of length n.
*/
class Solution {
public:
    void solve(int n, int k, int& cnt, string& cur, string& ans) {
        if(cur.size()==n) {
            if(++cnt==k) ans=cur;

            return; 
        }

        for(char ch='a'; ch<='c'; ch++) {
            if(!cur.empty() and cur.back()==ch) continue;

            cur.push_back(ch);          // DO
            solve(n, k, cnt, cur, ans); // EXPLORE

            if(!ans.empty()) return;

            cur.pop_back();             // UNDO
        }
    }

    string getHappyString(int n, int k) {
        string cur="", ans="";
        int cnt=0;

        solve(n, k, cnt, cur, ans);

        return ans;
        
    }
};
