#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter size of array";
    cin>>n;
    int a[n];
    cout<<" enter the numbers";
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    int first = a[0],second = a[0];
    for(int i=0;i<n;i++){
        if(first <a[i]){
            second = first;
            first = a[i];
        }
        else if(a[i]>second&&a[i]<first){
            second = a[i];
        }
    }
    cout<<"second largest is"<<second;
}