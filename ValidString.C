//program to check if letter and number password valid
#include <stdio.h>
#include <stdlib.h>

int ValidPw(char *name)
{
    int i=0;
    for(i=0; name[i]!='\0'; i++)
    {
        if(!(name[i]>= 65 && name[i] <= 90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>= 48 && name[i]<= 57))
           {
              return 0;
           }
    }
    return 1;
}
int main() {
    char *name="Anil123";
    ValidPw(name);
    
    if(ValidPw(name)) //check function call condition, if true '1' it us valid
    {
        printf("Valid String.\n");
    }else
        {
            printf("Invalid String.\n");
        };
    
    return 0;
}
