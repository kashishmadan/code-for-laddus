class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> dict {nums1.begin(), nums1.end()};
        
        vector<int> result;
        for (auto x : nums2) {
            if (dict.count(x)) {
				// if item in nums2 exists in dictionary
				// add it to the result and erase it from
				// the dictionary to avoid duplicates
                result.emplace_back(x);
                dict.erase(x);
            }
        }
        
        return result;
    }
};
