#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<ll>
#define vii vector<vector<ll>>
#define pi pair<int,int>
#define mp make_pair
#define pb  push_back
#define all(x) x.begin(),x.end()
#define mod 1e9+7
#define test() ll t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif 
}


int main() {
	file_i_o();
	ll n,m,k;
	cin>>n>>m>>k;
	vi v(n);
	vi a(m);
	for(int i=0;i<n;i++) cin>>v[i];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(all(v));
    sort(all(a));
    int count=0,i=0,j=0;
    while(i<n and j<m){
    	if(abs(v[i]-a[j])<=k){
    		count++;
    		i++;
    		j++;
    	}
    	else if(v[i]>a[j]){
    		j++;
    	}
    	else i++;
    }
    cout<<count<<endl;
	return 0;
}




// 45 60 60 80
// 30 60 75