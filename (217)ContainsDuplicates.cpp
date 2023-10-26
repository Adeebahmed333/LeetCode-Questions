class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n =nums.size();
        unordered_set<int> s(nums.begin(),nums.end());//createing a hash table to remove duplicates
       return s.size()<n;//comparing size of hash table with original size
    }
};