/*
Intuition:

If an element appears more than ⌊n/2⌋ times, it cannot be completely canceled out by other elements.
By pairing different elements and canceling them, the majority element will always remain.

Approach:

1. Initialize count = 0 and a variable majorelement.
2. Traverse the array:
    If count becomes 0, set the current element as the new candidate.
    If the current element matches the candidate, increment count.
    Otherwise, decrement count.
3. After one full pass, the remaining candidate is the majority element.

This works because the problem guarantees that a majority element exists.

Complexity :
Time Complexity : O(n)
Space Complexity : O(1)

*/

//code

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int majorelement = -1;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                majorelement = nums[i];
                count++;
            }
            else{
                if(nums[i] == majorelement){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return majorelement;
    }
};
