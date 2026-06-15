'''
# Intuition
The H-index is the maximum value `h` such that the researcher has at least `h` papers with `h` or more citations. By sorting the citations in ascending order, we can compare each paper's citation count with the number of papers remaining. If a paper has enough citations to satisfy the current H-index candidate, we increase the count.

# Approach
- Sort the `citations` array in ascending order.
- Initialize:
  - `value` as `n`, representing the number of papers remaining.
  - `Hindex` as `0`.
- Traverse the sorted array:
  - If the current citation count is greater than or equal to `value`, it contributes to the H-index, so increment `Hindex`.
  - Otherwise, decrease `value` since fewer papers remain to satisfy the H-index condition.
- Return `Hindex` as the final answer.

# Complexity
- Time complexity: **O(n log n)** (due to sorting)
- Space complexity: **O(1)** (ignoring the space used by the sorting algorithm)
'''
# Code

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int Hindex = 0;
        int value = n;

        sort(citations.begin(), citations.end());

        for (int i = 0; i < n; i++) {
            if (citations[i] >= value) {
                Hindex++;
            } else {
                value--;
            }
        }

        return Hindex;
    }
};
