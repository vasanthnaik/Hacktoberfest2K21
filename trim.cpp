#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x;
	    cin>>n>>k;
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        int val=x%(k+1);
	        m[val]++;
	    }
	    int f=1;
	    for(auto i:m){
	        if(i.second>=n-1){
	        f=0;
	        cout<<"YES"<<'\n';
	        break;}
	    }
	    if(f)
	    cout<<"NO"<<'\n';
;	}
	return 0;
}
