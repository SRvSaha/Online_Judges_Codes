/*
 * @author     : SRvSaha
 * Filename    : toggle_string.c
 * Timestamp   : 9.00 PM 30-Jun-2016
 * Description : https://www.hackerearth.com/problem/algorithm/modify-the-string/
 *
 */

/*
    This is one way of doing it using the Inbuilt Ctype library functions.
    For doing it from scratch, if char is between 65 to 90 then char += 32 else char -= 32.
*/
 #include <stdio.h>
 #include <ctype.h>
 int main()
 {
    char string[100];
    scanf("%s",string);
    for(int i = 0; string[i] != '\0'; i++){
        // Using LIBRARY FUNCTIONS
        if(islower(string[i])){
            string[i] = toupper(string[i]); // The functions take a char and returns the updated char
        }
        else{
            string[i] = tolower(string[i]);
        }
/*  FROM SCRATCH
        if (string[i] >= 65 && string[i] < 91)
            string[i] += 32;
        else
            string[i] -= 32;*/
    }
    printf("%s\n",string);
    return 0;
 }
