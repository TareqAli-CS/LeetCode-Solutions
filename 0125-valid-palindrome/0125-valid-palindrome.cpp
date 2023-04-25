class Solution {
public:
    bool isPalindrome(string s) {
        
        
    bool pali = true;
        
        for(int i = 0 ;i < s.length() ; i++)
        {
            if(     (s[i] < 'A') ||  (  s[i] > 'Z' && s[i] < 'a' ) || ( s[i] > 'z' ) )
            {
                if(s[i] >= '0' && s[i] <= '9')
                {
                    continue;
                }
                s.erase(s.begin()+i);
                i--;
            }else{
                s[i] = tolower(s[i]);
                
            }
        }
        string temp = s;
        reverse(s.begin(),s.end());
        if(s != temp)
        {
            pali = false;
        }
        
    return pali;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
};