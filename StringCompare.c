#include <stdio.h>
#include <stdlib.h>
// comparing strings for equality of characters with same cases

int main(void) {
    char A[]="painter";
    char B[]="painting";
    int i=0, j=0;
    
    for(i=0,j=0; A[i]!='\0' && B[j]!='\0'; i++,j++)
    {
        if(A[i]!=B[i])
        {
            break;
        }
    }     
    
    if(A[i]==B[j])
      {
          printf("Strings are equal.\n");
      }else if(A[i]<B[j])
           {
               printf("First string is smaller.\n");
           }else
               {
                   printf("First string is greater.\n");
               }
    return 0;
}
