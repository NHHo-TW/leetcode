class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i , j , n = nums.size();
        vector<int> temp(n);
        k = k % n;
        for (i = 0 ; i < n ; i++) {
            temp[i] = nums[(n - k + i) % n];
        }
        nums = temp;
    }
};
