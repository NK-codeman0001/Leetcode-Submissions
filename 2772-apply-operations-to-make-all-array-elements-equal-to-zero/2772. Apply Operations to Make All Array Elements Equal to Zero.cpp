class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
    int x = nums.size();
    int y = 0;
    vector<pair<int, int>> qp;
    int z = 0;

    for (int i = 0; i < x; i++) {
        while (z < qp.size() && i - qp[z].first >= k) {
            y -= qp[z].second;
            z += 1;
        }

        if (nums[i] < y) {
            return false;
        }

        nums[i] -= y;
        if (nums[i]) {
            qp.push_back(make_pair(i, nums[i]));
            int v = nums[i];
            nums[i] = 0;
            y += v;
        }
    }

    while (!qp.empty() && z < qp.size() && x - qp[z].first >= k) {
        z += 1;
    }

    return *max_element(nums.begin(), nums.end()) == 0 && z == qp.size();
    }
};