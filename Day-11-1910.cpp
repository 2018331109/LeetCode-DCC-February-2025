/*
1910. Remove All Occurrences of a Substring
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

    Find the leftmost occurrence of the substring part and remove it from s.

Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.
*/

class Solution{
public:
    string removeOccurrences(string s, string part){
        string result="";
        int n=part.size();

        for(auto& ch:s){
            result+=ch;
            int m=result.size();

            if(m>=n and result.substr(m-n)==part){
                result.erase(m-n);
            }
        }

        return result;
    }
};
