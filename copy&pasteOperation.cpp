#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    long n;
    string S;
    cin>>n>>S;
    int l=S.length();
    long t,r=l;
    for(int i=0;i<n;i++){
        t=r*2;
        r=t;
    }
    cout<<t;
}
