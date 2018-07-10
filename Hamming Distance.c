/*

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑  ↑

The above arrows point to positions where the corresponding bits are different.

*/
int hammingDistance(int x, int y) {
    
    int* binary_x = malloc( 32 * sizeof(int) );
    int* binary_y = malloc( 32 * sizeof(int) ); 
    int count_x = 0;
    int count_y = 0;
    int count_max = 0;
    int distance = 0 ;

    count_x = binary(x,binary_x);
    count_y = binary(y,binary_y);
    
    if(count_y > count_x) {  //做補0動作
        count_max = count_y;
        for(int i=count_x+1 ; i<=count_y ; i++) {
            *(binary_x+i) = 0; 
        }
     }
     else {
        count_max = count_x;
        for(int i=count_y+1 ; i<=count_x ; i++) {
            *(binary_y+i) = 0; 
        }
     }
    
    for( int i=0 ; i<count_max ; i++ ) {
        
        if(*(binary_x+i) != *(binary_y+i)) {
            distance++;
        }
        
    }
    return distance ;

}

int binary(int num , int* binary) {  //function功能 - 十進制轉二進制
    
    int rem = 0;
    int count = 0;
    int *kum = malloc(1*sizeof(int));
    
    while(num!=0) {
        
        rem = num % 2;
        *(binary+count) = rem ;
        num = num/2;
        count++;
  
    }
    
    for (int i=0 ; i<count ; i++) {  //實作swap

        *(kum) = *(binary+i);
        *(binary+i) = *(binary+(count-1-i));
        *(binary+(count-1-i)) = *(kum);

    }

    return count;

}