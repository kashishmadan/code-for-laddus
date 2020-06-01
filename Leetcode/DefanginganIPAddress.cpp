class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
            {
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            }
            else result.push_back(address[i]);
        }
        return result;
    }
};
