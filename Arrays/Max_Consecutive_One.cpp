/*
Intuition
We need to find the maximum number of consecutive 1s in a binary array.
While traversing the array:

Keep counting 1s when they appear continuously

Reset the count whenever 0 appears

Track the maximum count seen so far

Approach
Initialize two variables:

 count → current consecutive 1s

 maxcount → maximum consecutive 1s found
Traverse the array once:

 If the current element is 1, increment count

 Update maxcount

 If the current element is 0, reset count to 0
Return maxcount

This works because we only care about continuous sequences of 1s.

Complexity
Time complexity:O(n)
Space complexity:O(1)
  */
//Code
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n= nums.size();
        int maxcount = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                count++;
                maxcount = max(maxcount, count);
            }
            else{
                count = 0;
            }
        }
        return maxcount;

    }
};
