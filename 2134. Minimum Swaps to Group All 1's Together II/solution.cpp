class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int i , j; 
        int sum = 0;
        int sum_tmp , pos , now_val , max_val = 0;
        for (i = 0 ; i < n ; ++i) {
            sum += nums[i];
        }
        
        sum_tmp = 0;
        for (i = 0 ; i < sum ; ++i){
            sum_tmp += nums[i];
        }
        now_val = sum_tmp;

        for (i = sum ; i < n+sum ; ++i){
            if (i >= n){
                pos = i-n;
            } else {
                pos = i;
            }
            now_val = now_val + nums[pos] - nums[i-sum];
            if (now_val > max_val) {
                max_val = now_val;
            }
        }
        return sum - max_val;
    }
};

/*
// Claude
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int ones = 0;
        for (int num : nums) {
            ones += num;
        }
        
        if (ones == 0) return 0;
        
        // 擴展數組以處理循環
        vector<int> expanded(nums.begin(), nums.end());
        expanded.insert(expanded.end(), nums.begin(), nums.end());
        
        int current_ones = 0;
        // 初始窗口
        for (int i = 0; i < ones; ++i) {
            current_ones += expanded[i];
        }
        
        int max_ones = current_ones;
        
        // 滑動窗口
        for (int i = ones; i < n + ones; ++i) {
            current_ones = current_ones - expanded[i - ones] + expanded[i];
            max_ones = max(max_ones, current_ones);
        }
        
        return ones - max_ones;
    }
};
*/