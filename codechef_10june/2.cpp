#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int b,m;
	    cin>>b>>m;
	    string s,v;
	    cin>>s>>v;
	    int g=min(b,m);
	    for(int i=0;i<g;i++){
	        if(s[i]==v[i]){
	            cout<<s[i];
	        }
	        else{
	            break;
	        }
	    }
	    cout<<endl;
	}

}