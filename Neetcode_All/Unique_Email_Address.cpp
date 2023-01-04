#include<cstring>
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map <string,int> mp;
        for(int i=0;i<emails.size();i++)
        {
            string str = emails[i];
            string s ="";
            
            int pos = str.find('@');
            string temp1 = str.substr(0,pos);
            string temp2 = str.substr(pos,str.length());
            
            int idx = 0;
            while(idx < temp1.length())
            {
                if(temp1[idx]=='+')
                {
                    break;  
                }
                else if(temp1[idx]=='.')
                {
                    idx++;
                }
                else 
                {
                    s.push_back(temp1[idx]);
                    idx++;
                }
            }   
            mp[s+temp2]++;
        }
        return mp.size();

    }
};