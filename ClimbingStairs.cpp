class Solution {
public:
    int climbStairs(int n) {
        int first=1;
        int second=2;
        int temp;
        if(n==1)    return first;
        if(n==2)    return second;
        n=n-2;
        while(n--)
        {
            temp=first+second;
            first=second;
            second=temp;
        }
        return second;
    }
};
