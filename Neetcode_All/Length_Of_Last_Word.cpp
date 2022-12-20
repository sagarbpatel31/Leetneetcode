class Solution {
public:
    int lengthOfLastWord(string s) {
        
  
        int final=0;

        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(final!=0)
                {
                    break;
                }
            }
            else
            {
                final++;
            }
        }
 
       return final;
    }
};