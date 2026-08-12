#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char* pronadji_s(char* s1, char* s2) {
    int i, j, ind;
    i = 0;
    while (s1[i] != '\0') {
        ind = 1;
        j = 0;
        while (s1[i+j] != '\0' && s2[j] != '\0') {
            if (s1[i+j] != s2[j]) {
                ind = 0;
                break;
            }
            j++;
        }
        if (ind == 1) {
            return s1 + i;
        }
        i++;
    }
    return NULL;
}

void to_upper(char* s){
int i=0;
while(s[i]!= '\0'){
    if('a'<=s[i] && s[i]<='z'){

        s[i]=s[i]-'a' + 'A';
    }
    i++;
}



}

void to_lower(char* s){
int i=0;
while(s[i]!='\0'){
    if('A'<=s[i] && s[i]<='Z'){
        s[i]=s[i]-'A'+'a';

    }
    i++;
}



}
int main()
{
char color[]="blue";
printf("%s\n",color);
char s1[100];
/*gets(s1);
puts(s1);
*/
char s5[100];
char s6[100]="programiranje";
strcpy(s5,s6);
strncpy(s5,s6,4);
printf("%s\n",s5);
printf("%s\n",s6);
char s7[100]="principi";
char s8[100]="programiranja";
strcat(s7,s8);
printf("%s\n", s7);
strncat(s7,s8,4);
printf("%s\n",s7);
char s9[100]="abcd";
char s10[100]="abcd";
printf("%d \n",strcmp(s9,s10));
char s3[100]="principi programiranja";
char s4[100]="prin";
printf("%p %p %p\n", s1, strstr(s3, s4), pronadji_s(s3, s4));
char s11[100]="abcda125dshxhzxa";
to_upper(s11);
printf("%s\n",s11);
char s12[100]="ABTSX5667XXTY54$";
to_lower(s12);
printf("%s\n",s12);
    return 0;
}
