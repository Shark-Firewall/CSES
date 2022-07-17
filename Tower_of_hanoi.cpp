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

void solve(int n,int from,int to,int aux,int count){
    if(n==0){
    	
    	return;
    }
    solve(n-1,from,aux,to,++count);
    cout<<from<<" "<<to<<endl;
    solve(n-1,aux,to,from,++count);

}

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//#ifndef ONLINE_JUDGE
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif 
}


int main() {
	file_i_o();
	int n;
	cin>>n;
	cout<<(pow(2,n)-1)<<endl;
	solve(n,1,3,2,0);
	return 0;
}