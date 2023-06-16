class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // jai ganesh
        int size = nums.size();
        int max_sum = nums[0], curr_sum = nums[0];
        for (int i = 1; i < size; i++)
        {
            curr_sum = max(curr_sum + nums[i], nums[i]);
            max_sum = max(curr_sum, max_sum);
        }

        return max_sum;
    }
};