#include<iostream>
using namespace std;
int reversearr(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=0;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }

}
int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
int main(){
    int arr[50];int i,n;
    cout<<"Enter number of elements..";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the elements:"<<endl;
        cin>>arr[i];
    }
    printarr(arr,n);
    reversearr(arr,n);
    cout<<"reversed array"<<endl;
    
    printarr(arr,n);
    
    return 0;
}