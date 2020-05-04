// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i = 1;  
        int j = n;  
        int mid=0;  
        while(i <= j){  
            mid = ((j-i)>> 1) + i;  
            if(isBadVersion(mid)) 
                j = mid - 1;  
            else i = mid + 1;  
        }  
        return j + 1;  
    }  
};
    
