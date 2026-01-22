/*
given a sorted array :
  Remove duplicate values
  Keep only one copy of each number
  Do it in-place (no extra array)
  Return the number of unique elements

i → scans the array from left to right

k → keeps track of where the next unique element should be placed

nums[k-1] → the last unique element we stored

Step-by-step approach (easy to remember) :
  1. Keep the first element
      Because the first element is always unique
      Store it at index 0
      Set k = 1 (we have one unique element so far)
  2. Start checking from the second element
      Compare nums[i] with the last unique value (nums[k-1])
  3. If they are different
      This means we found a new unique number
      Place it at position k
      Move k forward
  4. If they are the same
      Skip it (it’s a duplicate)
  5. Continue until the end of the array
  6. Return k — the count of unique elements
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 1;
        int n = nums.size();
        int k = 0;
        nums[k++] = nums[0];
        while(i<n){
            if(nums[i] != nums[k-1]){
                nums[k++] = nums[i];
            }
            i++;
        }
        return k;
    }
};
