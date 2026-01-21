Intuition
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
