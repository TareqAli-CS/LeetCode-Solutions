class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        map<int,int>mp;
        for(int i = 0; i < v.size() ; i++)
        {
            mp[v[i]]++;
        }
        int counter = 0;
        for(auto ele : mp)
        {
           counter += ( ( ele.second *(ele.second - 1))/2);
            
        }
        return counter ;;
    }
    
};