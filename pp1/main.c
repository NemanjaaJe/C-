#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int square(int x){
return x*x;

}
int main()
{
//printf("\n%d",square(4));
/*int x;
int y;
int z;
printf("\n");
scanf("%d",&x);
scanf("%d",&y);
z=x+y;
printf("\n%d",z);


int a;
int b;
int c;
int max;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<b){
    if(c<b){
        max=b;
    }
    else {

      max=c;
    }
}
else{

if (c<a){
    max=a;


} else{

 max=c;
}
}
printf("%d",max);

int n;

scanf("%d",&n);


while(n%2==0){
    n=n/2;
}
while(n%3==0){
    n=n/3;
}
while(n%5==0){
    n=n/5;
}

if(n==1){
    printf("Da");

} else {

 printf("Ne");
}

*/
for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){

        printf("%4d",i*j);
    }
    printf("\n");
}


srand(time(0));
int r;
r=rand() % 6 + 1;
printf("%d",r);
    return 0;
}
