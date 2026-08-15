class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }

int max_val = INT_MIN;
int best_key = -1;

for (const auto& [key, val] : mp) {
    if (val > max_val) {
        max_val = val;
        best_key = key;
    }
}
return best_key;
        
    }
};