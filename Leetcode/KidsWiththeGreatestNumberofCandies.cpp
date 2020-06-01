class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result(candies.size(), false); 
    int max=0;
    for(int i=0;i<candies.size();i++)
    {
        if(i==0)
            max=candies[i];
        if(max<candies[i])
            max=candies[i];
        candies[i]+=extraCandies;
        result[i]=true;
    }
    for(int i=0;i<candies.size();i++)
    {
        if(candies[i]>=max)
            result[i]=true;
        else result[i]=false;
    }
    return result;
    }
};
