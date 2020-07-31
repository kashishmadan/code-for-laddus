class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=nums.size(),i=0;
        vector<int>::iterator itr;
        for(itr=nums.begin();itr!=nums.end();itr++)
        {
            result=result^(*itr);
            result=result^i;
            i++;
        }
        return result;
    }
};
