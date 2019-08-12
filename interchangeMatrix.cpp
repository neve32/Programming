#include<iostream>
using namespace std;
int main(){
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
       }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(j==0) cout<<a[i][c-1]<<" ";
        else if(j==c-1) cout<<a[i][0]<<" ";
        else cout<<a[i][j];
        }
      cout<<endl;
    }
}
