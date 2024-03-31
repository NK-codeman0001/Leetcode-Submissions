class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bs32(n);
        string ans = bs32.to_string();
        reverse(ans.begin(),ans.end());
        bitset<32> an(ans);
        uint32_t a= an.to_ulong();
        return a;
    }
};