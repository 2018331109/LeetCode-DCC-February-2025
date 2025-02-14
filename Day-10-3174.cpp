/*
3174. Clear Digits
You are given a string s.

Your task is to remove all digits by doing this operation repeatedly:

Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.

Note that the operation cannot be performed on a digit that does not have any non-digit character to its left.
*/
class Solution{
public:
    bool check(char ch) return ch>='0' and ch<='9';

    string clearDigits(string s){
        stack<char> st;
        string ans="";

        for(auto it:s){
            if(!check(it)) st.push(it);
            else{
                if(!st.empty() and !check(st.top())) 
                    st.pop();
            }
        }

        while(!st.empty()) ans+=st.top(), st.pop();
        
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
