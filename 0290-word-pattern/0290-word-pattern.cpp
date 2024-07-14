class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string word = "";
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == ' ')
            {
                words.push_back(word);
                word = "";
            }else{
                word += s[i];
                if(i == s.length() - 1)
                    words.push_back(word);
            }
        }
        // for(int i = 0 ; i < words.size() ; i++)
        // {
        //     cout<<words[i]<<endl;
        // }
        
        if(words.size() != pattern.length())
        {
            return false;
        }
        map<char,string>dictionary;
        set<string>uniqueWords;
        for(int i = 0; i < pattern.length() ; i++)
        {
            if(dictionary.count(pattern[i]) && words[i] != dictionary[pattern[i]])
            {  
                return false;
            }else if(!dictionary.count(pattern[i]) && uniqueWords.count(words[i])){
                return false;
                
            }else{
                uniqueWords.insert(words[i]);
                dictionary[pattern[i]] = words[i];
            }
        }
        return true;
    }
};