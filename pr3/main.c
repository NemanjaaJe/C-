#include <stdio.h>
#include <stdlib.h>
void change_by_value(int x){
x=2*x;

}
void change_by_ref(int* ptr) {
    *ptr = 2 * (*ptr);
}
int cube_by_val(int x){
return x*x*x;

}
void swap(int* x,int* y){

int tmp=*x;
*x=*y;
*y=tmp;


}
void selection_sort(int a[],int n){
int min_ind;
for(int i=0;i<n-1;i++){
        min_ind=i;
    for(int j=i+1;j<n;j++){

        if(a[min_ind]>a[j]){

            min_ind=j;
        }
    }
    swap(&a[i],&a[min_ind]);
}



}
void print_arr(int a[],int n){
for(int i=0;i<n;i++){

    printf("%4d",a[i]);

}
printf("\n");
}
int main()
{
    int x=10;
    int* x_ptr=&x;
    printf("%d\n",x);
    *x_ptr=15;
    printf("%d\n",x);
    printf("%d\n",*x_ptr);
    printf("%d\n",x_ptr);

    change_by_value(x);
    printf("%d\n", x);

change_by_ref(x_ptr);
printf("%d\n",x);

cube_by_val(x);
printf("%d\n",x);
int a[] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
int n=10;

print_arr(a,n);
selection_sort(a,n);
print_arr(a,n);
    return 0;
}
