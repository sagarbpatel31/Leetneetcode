class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

            string ans="";
            sort(strs.begin(),strs.end());
            
            string a=strs[0];
            string lst=strs[strs.size()-1];

            for(int i=0;i<a.length();i++)
            {
                if(a[i]==lst[i])
                {
                    ans+=a[i];
                }
                else
                {
                    break;
                }
            }


           return ans;
    }
};