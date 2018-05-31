// Time:  O(n)
// Space: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one = 0, two = 0;

        for (const auto& i : nums) {
            int new_one = (~i & one) | (i & ~one & ~two);
            int new_two = (~i & two) | (i & one);
            one = new_one, two = new_two;
        }

        return one;
    }
};


//http://www.cnblogs.com/grandyang/p/4263927.html
int singleNumber(vector<int>& nums) {
    int a = 0, b = 0;
    for (int i = 0; i < nums.size(); ++i) {
        b = (b ^ nums[i]) & ~a;
        a = (a ^ nums[i]) & ~b;
    }
    return b;
}
