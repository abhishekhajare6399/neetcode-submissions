class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n = nums.size();
     int count=0, element = nums[0];  
     for(int i=0;i<n;i++){
        if(element == nums[i]){
            count++;
        }else{
            if(count==0) element = nums[i];
            else count--;
        }
     } 
     return element;
    }
};