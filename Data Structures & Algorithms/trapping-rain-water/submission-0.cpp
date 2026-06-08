class Solution {
public:
    int trap(vector<int>& height) {
        int maxL = 0;
        int maxR = 0;
        
        int l = 0;
        int r = height.size() - 1;

        int contain = 0;

        while (r > l){
            if (height[l] > maxL){
                maxL = height[l];
            } 
            if (height[r] > maxR){
                maxR = height[r];
            }

            if (maxL > maxR){
                if (maxR - height[r] > 0){
                    contain += maxR - height[r];
                    // cout << maxR - height[r] << endl;
                }
                r--;
            } else {
                if (maxL - height[l] > 0){
                    contain += maxL - height[l];
                }
                l++;
            }
            // cout << cont << endl;
        }

        return contain;
        
    }
};
