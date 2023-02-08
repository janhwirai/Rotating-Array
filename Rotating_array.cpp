#include<bits/stdc++.h>
using namespace std;
class Sol{
    public:
    void reverse(int arr[],int low,int high){
        while(low<high){
            int temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            high--;
            low++;
        }
    }
    void leftRotate(int arr[], int n, int k) {
        // code here
        //Reverse Array
        k=k%n;
        reverse(arr,0,n);
        //Reverse first (n-k) elements
        reverse(arr,0,n-k);
        //Reverse last k numbers
        reverse(arr,n-k,n);
    }
};


int main(){
    int t;
    cout<<"Enter testcases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter number of elements";
        cin>>n;
        cout<<"Enter number to left rotate array:";
        int k;
        cin>>k;
        int arr[n];
        cout<<"\nEnter array elements";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Sol s;
        s.leftRotate(arr,n,k);
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}