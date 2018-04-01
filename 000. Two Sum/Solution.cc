class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>solutionMap;
        
        for (int i = 0; i < nums.size(); i++) {
            auto it = solutionMap.find(target - nums[i]);
            if(it != solutionMap.end()) {
                return vector<int> {it->second, i};
            } 
            solutionMap[nums[i]] = i;
        }
    }
};
