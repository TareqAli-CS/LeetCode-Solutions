class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        
        unordered_map<int,int>mp;
        for(int i = 0 ;i < v.size() ; i++)
        {
            mp.insert(make_pair(v[i],i));
        }


        for(int i = 0 ; i < v.size() ; i++)
        {
            if( mp.find(target-v[i]) != mp.end() &&  mp[target-v[i]] != i   )
            {
                vector<int>ans{i , mp[target-v[i]]};
                return ans;
            }
        }
        
        
        vector<int>temp;
        
        return temp;
        
    }
};