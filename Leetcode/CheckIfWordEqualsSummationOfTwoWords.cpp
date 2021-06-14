class Solution {
public:
    int numericalValue(string s)
    {
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            result=(s[i]-'a')+(result*10);
        }
        return result;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        // to int
        int first = numericalValue(firstWord);
        int second = numericalValue(secondWord);
        int target = numericalValue(targetWord);
        if((first+second)==target)
            return true;
        else return false;
        
    }
};
