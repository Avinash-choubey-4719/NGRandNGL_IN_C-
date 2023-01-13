# NGRandNGL_IN_C-


NGL(nearest greater to left):-
Given an array of integers, find the closest (not considering the distance, but value) greater or the same value on the left of every element.
If an element has no greater or same value on the left side, print -1.

Input : arr[] = {10, 5, 11, 6, 20, 12} 
Output : -1, 10, -1, 10, -1, 20 
The first element has nothing on the left side, so the answer for first is -1. 
Second, element 5 has 10 on the left, so the answer is 10. 
Third element 11 has nothing greater or the same, so the answer is -1. 
Fourth element 6 has 10 as value wise closes, so the answer is 10 
Similarly, we get values for the fifth and sixth elements.



NGR(nearest greater to right):-
The Next greater Element for an element x is the first greater element on the right side of x in the array.
Elements for which no greater element exist, consider the next greater element as -1. 

Input: arr[] = [ 4 , 5 , 2 , 25 ]
Output:  4      –>   5
               5      –>   25
               2      –>   25
              25     –>   -1
Explanation: except 25 every element has an element greater than them present on the right side

Input: arr[] = [ 13 , 7, 6 , 12 ]
Output:  13      –>    -1
                7       –>     12
                6       –>     12
               12      –>     -1
Explanation: 13 and 12 don’t have any element greater than them present on the right side
