class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int j = 1;
        int k = n-1;
        for(i = 0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            j = i+1;
            k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) j++;
                else if(sum > 0) k--;
                else{
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        vector<vector<int>> answer;
        for(auto it:ans){
            answer.push_back(it);
        }
        return answer;
    }
};
