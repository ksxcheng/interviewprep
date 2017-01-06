class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prev = nums[0];
        int best = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prev = max(prev + nums[i], nums[i]);
            best = max(prev, best);
        }
        return best;
    }
};
