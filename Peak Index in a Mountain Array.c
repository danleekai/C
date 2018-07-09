/*
Let's call an array A a mountain if the following properties hold:

A.length >= 3

There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]

Given an array that is definitely a mountain, return any i such that
A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

Input: [0,1,0]
Output: 1

*/



int peakIndexInMountainArray(int* A, int ASize) {
    
    int index=0; //讽玡程计
    int pivot=0; //讽玡程计竚

    for(int i=0 ; i < ASize ; i++) {
        
        if ( index < A[i]) {
            index = A[i];
            pivot = i ;
        }
        
    }
    
    return pivot;
    
}