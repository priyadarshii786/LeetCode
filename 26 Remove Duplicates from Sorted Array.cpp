class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // jai ganesh
        vector<int> v;
        v.push_back(nums[0]);

        for (int i = 0; i < (nums.size() - 1); i++)
        {
            if (nums[i] != nums[i + 1])
                v.push_back(nums[i + 1]);
        }

        nums = v;
        return nums.size();
    }
};