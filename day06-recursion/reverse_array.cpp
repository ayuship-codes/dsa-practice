#include<bits/stdc++.h>
using namespace std;
/*reversing array using for loop

void reverse(int arr[],int n){
    int start=0, end=n-1;
    
    int i=0;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;end--;
    }
    
}
*/
//reversing array using recursion
int reverse(int i,int arr[],int n){
    if(i>=(n/2)) return 0;
    swap(arr[i],arr[n-i-1]);
    return reverse(i+1,arr,n);
}
int main(){
    
    int n,arr[50];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // reverse(arr,n);
    reverse(0,arr,n);
    cout<<"elements of array after reversing are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;    
}