class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        // jai ganesh
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            vector<int> temp(n);
            ans.push_back(temp);
        }
        int startingRow = 0;
        int endingRow = n - 1;
        int startingCol = 0;
        int endingCol = n - 1;
        int total = (n * n);
        int value = 1;

        while (value <= total)
        {
            for (int i = startingCol; i <= endingCol; i++)
            {
                ans[startingRow][i] = value;
                value++;
            }
            startingRow++;

            for (int i = startingRow; i <= endingRow; i++)
            {
                ans[i][endingCol] = value;
                value++;
            }

            endingCol--;

            for (int i = endingCol; i >= startingCol; i--)
            {
                ans[endingRow][i] = value;
                value++;
            }
            endingRow--;

            for (int i = endingRow; i >= startingRow; i--)
            {
                ans[i][startingCol] = value;
                value++;
            }

            startingCol++;
        }

        return ans;
    }
};
