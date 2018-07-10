/*
Given a positive integer, output its complement number.
The complement strategy is to flip the bits of its binary representation.


Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits),
             and its complement is 010. So you need to output 2.

*/


int findComplement(int num) {
    
    int* binary = malloc(32*sizeof(int));
    int i=0;
    int sum=0;
    
    while(num!=0) {
        
        int rem = num % 2;
        *(binary+i) = rem;
        num = num/2;
        i++;

    }
    
    for (int j=0 ; j<i ; j++) {
        if ( *(binary+j) == 0 ) { *(binary+j) = 1 ; }   
        else { *(binary+j) = 0 ; }
    }
    
    
    for (int j=i-1 ; j>=0 ; j--) {
        sum = sum + ( *(binary+j) * poww(2,j) );
    }
    
    return sum;
}

int poww(int num,int m) {
    
    int n = num;
    
    if(m==0) {
        return 1;
    }
    else {
        for (int i=0 ; i<m-1 ; i++) {
            n = n * num ;
        } 
    }
        
    return n;
}











