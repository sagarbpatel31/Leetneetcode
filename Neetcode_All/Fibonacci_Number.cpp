class Solution {
public:
    int fib(int n) {
        
        int answer=0,first=0,second=1;
        if(n==1 || n==2)
        {
            return second;
        }
        n--;
        while(n>0)
        {
            answer=first+second;
            first=second;
            second=answer;
            n--;
        }
        return answer;
    }
};