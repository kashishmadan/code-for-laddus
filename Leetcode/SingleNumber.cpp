class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        vector<int>::iterator i;
     for (i=nums.begin(); i!=nums.end(); i++) {
         num ^= *i;
     }
     return num;
    }
};
