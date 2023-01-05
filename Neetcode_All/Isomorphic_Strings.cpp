class Solution {
public:


    bool isIsomorphic(string s, string t) {
        unordered_map <char,int> st1,st2;

        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            if(st1[s[i]]!=st2[t[i]])
            {
                return false;
            }
            st1[s[i]]=i+1;
            st2[t[i]]=i+1;
        }
        
        
        return true;
    }
};