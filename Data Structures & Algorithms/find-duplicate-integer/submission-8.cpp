class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        }
        int num=0, count = 0;
        for(auto it:mp){
            count = max(count,it.second);
            if(it.second == count) num = it.first;
        }
        return num;
    }
};
