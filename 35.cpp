class Solution
{
public:
    int leftOccurance(vector<int> &nums, int target)
    {
        // jai ganesh
        int s = 0, e = nums.size() - 1, ans = -1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    int rightOccurance(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1, ans = -1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        int l = leftOccurance(nums, target);
        int r = rightOccurance(nums, target);

        vector<int> v;
        v.push_back(l);
        v.push_back(r);
        return v;
    }
};