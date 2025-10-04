class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        // Loop until n becomes 0
        while (n != 0) {
            // This operation n = n & (n - 1) turns off the rightmost set bit.
            // For example:
            // n = 110100 (binary) -> 52 (decimal)
            // n - 1 = 110011 (binary) -> 51 (decimal)
            // n & (n - 1) = 110000 (binary) -> 48 (decimal)
            // Each time we perform this operation, one '1' bit is removed.
            // We increment the count for each '1' bit removed.
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};