class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());

        int maxi = intervals[0][1];
        int mini = intervals[0][0];
        vector<vector<int>> ans;

        int i = 1;
        while (i < intervals.size())
        {
            if (intervals[i][0] <= maxi)
            {
                maxi = max(intervals[i][1], maxi);
            }
            else
            {
                ans.push_back({mini, maxi});
                mini = intervals[i][0];
                maxi = intervals[i][1];
            }

            i++;
        }

        ans.push_back({mini, maxi});

        return ans;
    }
};
