// Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(auto it:nums){
            mp[it]++;
            if(mp[it]==2) ans.push_back(it);
        }
        return ans;
    }
};