class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int p=2*n;
        vector<int> arr(p, 0);
        for(int i=0; i<n; i++){
            arr[i]=nums[i];
            
        }

        for(int i=0; i<n; i++){
            arr[i+n]=nums[i];
        }
        return arr;
    }
};