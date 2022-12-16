class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        reverse(arr.begin(),arr.end());
        vector<int> answer;

        answer.push_back(-1);
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>answer[i])
            {
                answer.push_back(arr[i]);
            }
            else
            {
                answer.push_back(answer[i]);
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};