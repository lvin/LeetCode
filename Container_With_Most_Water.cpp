class Solution {
public:
    int maxArea(vector<int> &height) {
        int start = o;
		int end = height.size() - 1;
		int result = INT_MAX;
		while (start < end) {
			int area = min(height[end], height[start]) * (end - start);
			result = max(result, area);
			if (height[start] < height[end]) {
				++start;
			} else {
				end--;
			}
		}

		return result;
    }
};

