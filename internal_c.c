
#include <stdio.h>
#include <string.h> //library to be included
int main()
{
    char a[50]="world";

    printf("The length of the enter string is %ld\n", strlen(a));        //length function


    char b[6];
    strcpy(b, a);                       //copy function
    printf("String b : %s\n", b);


    char c[] = "Hello";
    strcat(b, c);                   //concatenation
    printf("after concatenation :   %s\n",b);





    char d[] = "YOU";
    char e[] = "YOU";   
    printf("Comparing two equal strings : %d\n", strcmp(e, d));         //comparision //0



    return 0;
}
// copy
// length
// compare
// concatenate