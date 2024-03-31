class Solution {
public:
    int minimumBeautifulSubstrings(string s) {
     
        int s1 = s.length();
        vector<int> dp_arr(s1 + 1, s1 + 1);
        dp_arr[0] = 0;

        for (int i = 1; i <= s1; i++) {
            if (s[i - 1] == '0') {
                continue;
            }

            for (int j = 0; j < i; j++) {
                if (s[j] == '0') {
                    continue;
                }

                long long tmp = find_fun(s, j, i);
                if (!power_fun(tmp)) {
                    continue;
                }

                dp_arr[i] = std::min(dp_arr[i], dp_arr[j] + 1);
            }
        }

        return (dp_arr[s1] < s1 + 1) ? dp_arr[s1] : -1;
    }

    long long find_fun(string s, int i, int j) {
        long long ans = 0;
        for (int k = i; k < j; k++) {
            ans = ans * 2 + (s[k] - '0');
        }
        return ans;
    }

    bool power_fun(long long n) {
        if (n < 125) {
            return (n == 1 || n == 5 || n == 25);
        }

        if (n % 125 != 0) {
            return false;
        } else {
            return power_fun(n / 125);
        }
    }
};