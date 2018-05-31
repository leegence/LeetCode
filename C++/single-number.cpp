// Time:  O(n)
// Space: O(1)
/*
Input: [2,2,1]
Output: 1
    
Input: [4,1,2,1,2]
Output: 4
*/
// the fastest way
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate(nums.cbegin(), nums.cend(),
                          0, std::bit_xor<int>());
    }
};

//XOR will return 1 only on two different bits. So if two numbers are the same, XOR will return 0. Finally only one number left.
//A ^ A = 0 and A ^ B ^ A = B.
int singleNumber(int A[], int n) {
     int result=A[0];
     for(int i=1;i<n;i++)
     {
          result= result^A[i];  /* Get the xor of all elements */
     }
      return result;
}
