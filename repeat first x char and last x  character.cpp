#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    string S;
    char a[1000],b[1000];
    cin>>S;
    int n,k=0,m=0;
    cin>>n;
    int l=S.length();
    for(int i=0;i<n;i++)
    a[k++]=S[i];
    for(int i=l-n;i<l;i++)
    a[k++]=S[i];
    int p=0;
    for(int i=0;i<l;i++){
        if(p<k){
        cout<<a[p];
        p++;
        }
        else
        {
            p=0;
          cout<<a[p];  
          p++;
        }
    }
}
