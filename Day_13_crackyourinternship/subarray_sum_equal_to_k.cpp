class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefixSum = 0, cnt =0;
        unordered_map<int, int> mpp;
        mpp[0]  = 1;
        for(int i=0; i<n; i++){
            prefixSum+= nums[i];
            cnt += mpp[prefixSum-k];
            mpp[prefixSum]++;
        }
        return cnt;
    }
};