class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
    if(strs.size()==1){
        
        return strs[0];
    }
     int s=strs[0].size();
     for(int i=0; i<strs.size(); i++){
        if(s>strs[i].size()){
            s=strs[i].size();
        }
     }
    for(int j=0; j<s; j++){
        char c= strs[0][j];
        for(int i=1; i<strs.size(); i++){
            if(c!=strs[i][j]){
                return ans;
            }
        }
        ans.push_back(c);
    }
    return ans;
    }
};