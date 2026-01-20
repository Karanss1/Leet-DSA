class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        unordered_set<int> s(nums.begin(), nums.end());

        int bestLength = 0;

        for (int start : s) {

            if (s.count(start - 1) == 0) {   // start of a sequence

                int next = start;
                int length = 1;

                while (s.count(next + 1)) {
                    next++;
                    length++;
                }

                bestLength = max(bestLength, length);
            }
        }
        return bestLength;
    }
};
