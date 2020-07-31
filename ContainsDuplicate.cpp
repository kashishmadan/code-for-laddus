class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<=1)
            return false;
        sort(nums.begin(),nums.end());
        vector<int>::iterator itr;
        bool dup=false;
        for(itr=nums.begin();itr!=(nums.end()-1);itr++)
        {
            if((*itr)==*(itr+1))
            {
                dup=true;
                break;
            }
        }
        return dup;
    }
};
