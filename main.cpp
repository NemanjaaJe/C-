#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_SIZE = 100;
void zamjena(int arr[],int size){
int left=0;
int right=size-1;
while(left<right){

    if(arr[left]%2==1){
        left++;
    } else if(arr[right]%2==0){
    right--;
    } else {
    swap(arr[left],arr[right]);
    left++;
    right--;
   }
  }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int size=sizeof(arr) / sizeof(int);
zamjena(arr,size);
for(int i=0;i<size;i++){

  cout << arr[i] << "  ";

}
cout << endl;
    return 0;
}
