#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void transpose(int mat[][100],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      int temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;
    }
}

}
void print_mat(int mat[][100],int n,int k){

for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){

        printf("%d",mat[i][j]);
    }
    printf("\n");
}




}
void swap(int* x,int* y){

int temp=*x;
*x=*y;
*y=temp;

}
void selectionsort(int a[],int n){

for(int i=0;i<n-1;i++){
    int min_ind=i;
    for(int j=i+1;j<n;j++){

        if(a[min_ind]>a[j]){

            min_ind=j;
        }
    }
    swap(&a[min_ind],&a[i]);
}


}
void print_arr(int a[],int n){
for(int i=0;i<n;i++){
    printf("%d ",a[i]);

}
printf("\n");
}
void to_upper(char* s){
int i=0;
while(s[i]!='\0'){
    if('a'<=s[i]&& s[i]<='z'){
        s[i]=s[i]-'a'+'A';

    }
    i++;
}

}
int palindrom(char* s){
int n=strlen(s);
for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-1-i])
        return 0;
    else
    return 1;

}


}
int evenDigits(int n){
if(n<10){
    if(n%2==0){
        return 0;

    } else {

    return n;
    }
}
int c=n%10;
if(c%2==0){

    return evenDigits(n/10);

} else {

return 10*evenDigits(n/10)+c;
}



}
int nzd(int a,int b){
if(a==0)
    return b;
if(b==0)
    return a;
return nzd(b,a%b);


}
int fib(int n){
if(n<=1)
    return 1;
return fib(n-1)+fib(n-2);

}
int main()
{
    /*int mat[100][100]={{1,2,5},{3,5,8}};

    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",mat[i][j]);
    }
    printf("\n");
    }
    transpose(mat,3);
    print_mat(mat,3,3);
int a[10]={1,5,67,2,12,68,223,556.77,81,222};

selectionsort(a,10);
print_arr(a,10);

int n;
int broj=0;
int zadnji_broj;
int temp;

printf("Unesite vas broj: ");
scanf("%d",&n);

temp=n;
while(n!=0){

    zadnji_broj=n%10;

    broj+=zadnji_broj*zadnji_broj*zadnji_broj;
    temp/=10;
}

if(broj==n){

    printf("Broj je armstrongov",n);
} else {

printf("Broj nije armstrongov",n);
}
*/
char password[100];
int has_upper=0;
int has_lower=0;
int has_digit=0;
printf("Unesite vasu sifru: ");
gets(password);
if(strlen(password)<8){

    printf("No\n");
return 0;
}


for(int i=0;i<strlen(password);i++){

    if(isdigit(password[i])){
        has_digit=1;

    } else if(isupper(password[i])){

    has_upper=1;
    } else if (islower(password[i])){
    has_lower=1;

    }

}
if(has_digit && has_lower && has_upper){

    printf("Yes\n");

} else {

printf("No");
}

    return 0;
}
