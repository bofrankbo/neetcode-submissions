class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        // int currl = 0;
        // int currr = 0;
        int maxc = 0;

        while (l < r){
            int curr_size = (r - l) * min(heights[l], heights[r]);
            if (curr_size > maxc){
                maxc = curr_size;
            }
            if (heights[l] > heights[r]){
                r--;
            } else {
                l++;
            }
        }
        return maxc;
    }
};
