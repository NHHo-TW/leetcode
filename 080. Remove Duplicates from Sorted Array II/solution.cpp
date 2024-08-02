class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        if (nums.size() > 2) {
            for (int i = 2 ; i < nums.size() ; i++){
                if ((nums[i] != nums[k]) || (nums[i] != nums[k+1])){
                    nums[k+2] = nums[i];
                    k++;
                }
            }
            return k+2;
        } else {
            return k = nums.size();
        }
        
    }
};