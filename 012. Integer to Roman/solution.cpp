class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> hash_map;
        vector<int> numarr = {1000, 500, 100, 50, 10, 5, 1, 0};
        vector<int> tmparr;
        string output = "";
        hash_map[1]    = "I";
        hash_map[5]    = "V";
        hash_map[10]   = "X";
        hash_map[50]   = "L";
        hash_map[100]  = "C";
        hash_map[500]  = "D";
        hash_map[1000] = "M";

        int i = 0;

        while (num > 0 && i < numarr.size() - 1) {
            if ((num - numarr[i] > 0) && (num - numarr[i] < numarr[i] - numarr[i + 1])) {
                tmparr.push_back(numarr[i]);
                num -= numarr[i];
            }
            else if ((num - numarr[i] > 0) && (num - numarr[i] >= numarr[i] - numarr[i + 1])) {
                if (i + 1 < numarr.size() && i > 0) {
                    tmparr.push_back(numarr[i + 1]);
                    tmparr.push_back(numarr[i - 1]);
                    num = num + numarr[i + 1] - numarr[i - 1];
                }
            }
            else if (num - numarr[i] < 0){
                i++;
            }
        }

        for (i = 0 ; i < tmparr.size() ; i++){
            output += hash_map[tmparr[i]];
        }
        return output;
    }
};