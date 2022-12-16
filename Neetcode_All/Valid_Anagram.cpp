class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> num;

        if(s.length()!=t.length())
        { return false; }

        for(int i=0;i<s.length();i++)
        {
            num[s[i]]++;
            num[t[i]]--;
        }

        for(auto it=num.begin();it!=num.end();++it)
        {
            if((*it).second!=0)
            {
                return false;
            }
        }
        return true;
    }
};