#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[1000];
	cin>>str;
	int l=strlen(str),p=0,x;
	cin>>x;
	for(int i=1;i<=x;i++){
	    if(p<l){
	        p=p+1;
	    }
	    else{
	        p=0;
	        p++;
	    }
	}
	cout<<str[p-1];
}
