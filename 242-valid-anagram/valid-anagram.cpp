
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> nums(s.begin(), s.end());
        vector<char> anums(t.begin(), t.end());

        int n = nums.size();
        int m = anums.size();

        if (n != m) {
            return false;
        }

        sort(nums.begin(), nums.end());
        sort(anums.begin(), anums.end());

        for (int i = 0; i < n; i++) {
            if (nums[i] != anums[i]) {
                return false;
            }
        }

        return true;
    }
};
