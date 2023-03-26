class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        int counter = 0;
        for(int i = 0 ;i < v.size() ; i++)
        {
            for(int j = i+1 ; j < v.size() ; j++)
            {
                if(v[i] == v[j])
                counter++;
            }
        }
        return counter;
    }
    
};