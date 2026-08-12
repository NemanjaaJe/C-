#include <stdio.h>
#include <stdlib.h>
void double_arr(int a[],int n){

 for(int i=0;i<n;i++){

    a[i]*=2;
 }


}
void print_arr(int a[],int n){
    for(int i=0;i<n;i++){

        printf("%d",a[i]);

    }
printf("\n");


}
int binarno_trazenje(int a[],int n,int x){
int l=0;
int r=n-1;

while(l<=r){
    int m=(l+r)/2;
    if (a[m]<x){
        l=m+1;

    }
    else if (a[m]>x){
        r=m-1;

    }
     else {
    return 1;
}
}


return 0;

}
void print_mat(int mat[][100],int m,int n){

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        printf("%2d",mat[i][j]);
    }
    printf("\n");
}


}
void transpone_mat(int mat[][100],int n){

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        int temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;

    }
}



}
int main()
{
  int a[]={1,2,3,4,5};
  for(int i=0;i<5;i++){
    printf("%d",a[i]);
printf("\n");
  }
int n=5;
int s=0;
for(int i=0;i<n;i++){
    s+=a[i];

}
//printf("%d",s);
double_arr(a,5);
print_arr(a,5);
int arr[]={2,56,7,12,15,160,4};
printf("%d\n",binarno_trazenje(arr,7,2));
printf("%d\n",binarno_trazenje(arr,7,5));


int mat[100][100]={{1,2,3},{4,5,6},{7,8,9}};

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        printf("%2d",mat[i][j]);
    }
    printf("\n");
}
print_mat(mat,3, 3);
transpone_mat(mat,3);
print_mat(mat,3, 3);
    return 0;
}
