class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size() - 1;
        int maxi = 0;
        for (int i = 0; i <= maxi; i++)
        {
            maxi = max(maxi, i + nums[i]);
            if (maxi >= n)
                return true;
        }
        return false;
    }
};