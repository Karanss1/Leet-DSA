class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> rotated(n);

        k = k % n;  // avoid useless full rotations

        // put each element in new position
        for (int i = 0; i < n; i++) {
            rotated[(i + k) % n] = nums[i];
        }

        // copy back
        for (int i = 0; i < n; i++) {
            nums[i] = rotated[i];
        }
    }
};
