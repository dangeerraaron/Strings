#include <stdio.h>
#include <stdlib.h>
// program to count number of vowels and consonants
int main(void) {
    char s[]="Hello World Able Unicorn";
    int i=0, vCount=0, cCount=0;
    
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
             {
                 vCount++;
             }else if(s[i] >= 65 && s[i]<= 90 || s[i]>=97 && s[i]<=123)
                  {
                      cCount++;
                  }
    }
    printf("total vowels = %d\ntotal consonants = %d", vCount, cCount);
    
    return 0;
}
