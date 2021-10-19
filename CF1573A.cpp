#include<bits/stdc++.h>
#define ll long long
#define mn 10000007
using namespace std;
void koli()
{
  int n;
  string s;
  cin>>n;
  cin>>s;
 int ans=s.back()-47;
 
  for(int i=n-2;i>=0;i--)
  { 
    if(s[i]>'0')
    {ans+=s[i]-47;
    }
  }
  // cout<<s[0]-47-1<<endl;
  cout<<ans-1<<endl;
 
}
 
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
  int t;
  cin>>t;
  while(t--)
   { koli();}
return 0;
 
}