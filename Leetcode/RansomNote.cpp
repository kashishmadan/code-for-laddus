class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            long long int count=0;
        sort(ransomNote.begin(), ransomNote.end()); 
        sort(magazine.begin(), magazine.end()); 
            for(long long int j=0,i=0;j<magazine.length();j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    i++;
                    count++;
                }
                if(i==ransomNote.length())
                    break;
            }
    if(count==ransomNote.length())
     return true;
    else
        return false;
    }
};
