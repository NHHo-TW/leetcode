class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Runtime 0mS / Memory 10.80MB
        int i = 0;
        int tmparr[100];
        for (int j = 0 ; j < nums.size() ; j++) {
            if (nums[j] != val){
                tmparr[i] = nums[j];
                i++;
            }
        }
        nums.resize(i);
        for (int j = 0 ; j < i ; j++) {
            nums[j] = tmparr[j];
        }
        return i;
    }
};