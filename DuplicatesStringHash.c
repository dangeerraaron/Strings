#include <stdio.h>
#include <stdlib.h>
//duplicates string hashing
int main(void) {
    
    char A[]="finding";
    int i=0;
    int H[26]={0};// declare Hash table and initialize to 0 to avoid junk numbers with 26 indices for letters
    for(i=0; A[i]!='\0'; i++)
    {
        H[A[i]-97]++;// increment H index with the Ascii letter representation from A[]
    }
    for(i=0; i<26; i++) // loop for H[]
    {
        if(H[i] > 1)
        {
            printf("%c appears, ", i+97);
            printf("%d times.\n", H[i]);
            
        }
    }
    return 0;
}
