class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        sort(strs.begin(), strs.end());

        if (strs.size() == 1)
            return strs[0];

        int a = 0;
        string ans;
        for (int i = 0; i < strs[0].size(); i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[0][i] == strs[j][i])
                    a = 1;

                else
                {
                    a = 0;
                    break;
                }
            }
            if (a == 1)
                ans = ans + strs[0][i];

            else
                return ans;
        }
        return ans;
    }
};