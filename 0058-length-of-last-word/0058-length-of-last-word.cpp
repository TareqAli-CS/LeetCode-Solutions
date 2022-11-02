class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        int i = s.length() - 1;
        if(i == 0)
            return 1;
        while(s[i] == ' ')
        {
            i--;
        }
        while(i>=0 &&  s[i] != ' ' )
        {
            i--;
            counter++;
        }
        return counter;
    }
};