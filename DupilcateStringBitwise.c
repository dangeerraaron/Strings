#include <stdio.h>
#include <stdlib.h>
//bitwise operators to find duplicates in string

int main(void) {
    
    char A[]="finding";
    int i=0;
    long int H=0, x=0; // long int is 4 bytes, 32 bits
    
    for(i=0; A[i]!='\0'; i++)
    {
        x=1; // set x bit to 1
        x=x<<(A[i]-97); //shift x left by index minus Ascii number
        if((x & H) > 0) //masking of bits to check if both are "on"
        {
            printf("%c is duplicate.\n", A[i]);
        }else
            {
                H = x | H; // merge both x and H to "on"
            }
    }
    return 0;
}
