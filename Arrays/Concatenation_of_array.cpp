/*Intuition
The problem is simple: I need to return a new array that contains the same elements twice, in the same order.
So if the original array has n elements, the final array will have 2n elements.
The easiest way to do this is to loop through the array and add its elements two times.

Approach
First, I store the size of the array.
Then I create a new vector to store the result and reserve space for double the size so it doesn’t resize again and again.

After that:

I loop once through the array and push all elements into the result.

I loop again through the array and push the same elements again.

Finally, I return the result array.

Complexity
Time complexity: O((n))
    I traverse the array twice, which is still linear time.
Space complexity: O(n)
    A new array of size 2n is created to store the result.
*/
/* 
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/
//code

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        ans.reserve(2 * n);
        for(int i=0; i<n; i++){
            ans.push_back(nums[i]);
        }
        for(int i=0; i<n;i++){
            ans.push_back(nums[i]);
        }
        return ans;

    }
};

//method -2
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

