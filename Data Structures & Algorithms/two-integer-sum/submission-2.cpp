class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        // for(int i=0;i<n;i++){
        //     int sum = nums[s]+nums[l];
        //     if(sum>target) l--;
        //     else if(sum<target) s++;
        //     else if(sum == target){
        //         ans.push_back(s);
        //         ans.push_back(l);
        //         return ans;
        //     }
        // }
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
