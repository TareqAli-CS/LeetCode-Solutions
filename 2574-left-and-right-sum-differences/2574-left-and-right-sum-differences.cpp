class Solution {
public:
    vector<int>generateLeftArr(vector<int>v){
    vector<int>leftArr(v.size());
    leftArr[0] = 0;
    for(int i = 1 ; i < v.size() ; i++)
    {
        leftArr[i] = leftArr[i-1]+v[i-1];
    }
    return leftArr;
}
vector<int>generateRightArr(vector<int>v , int sum){
    vector<int>rightArr(v.size());
    rightArr[0] = sum - v[0];
    for(int i = 1 ;i < v.size()-1 ; i++)
    {
        rightArr[i] = rightArr[i-1] - v[i];
    }
    return rightArr;
}
    
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size() == 1){
            vector<int>v;
            v.push_back(0);
            return v;
        }
        
        vector<int>left = generateLeftArr(nums);
        int sum = left[left.size()-1] + nums[nums.size()-1];
        vector<int>right = generateRightArr(nums,sum);
        vector<int>ans(nums.size());
        for(int i = 0 ; i < nums.size() ; i++)
        {
             ans[i] = abs(right[i] - left[i]);
        }
        return ans;
        
    }
};