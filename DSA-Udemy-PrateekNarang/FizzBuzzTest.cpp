#include<vector>
#include<string>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){
    vector<string> arr;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
            arr.push_back("FizzBuzz");
        else if(i%3==0)
            arr.push_back("Fizz");
        else if(i%5==0)
            arr.push_back("Buzz");
        else arr.push_back(std::to_string(i));
    }
    return arr;
}
