// FIRST QUESTION
// Time Complexity : O(log n)
// Space Complexity: O(1) since no extra space used



#include <iostream>
using namespace std;

// returns number using Binary search O(log n)
int findNumber(int *arr, int n){
    int s=0,e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(m==arr[m]){
            return m;
        }
        else if(arr[m]>m){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;
}

int main()
{   
    cout<<"Enter array size:"<<endl;
    int n; cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findNumber(arr,n);
    cout<<"Answer : "<<ans<<endl;
    return 0;
}
