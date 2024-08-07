// V02 
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i = 0 , last_pos = 0 , step = 0 , distance;
        while (n > 1){
            for (i = 0 ; i < n ; ++i){
                distance = n - i - 1;
                if (nums[i] >= distance){
                    step++;
                    last_pos = i;
                    i = n;
                }
            }
            n = last_pos + 1;
        }
        return step;
    }
};

/*
// V01
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i = 0 , j , k = 0 , step = 0 , max_num = 0;
        
        while (i < n - 1) {
            max_num = 0;
            if (i + nums[i] >= n - 1){
                k = n;
            } else {
                for (j = 1 ; j <= nums[i] ; ++j) {
                    if (nums[i + j] > max_num) {
                        max_num = nums[i + j];
                        k = i + j;
                        cout << "i=" << i << ",j=" << j << ",k=" << k << endl;
                    }
                }
            }
            i = k;
            step++;
        }
        return step;
    }
};
*/