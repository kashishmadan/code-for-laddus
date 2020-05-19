
//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
vector<int> SortBinaryArray(vector<int> binArray)
{
    // Your code goes here 
    vector<int>::iterator first=binArray.begin(),last=binArray.end()-1; 
    int swap;
    while(first<last)
    {
        
        if(*first==0)
         first++;
        if(*last==1)
         last--;
        if(*first==1 && *last==0 && first<last)
        {
            swap=*first;
            *first=*last;
            *last=swap;
        }
    }
    return binArray;
}
