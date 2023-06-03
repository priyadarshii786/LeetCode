class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        // jai ganesh

        int maxI = nums.size() - 1, maxJ = nums.size() - 1, ans = 0;
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                maxI = i;
                ans = 1;
                break;
            }
        }

        for (int j = nums.size() - 1; j > 0; j--)
        {
            if (nums[j] > nums[maxI - 1])
            {
                maxJ = j;
                break;
            }
        }
        if (ans == 0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        swap(nums[maxJ], nums[maxI - 1]);
        reverse(nums.begin() + maxI, nums.end());
    }
};
