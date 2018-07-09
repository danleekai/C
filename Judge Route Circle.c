bool judgeCircle(char* moves) {
    
    int row=0 ;
    int col=0 ;
    int end = strlen(moves);

    for (int i=0 ; i<end ; i++) {
        
        switch(moves[i]){    
            case 'R' :
                row++;
                break;
            case 'L' :
                row--;
                break;
            case 'U' :
                col++;
                break;
            case 'D' :
                col--;
                break;
    }
    
    return row==0 && col==0;
}