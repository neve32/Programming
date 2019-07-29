#include<bits/stdc++.h>
#include<boost/algorithm/string.hpp>
using namespace std;
int main(){
  string str("126.8.9.0")
  vector<string> res;
  int i=0;
  boost::split(res,str,boost::is_any_of("."));
  for(int i=0;i<res.size();i++){
    int n=stoi(res[i]);
    if(n>=0&&n<=255)
      i++;
   }
   if(res.size()==4&&i==4)
   cout<<"valid";
   else
   cout<<"Invalid";
   }
