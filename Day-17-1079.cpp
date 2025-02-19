/*
1079. Letter Tile Possibilities

You have n  tiles, where each tile has one letter tiles[i] printed on it.

Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.
*/

class Solution{
public:
    int cnt;
    void solve(vector<int>& freq){
        cnt++;

        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;

            freq[i]--;
            solve(freq);
            freq[i]++;
        }
    }

    int numTilePossibilities(string tiles){
        cnt=0;
        vector<int> freq(26, 0);

        for(auto& ch:tiles) freq[ch-'A']++;

        solve(freq);

        return cnt-1;
    }
};
