#include <unordered_map>
class Solution {
public:
    int romanToInt(string s) {
        int polarity = 1, tmp = 0, result;
        unordered_map<char, int> hash_map;
        hash_map['I'] = 1;
        hash_map['V'] = 5;
        hash_map['X'] = 10;
        hash_map['L'] = 50;
        hash_map['C'] = 100;
        hash_map['D'] = 500;
        hash_map['M'] = 1000;

        result = hash_map[s[0]];

        for (size_t i = 1 ; i < s.length() ; i++) {
            if (i == 1) {
                if (hash_map[s[i]] > result){
                    result = -result;
                }
                tmp = hash_map[s[i]];
                continue;
            }
            polarity =  hash_map[s[i]] <= tmp ? 1 : -1 ;
            result = result + tmp * polarity;
            tmp = hash_map[s[i]];
            //if (i == s.length() - 1){
            //    result += hash_map[s[i]];
            //}
        }
        result += tmp;
        return result;
    }
};