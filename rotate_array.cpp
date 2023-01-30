#include <iostream>

using namespace std;

void reverseArray(int arr[],int s,int e){

while(s<e){

int temp=arr[s];

arr[s]=arr[e];

arr[e]=temp;

s++;

e--;

}

}

int main() {

    // your code goes here

int n,k;

cin>>n>>k;

    k=k%n;

int arr[n];

for(int i=0;i<n;i++){

cin>>arr[i];

}

reverseArray(arr,0,n-1);

reverseArray(arr,0,k-1);

reverseArray(arr,k,n-1);

for(int i=0;i<n;i++){

cout<<arr[i]<<" ";

}

cout<<endl;

    return 0;

}