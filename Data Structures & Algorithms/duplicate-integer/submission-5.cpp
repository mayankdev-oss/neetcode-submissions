class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int x: nums){
            map[x]++;
        }
        for (auto &it : map) {
    //cout << it.first << " " << it.second << endl;
    if(it.second>1){
        return true;
    }
    }
    return false;
    }
};