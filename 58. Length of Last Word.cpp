class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int cnt = 0;
        bool flag = false;

        for (int i = s.size() - 1; i > -1; i--)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                flag = true;
                cnt++;
            }
            else
            {
                if (flag == true)
                    return cnt;
            }
        }

        return cnt;
    }
};