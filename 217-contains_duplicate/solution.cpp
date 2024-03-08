class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> eles;
        for (int i=0; i<nums.size(); ++i) {
            if (eles.find(nums[i]) != eles.end()) {
                return true;
            }
            eles.insert(nums[i]);
        }
        return false;
    }
};