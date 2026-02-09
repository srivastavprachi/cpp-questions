/*
  Intuition:
    To check if string s is a subsequence of string t, we need to verify that all characters of s appear in t in the same order, though not necessarily contiguously.
    
    So the idea is to scan both strings from left to right and try to match characters of s inside t.

Approach : 
  1. Use two pointers:
    left → points to the current character in s
    right → points to the current character in t

  2. Traverse both strings:
    If s[left] == t[right], move both pointers forward
    Otherwise, move only right forward
  3. If we successfully move left through all characters of s, then s is a subsequence of t.

Complexity: 
  Time complexity: O(N2):
    where N2 is the length of t
  Space complexity:O(1)

*/

//Code
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int left = 0;
        int right = 0;
        while(left<n1 && right<n2){
            if(s[left]==t[right]){
                left++;
                right++;
            }
            else right++;
        }
        if(left == n1) return true;
        return false;

    }
};
