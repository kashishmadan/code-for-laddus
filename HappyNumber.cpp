class Solution {
public:
    int findSum(int num)
    {
        int sum=0;
        while(num!=0)
        {
            sum+=(num%10)*(num%10);
            num/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast=n,slow=n;
        while(1)
        {
            slow=findSum(slow);
            fast=findSum(fast);
            fast=findSum(fast);
            if(fast==slow)
                break;
        }
        if(slow==1)
            return true;
        else
        return false;
    }
};
