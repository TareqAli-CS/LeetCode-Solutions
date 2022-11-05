class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char,int>mp;
        for(auto ch : jewels)
        {
            mp[ch]++;
        }
        int ans = 0 ;
        for(auto ch : stones)
        {
            if(mp.count(ch))
            {
                ans++;
            }
        }
        return ans;
    }
};