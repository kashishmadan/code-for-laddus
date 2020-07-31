class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=0)
            return;
        k=k%(nums.size());
        int i=0,j=0,temp=0;
        for(i=0,j=nums.size()-1;i<nums.size()/2;i++,j--)
        {
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(i=0,j=k-1;i<k/2;i++,j--)
        {
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(i=k,j=nums.size()-1;i<k+(nums.size()-k)/2;i++,j--)
        {
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        return;
    }
};
