//bubble sort
// side swapping and push maximum to end

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{int arr[]={4,9,13,6,2,1,3};
 int n = sizeof(arr)/sizeof(int);
for(int i=0;i<=n-2;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]); 
            
        }
        
    }
    
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
