#include<iostream>
using namespace std;
int main(){
    int n,a[1000][1000];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        if(i==0)
        cout<<a[i][i];
        else if(i>0){
            for(int j=0;j<i;j++)
            cout<<a[j][i];
            cout<<a[i][i];
            for(int j=i-1;j>=0;j--){
                cout<<a[i][j];
            }
        }
        cout<<endl;
    }
}
