class Solution {
public:

bool isValid(string s)
{
    stack<char>openPar; // open parantheses
    char par; // parentheses
    for(int i = 0 ;i<s.length();i++)
    {

         par = s[i];
        if(par == '(' || par == '{' || par == '[')
        {
            openPar.push(par);
        }
        else
        {
            if(openPar.empty())
            {
                openPar.push(par);
            }
            if(openPar.top() == '(' && par == ')' )
            {
                openPar.pop();
            }
            else if ( int(par-2) == int(openPar.top()) )
            {
                openPar.pop();
            }
            else
            {
                break;
            }

        }

    }

    return (openPar.empty());

}
};