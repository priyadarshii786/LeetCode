class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        // jai ganesh

        int n = nums.size();
        vector<vector<int>> ans;
        ans.push_back(nums);

        while (true)
        {
            int maxI = n - 1, maxJ = n - 1, a = 0;
            for (int i = n - 1; i > 0; i--)
            {
                if (nums[i] > nums[i - 1])
                {
                    maxI = i;
                    a = 1;
                    break;
                }
            }
            for (int i = n - 1; i > 0; i--)
            {
                if (nums[i] > nums[maxI - 1])
                {
                    maxJ = i;
                    break;
                }
            }
            if (a == 0)
            {
                reverse(nums.begin(), nums.end());
            }
            else
            {
                swap(nums[maxJ], nums[maxI - 1]);
                reverse(nums.begin() + maxI, nums.end());
            }

            int p = 1;

            for (int i = 0; i < n; i++)
            {
                if (ans[0][i] == nums[i])
                {
                    continue;
                }
                else
                {
                    p = 0;
                    break;
                }
            }
            if (p == 1)
                break;
            ans.push_back(nums);
        }

        return ans;
    }
};
