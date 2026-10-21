
class Solution {
public:
    string triangleType(vector<int>& nums) {
        int n = nums.size();

        if (nums[0] + nums[1] <= nums[2] ||
            nums[0] + nums[2] <= nums[1] ||
            nums[1] + nums[2] <= nums[0]) {
            return "none";
        }

        for (int i = 0; i < n - 2; i++) {
            if (nums[i] == nums[i+1] &&
                nums[i+1] == nums[i+2]) {
                return "equilateral";
            }

            if (nums[i] == nums[i+1] ||
                nums[i+1] == nums[i+2] ||
                nums[i+2] == nums[i]) {
                return "isosceles";
            }

            if (nums[i] != nums[i+1] &&
                nums[i+1] != nums[i+2] &&
                nums[i+2] != nums[i]) {
                return "scalene";
            }
        }

        return "none";
    }
};
