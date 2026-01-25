/*
Intuition:

To rotate the array to the right by k steps, we can think of splitting the array into two parts:
  the last k elements
  the first n - k elements

By reversing these parts in the right order, we can achieve the required rotation in-place.

Approach : 

1. Compute k = k % n to handle cases where k is greater than the array size.
2. Reverse the entire array.
3. Reverse the first k elements.
4. Reverse the remaining n - k elements.

After these three reversals, the array is rotated to the right by k positions.

Complexity

  Time complexity: O(n)
  Space complexity: O(1)
*/
  //code

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k , nums.end());
        
    }
};
