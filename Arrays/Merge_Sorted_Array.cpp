/* this is leetcode question Merged Two Sorted Array without using the third array 
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

*/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //checking the edge condition if the first array (nums1) has valid elements or not and if it's size is zero or not
        if(m==0){
            for(int i=0; i<n; i++){
                nums1[i]=nums2[i];
            }
        }
        else{
            int i = m-1;
            int j = n-1;
            int k = m+n-1;
            //comparing and adding the element in the array
            while(i>=0 && j>=0){
                if(nums1[i]>=nums2[j]){
                    nums1[k--] = nums1[i];
                    i--;
                }
                else{
                    nums1[k--] = nums2[j];
                    j--;
                }
            }
            /*since the elements are being placed in nums1 that means
            the nums1 array is already sorted and all the elements are in 
            correct position so 
            all the remaining elements of nums2 array should be placed in the
            nums1 array.
            */
            while(j>=0){
                nums1[k--] = nums2[j];
                j--;
            }
        }
        
    }
};
