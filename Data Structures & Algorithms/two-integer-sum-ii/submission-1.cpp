class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first = 0;
        int last = numbers.size() - 1;

        while (target != numbers[first] + numbers[last]) {
            int n1 = numbers[first];
            int n2 = numbers[last];
            if (n1 + n2 < target){
                first++;
            } else if (n1 + n2 > target){
                last--;
            }
        }
        return {first+1, last+1};
    }
};
