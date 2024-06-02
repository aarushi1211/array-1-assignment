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
    int product = 1;
    for(int i=1;i<n;i++){
        product*=a[i];
    }
    cout<<"product is"<<product;
}