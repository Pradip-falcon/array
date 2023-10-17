//rotate the array by 1

#include <iostream>

using namespace std;

int main()
{ int arr[5]={
    4,9,0,3,2
};
int temp= arr[4];
 for(int i=3;i>=0;i--){
     arr[i+1]=arr[i];
 }
 arr[0]=temp;
 for(int i=0;i<5;i++){
     cout<<arr[i];
 }

    return 0;
}
