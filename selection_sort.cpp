//Selection sort
// select minimum and swap and its time complexity is n^2

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{int arr[]={4,9,13,6,2,1,3};
 int n = sizeof(arr)/sizeof(int);
for(int i=0;i<=n-2;i++){
    int min =i;
    for(int j=i;j<=n-1;j++){
        if(arr[j]<arr[min]){
            min=j;
            
        }
        
    }
     swap(arr[i],arr[min]);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
