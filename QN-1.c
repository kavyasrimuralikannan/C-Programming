class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> l(2);
       for(int i=0;i<nums.size()-1;i++)
       {
        for(int j=i+1;j<nums.size();j++)
        {
            if(target==nums[i]+nums[j])
            l[0]=i;
            l[1]=j;
            return l;
        }
       } 
       return l;
    }
};
