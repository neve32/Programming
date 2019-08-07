#include<iostream>
using namespace std;
int main()
{
   string S,res="";
   cin>>S;
   int hash[1234]={0};
   for(int i=0;i<S.length();i++)
   {
      if(hash[S[i]]==0)
      {
        hash[S[i]]=1;
        res=res+S[i];
      }
   }
  cout<<res;
}
