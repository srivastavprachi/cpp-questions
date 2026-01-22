/* 
Intuition
Since the array is already sorted, all duplicate numbers appear next to each other.
So instead of removing elements, I can just control how many times each number is allowed to stay.
Because the problem allows at most two occurrences, I only keep a number if it hasn’t appeared more than twice.

Approach :
  I use two pointers:

    One pointer scans the array.
    Another pointer keeps track of where the next valid element should be placed.

I also keep a counter to track how many times the current number has appeared.
The first element is always kept because it’s unique.
While traversing the array:

  If the current number is different from the last stored number, I store it and reset the count.
  If it’s the same number, I store it only if it has appeared less than two times.

This way, the array is modified in place and contains at most two copies of each number.
Finally, I return the count of valid elements.

Complexity :
  Time complexity: O(n)
      The array is traversed only once.
  Space complexity:O(1)
      No extra space is used; everything is done in place.
*/

//code

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i =1;
        int k = 0;
        nums[k++] = nums[0];
        int count = 1;
        while(i<n){
            if(nums[i]!=nums[k-1]){
                nums[k++] = nums[i];
                count = 1;
            }
            else{
                if(count<2){
                    nums[k++] = nums[i];
                    count++;
                }
            }
            i++;
        }

        return k;

    }
};
