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

int solve(int ind,vector<int> &dp){
	if(ind==0) return 1;
	if(dp[ind]!=-1) return dp[ind];
	int cost=0;
	 for(int i=1;i<=6;i++){
	 	if(ind-i>=0){
	 		cost+=solve(ind-i,dp);
	 		cost%=1000000007;
	 	}
	 }
	 return dp[ind]=cost;
}


int main() {
	file_i_o();
	int n;
	cin>>n;
	vector<int>dp(n+1,-1);
	cout<<solve(n,dp);
	return 0;
}