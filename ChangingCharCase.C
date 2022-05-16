// changing cases of character
#include <stdio.h>

int main() {
    
    char S[]="HELICOPTER";
    int i=0;
    
    for(i=0; S[i]!='\0'; i=i+1)
    {
        S[i]=S[i]+32;
    }
    printf("%s\n",S);
    
    return 0;
}
