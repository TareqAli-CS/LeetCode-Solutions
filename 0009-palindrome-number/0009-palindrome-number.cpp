class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return 0;
        }else if(x == 0)
        {
            return 1;
        }
        vector<int>v;
        int temp = x;
        while(temp != 0)
        {
            v.push_back(temp% 10);
            temp /= 10;
        }
        
        int i = 0, j = v.size()-1;
        while(v[i] == v[j] && i < v.size()/2)
        {
            i++,j--;
        }
        return (i == v.size()/2);
        
    }
};