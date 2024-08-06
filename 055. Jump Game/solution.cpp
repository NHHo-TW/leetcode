class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0 , j = 0 , n = nums.size();
        if ((nums[0] == 0) && (n > 1)) {
            return false;
        } else if (n == 1) {
            return true;
        } else if (nums[0] >= n - 1) {
            return true;
        }
        j = n - 1;
        for (i = n - 2 ; i >= 0 ; --i){
            if (nums[i] >= j - i){
                j = i; 
            }
        }
        if (j == 0){
            return true;
        } else {
            return false;
        }
    }
};