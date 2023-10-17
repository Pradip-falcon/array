#include <iostream>

using namespace std;

int main()
{int arr[]={5,6,3,8,9,0,1,4};
int x=sizeof(arr)/sizeof(int);
for(int i=0;i<x/2;i++){
   int index= x-i-1;
   int swap;
   swap=arr[i];
    arr[i]=arr[index];
    arr[index]=swap;
}
for(int i=0;i<x;i++){
    cout<<arr[i];
}
    return 0;
}