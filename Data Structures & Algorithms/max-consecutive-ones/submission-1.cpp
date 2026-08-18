class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCons = 0;
        int currentConsCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] == 1) && i == nums.size()-1) {
                currentConsCount +=1;
                if (currentConsCount > maxCons) {
                    maxCons = currentConsCount;
                    currentConsCount = 0;
                }
            }
            if (nums[i] == 1) {
                currentConsCount +=1;
            } else {
                if (currentConsCount > maxCons) {
                    maxCons = currentConsCount;
                }
                currentConsCount = 0;
            }
        }
        return maxCons;
    }
};