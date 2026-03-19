#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void smallestLargest(int arr[],int n){
int smallest=INT_MAX;
int largest=INT_MIN;
for(int i=0;i<n;i++){
smallest=min(smallest,arr[i]);
largest=max(largest,arr[i]);
}
cout<<"smallest: "<<smallest;
cout<<"\nlargest: "<<largest;
int temp=smallest;
smallest=largest;
largest=temp;
cout<<"\nAfter swapping smallest and largest  becomes: ";
cout<<"\nsmallest: "<<smallest;
cout<<"\nlargest: "<<largest;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    smallestLargest(arr,6);
    return 0;
}