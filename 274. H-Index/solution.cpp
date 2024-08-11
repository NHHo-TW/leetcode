class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int i , h = 0;
        sort(citations.begin() , citations.end() , greater<int>());
        for (i = 0 ; i < n ; ++i){
            if (citations[i] >= i + 1) {
                h = i + 1;
            }
        }
        return h;
    }
};