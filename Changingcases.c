// changing cases of character
#include <stdio.h>
int main() {
    
    char S[]="WelComE";
    int i=0;
    
    for(i=0; S[i]!='\0'; i=i+1)
    {
        if(S[i] >= 65 && S[i]<=90)
        {
            S[i]=S[i]+32;
            
        }else if(S[i] >= 97 && S[i]<=122)
            {
                S[i]=S[i]-32;
            }
    }
    printf("%s\n",S);
    
    return 0;
}
