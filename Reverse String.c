/*

Write a function that takes a string as input and returns the string reversed.

Given s = "hello", return "olleh".

*/


char* reverseString(char* s) {

    char* temp;
    int Length=strlen(s);
    
    if (Length==1) { return s; }
    else {

        for(int i=0 ; i<Length/2 ; i++) {
            temp = s[i];
            s[i] = s[Length-1-i];
            s[Length-1-i] = temp;
            
        }
        
        return s;
    }

}
