/* 
This is the leetcode question 27. Remove Element 
An integer array nums and an integer val was given and I had to remove all occurrences of val in nums in-place and then 
return the number of elements in nums which are not equal to val.

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).

*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int i = 0; //initialise the starting pointer
        int j = nums.size(); // initialise the end pointer
        int  k = 0; //initialise the array pointer for insertion
        while(i<j){
            if(nums[i]!=val){
                nums[k++] = nums[i];
                i++;
            }
            else{
                i++;
            }
        }
        return k;
    }
};
