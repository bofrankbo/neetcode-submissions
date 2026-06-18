class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; 
        vector<int> ans;
        
        int l = 0;
        int r = 0;
        // int max_num = 0;
        while (r < nums.size()){
            
            // 插入較大的值
            while (!dq.empty() and nums[dq.back()] < nums[r]){
                dq.pop_back();
            } 
            dq.push_back(r);

            // 移除 window 以外的值
            if (l > dq[0]) {
                dq.pop_front();
            }

            if (r+1 >= k){
                ans.push_back(nums[dq.front()]);
                l++;
            }
            r++;
            // cout << r << " " << l << endl;
        
            // for (int i=0; i<dq.size(); i++){
            //     cout << dq[i] << " ";
            // }
            // cout << "  /  " << nums[dq.back()] << endl;
        }



        return ans;
    }
};
