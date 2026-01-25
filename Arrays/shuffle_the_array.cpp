/*
Intuition

The array nums contains 2n elements where the first n elements and the last n elements need to be interleaved.
So for every index i from 0 to n-1, we simply take one element from the first half and then one from the second half.

Approach :

1. Create a new array ans to store the shuffled result.
2. Reserve space for 2n elements to avoid repeated resizing.
3. Loop from 0 to n-1:
    Push nums[i] (from the first half).
    Push nums[i + n] (from the second half).
4. Return the resulting array.
This ensures the required order:
[x1, y1, x2, y2, ..., xn, yn].

Complexity
Time complexity: O(n)
Space complexity: O(n)
*/
//code

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> ans;
        ans.reserve(2 * n);

        for(int i = 0; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};
