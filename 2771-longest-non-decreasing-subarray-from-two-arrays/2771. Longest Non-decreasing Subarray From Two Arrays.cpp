class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        vector<vector<int>> dp_vec(s1,vector<int>(2, 1));
        int maxL = 0;

        for (int i = 0; i < s1; i++) {
            if (i > 0) {
                if (nums1[i] >= nums1[i - 1])
                    dp_vec[i][0] = dp_vec[i - 1][0] + 1;

                if (nums1[i] >= nums2[i - 1])
                    dp_vec[i][0] = max(dp_vec[i][0], dp_vec[i - 1][1] + 1);

                if (nums2[i] >= nums1[i - 1])
                    dp_vec[i][1] = dp_vec[i - 1][0] + 1;

                if (nums2[i] >= nums2[i - 1])
                    dp_vec[i][1] = max(dp_vec[i][1], dp_vec[i - 1][1] + 1);
            }

            maxL = max(maxL, max(dp_vec[i][0], dp_vec[i][1]));
        }

        return maxL;
    }
};