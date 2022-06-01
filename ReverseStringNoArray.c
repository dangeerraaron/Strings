#include <stdio.h>
#include <stdlib.h>
// reversing string WITHOUT Auxillary array

int main(void)
{
    char A[]="python";
    char t; //t= temporary char variable for swapping
    int i=0, j=0;

    for(j=0; A[j]!='\0'; j++) //loop for length of array, will advance j pointer to right side of array
    {
    }
    j=j-1;

    for(i=0; i < j; i++, j--) //for loop conditions for copying
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }

    printf("%s", A);

    return 0;
}
