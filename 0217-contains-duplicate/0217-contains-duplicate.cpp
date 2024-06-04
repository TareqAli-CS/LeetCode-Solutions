class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>distinctNums;
        for(int num : nums)
        {
            if(distinctNums.count(num)){
                return true;
            }
            distinctNums.insert(num);
        }
        return false;
    }
};