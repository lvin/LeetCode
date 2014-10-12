class Solution {
public:
    bool check(char c, bool used[])
{
	if (c == '.') return true;

	if (used[c - '1']) return false;

	used[c - '1'] = true;
	return true;
}

bool isValidSudoku(vector<vector<char> > &board) {
        bool used[9];

		for (int i = 0; i < 9; ++i)
		{
		    fill(used, used + 9, false);
			for (int j = 0; j < 9; ++j)
			{
				if(!check(board[i][j], used)) return false;
			}

			fill(used, used + 9, false);

			for (int j = 0; j < 9; ++j)
			{
				if(!check(board[j][i], used)) return false;
			}
		}

			for (int r = 0; r < 3; ++r)
				for (int c = 0; c < 3; ++c)
				{
					fill(used, used + 9, false);

					for (int i = r * 3; i < r * 3 + 3; ++i)
						for (int j = c * 3; j < c *3 + 3; ++j)
							if (!check(board[i][j],used)) return false;
				}

			return true;
    }

};

