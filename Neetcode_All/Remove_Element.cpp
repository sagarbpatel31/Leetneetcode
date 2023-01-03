class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int flag=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                flag++;
                nums.erase(nums.begin()+i);
                i--;
                nums.push_back(-1);
            }
        }
        return nums.size()-flag;

    }
};