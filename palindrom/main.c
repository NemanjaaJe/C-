#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int palindrom(char* s){

int n=strlen(s);
for(int i=0;i<n/2;i++){

    if(s[i]!=s[n-1-i]){
        return 0;
    }

}
 return 1;
}
int main()
{
    char s1[100] = "madam";
    printf("%d\n", palindrom(s1));


    return 0;
}
