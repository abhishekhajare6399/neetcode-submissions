class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int mid, n = nums.size();
    if(target<nums[0]) return 0;
    else if(target>nums[n-1]) return n;
    while(left <= right) {
        mid = (right + left) / 2;
        if(nums[mid] == target)
            return mid;
        
        if(nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if(target<nums[mid]) return mid;
    else if(target>nums[mid]) return mid+1;
    }
};