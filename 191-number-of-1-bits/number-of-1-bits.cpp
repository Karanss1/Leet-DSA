class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            n &= (n - 1);  // drop the lowest set bit
            // Brian Kernighan’s Algorithm it reduces bit one by one till end 
            count++;
        }
        return count;
    }
};
