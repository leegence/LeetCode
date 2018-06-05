// Time:  O(n)
// Space: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = -1;
        for (const auto& num : nums) {
            if (last == -1 || nums[last] != num) {
                nums[++last] = num;
            }
        }
        return last + 1;
    }
};


public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}


#include <iostream>
#include <algorithm>
#include <vector>
 
int main() 
{
    std::vector<int> v{1,2,3,1,2,3,3,4,5,4,5,6,7};
    std::sort(v.begin(), v.end()); 
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
    for (const auto& i : v)
      std::cout << i << " ";
    std::cout << "\n";
}
