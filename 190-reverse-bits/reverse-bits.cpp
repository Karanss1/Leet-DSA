class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        int i = 0;
        while (i < 32) {
            result <<= 1;        // Shift result left
            result |= (n & 1);   // Take LSB of n
            n >>= 1;             // Shift n right
            i++;                 // Move to next bit
        }
        return result;
    }
};
