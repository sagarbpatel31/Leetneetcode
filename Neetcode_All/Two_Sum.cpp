
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> answer;
        int sample;
        vector<int> ::iterator it;
        for(int i=0;i<nums.size();i++)
        {   
           sample=nums[i];
           it =find(nums.begin()+i+1,nums.end(),(target-sample));
           if(it!=nums.end())
           {
               answer.push_back(i);
               answer.push_back(it-nums.begin());
           }
        }        
        return answer;
            
    }
};