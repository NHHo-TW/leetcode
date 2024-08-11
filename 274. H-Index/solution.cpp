class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int i , h;
        sort(citations.begin() , citations.end());
        for (i = 0 ; i < n ; ++i){
            if (citations[i] <= n - i) {
                h = citations[i];
            }
        }
        return h;
    }
};