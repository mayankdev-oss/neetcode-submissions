class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> val;
        
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            
             mp[nums[i]] = i;
}

    for(int i=0; i<nums.size(); i++){
        int k=target-nums[i];
        if(mp.count(k)&&mp[k]!=i){
            val.push_back(i);
            val.push_back(mp[k]);
            return val;
        }
    }
    if(nums.size()==0){
        return {};
    }
    }
};
