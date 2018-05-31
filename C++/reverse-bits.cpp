// Time:  O(logn) = O(32)
// Space: O(1)

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int count = 32;
        while (count--) {
            result <<= 1;
            result |= n & 1;
            n >>= 1;
        }
        return result;
    }
};
//我们只需要把要翻转的数从右向左一位位的取出来，如果取出来的是1，我们将结果res左移一位并且加上1；
//如果取出来的是0，我们将结果res左移一位，然后将n右移一位即可
uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 32; ++i) {
        if (n & 1 == 1) {
            res = (res << 1) + 1;
        } else {
            res = res << 1;
        }
        n = n >> 1;
    }
    return res;
}
