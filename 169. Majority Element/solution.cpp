class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i , j = 0 , k , n = nums.size();
        for (i = 0 ; i < n ; i++) {
            k = 0;
            for (j = 0 ; j < n ; j++) {
                if (nums[j] == nums[i]) {
                    k++;
                }
            }
            if (k > (n/2)) {
                k = nums[i];
                break;
            }
        }
        return k;
    }
};