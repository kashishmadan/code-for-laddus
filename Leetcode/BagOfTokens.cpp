class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(),tokens.end());
        int maxpoints=0,points=0,i=0,j=tokens.size()-1;
        while(i<=j)
        {
            if(P>=tokens[i])
            {
                points++;
                P=P-tokens[i];
                i++;
                maxpoints=max(maxpoints,points);
            }
            else if(points > 0)
            {
                points--;
                P+=tokens[j];
                j--;
            }
            else return maxpoints;
        }
        return maxpoints;
    }
};
