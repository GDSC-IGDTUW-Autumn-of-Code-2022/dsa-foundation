#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    char s[100005];
	    if(n==1)
	    cout<<'a'<<endl;
	    else if(n%2!=0 && x>(n/2)+1){
	    cout<<-1<<endl;}
	    else if(n%2==0 && x>(n/2)){
	    cout<<-1<<endl;}
	    else 
	    {
	        if(n%2==0){
	        for(int i=0;i<x;i++){
	            s[i]=char(i+97);
	        }
	        for(int i=x;i<n/2;i++){
	            s[i]=char(97);
	        }
	        int j=0;
	        for(int i=n-1;i>=n/2;i--){
	            s[i]=s[j++];
	        }}
	        else
	        {
	            for(int i=0;i<x;i++){
	                s[i]=char(i+97);
	            }
	            for(int i=x;i<=n/2;i++){
	                s[i]=char(97);
	            }
	            int j=0;
	            for(int i=n-1;i>=(n/2);i--){
	                s[i]=s[j++];
	            }
	        }
	        
	        for(int i=0;i<n;i++){
	            cout<<s[i];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}