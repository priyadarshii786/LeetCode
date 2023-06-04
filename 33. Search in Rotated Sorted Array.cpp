class Solution
{
public:
    int findPivot(vector<int> &nums)
    {
        // jai ganesh
        int s = 0, end = nums.size() - 1;
        int mid = s + (end - s) / 2;
        while (s < end)
        {
            if (nums[mid] >= nums[0])
                s = mid + 1;

            else
                end = mid;

            mid = s + (end - s) / 2;
        }
        return mid;
    }

    int binarySearch(vector<int> &nums, int s, int e, int target)
    {
        int mid = s + (e - s) / 2;

        while (s <= e)
        {
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;

            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {

        int ans = 0;
        int pivot = findPivot(nums);

        if (nums[nums.size() - 1] >= target && nums[pivot] <= target)
            ans = binarySearch(nums, pivot, nums.size() - 1, target);
        else
            ans = binarySearch(nums, 0, pivot - 1, target);

        return ans;
    }
};
