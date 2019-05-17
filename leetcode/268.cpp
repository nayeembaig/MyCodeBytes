class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0, vsize = nums.size();
        int expectedSum = vsize*(vsize + 1)/2;
        
        for(int i = 0; i < vsize; i++)
            sum += nums[i];
        
        return (expectedSum - sum);
    }
};