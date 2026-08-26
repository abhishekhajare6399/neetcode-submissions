class Solution {
public:
    bool binarySearch(vector<int>& nums, int key){
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(key == nums[mid]){
                return true;
            }if(nums[mid] < key){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    for(int i = 0; i < rows; i++) {
        if(binarySearch(matrix[i], target)) {
            return true;
        }
    }

    return false;
    }
};
