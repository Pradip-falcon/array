// insertion sort
// select element and place it to the proper position

#include <bits/stdc++.h>

using namespace std;

int main()
{ int arr[] ={1,13,6,12,5,4,8,3,2};
  int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
    int j=i;
    while(arr[j]<arr[j-1] && j>0){
        swap(arr[j],arr[j-1]);
        j--;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
