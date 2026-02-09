/*
Intuition: 

  Since the array is sorted, we can use two pointers to find the target sum efficiently:
    One pointer starts from the beginning
    One pointer starts from the end
  By comparing the current sum with the target, we can decide which pointer to move.

Approach:

  1. Initialize two pointers:
      left at index 0
      right at index n - 1
  2.While left <= right:
      If numbers[left] + numbers[right] is greater than target, move right leftward.
      If the sum is equal to target, return the indices (+1 because the problem uses 1-based indexing).
      If the sum is less than target, move left rightward.
  3. Since the problem guarantees exactly one solution, the function will return inside the loop.

Complexity:

  Time complexity: O(n)
  
  Space complexity: O(n)
*/

//code

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            if (numbers[left] + numbers[right] > target) {
                right--;
            } 
            else if (numbers[left] + numbers[right] == target) {
                return {left + 1, right + 1};
            } 
            else {
                left++;
            }
        }
        return {};
    }
};

