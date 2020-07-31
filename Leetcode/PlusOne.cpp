class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::iterator itr=digits.end()-1;
       for(;itr>=digits.begin();itr--)
       {
           if(*itr<9)
           {
               *itr=*itr+1;
               return digits;
           }
           else
               *itr=0;
       }
        reverse(digits.begin(),digits.end());
        digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
