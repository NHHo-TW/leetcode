class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Runtime 8mS / Memory 21.45MB
        int i , j = -100 , k = 0;

        int numtmp[3*10000];
        for (i = 0 ; i < nums.size() ; i++){
            while (j < nums[i]){
                j++;
            }
            if (nums[i] == j){
                numtmp[k] = nums[i];
                j++;
                k++;
            }
        }
        nums.resize(k);
        for(i = 0 ; i < k ; i++){
            nums[i] = numtmp[i];
        }
        return k;
    }
};


/*
#include <vector>
#include <algorithm> // 包含 std::unique 和 std::distance

class Solution2 {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        // 使用 std::unique 移除重複元素
        auto end_unique = std::unique(nums.begin(), nums.end());
        
        // 計算新長度並調整大小
        int new_length = std::distance(nums.begin(), end_unique);
        nums.resize(new_length);

        return new_length;
    }
};
*/