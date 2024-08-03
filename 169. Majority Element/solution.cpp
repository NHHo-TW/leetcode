class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i , j = 0 , k , n = nums.size();
        sort(nums.begin() , nums.end());
        j = (n / 2) + 1;
        if (nums[0] == nums[j - 1]){
            k = nums[0];
        } else {
            for (i = j ; i < n ; ++i){
                if (nums[i - j + 1] == nums[i]){
                    k = nums[i];
                }
            }
        }
        return k;
    }
};