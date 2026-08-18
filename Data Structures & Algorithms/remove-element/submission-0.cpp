class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = 0;

        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                count++;
            } else {
                q.push(nums[i]);
            }
        }

        int i = 0;

        while (!q.empty()) {
            nums[i] = q.front();
            q.pop();
            i++;
        }

        return n - count;
    }
};