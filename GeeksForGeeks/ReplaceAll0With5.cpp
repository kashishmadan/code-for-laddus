
/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int temp=n,answer=0,rem=0;
    while(temp!=0)
    {
        rem=temp%10;
        if(rem==0)
            rem=5;
        answer=(answer*10)+rem;
        temp=temp/10;
    }
    temp=answer; answer=0;
    while(temp!=0)
    {
        rem=temp%10;
        answer=(answer*10)+rem;
        temp=temp/10;
    }
    return answer;
}
