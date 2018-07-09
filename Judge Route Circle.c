/*

Initially, there is a Robot at position (0, 0). Given a sequence of its moves,
judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character.
The valid robot moves are R (Right), L (Left), U (Up) and D (down).
The output should be true or false representing whether the robot makes a circle.

Input: "UD"
Output: true

*/

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
