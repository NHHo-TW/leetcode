class Solution {
public:
    string intToRoman(int num) {
        map<int, string> hash_map;
        string output = "";
        hash_map[1]    = "I";
        hash_map[5]    = "V";
        hash_map[10]   = "X";
        hash_map[50]   = "L";
        hash_map[100]  = "C";
        hash_map[500]  = "D";
        hash_map[1000] = "M";
        hash_map[4] = "IV";
        hash_map[9] = "IX";
        hash_map[40] = "XL";
        hash_map[90] = "XC";
        hash_map[400] = "CD";
        hash_map[900] = "CM";
        
        for (auto i = hash_map.rbegin() ; i != hash_map.rend(); ++i){
            string tmpstr = i -> second;
            int tmpint = i-> first;
            while (num >= tmpint){
                output += tmpstr;
                num -= tmpint;
            }
        }
        return output;
    }
};