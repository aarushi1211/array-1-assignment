#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v;
int n ;
cout<<"enter the size";
cin>>n;
cout<<" enter elements";
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 sort(v.begin(),v.end());
 for(int i=1;i<=n;i++){
    if(v[i] == v[i+1] || v[i]==v[i-1]){
        cout<<" contains duplicates";
    }
    else{
        cout<<" does not contain dupicates";
    }
 }
}
   
    