class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        vector<int> ans;
        int cnt=0;
        for(int i =0 ; i<nums.size();i++)
        {
            if(nums[i] % 2 == 0)
            {     
                for(int j =i+1 ;j<nums.size() ;j++)
                {
                    if(nums[i]==nums[j])
                    {   
                      cnt++;
                    }
                }
                 if(cnt==0)
                {
                return nums[i];
                }
            }
           
        }
        return -1;
    }
};