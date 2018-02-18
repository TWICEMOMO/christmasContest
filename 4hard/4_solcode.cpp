#include <iostream> 
#include <string> 
#include <cstdio> 
#include <vector> 
#include <algorithm>
using namespace std;

#define P pair<int,int>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopx(i,x,n) for(int i=x;i<n;i++)
P v[20000];

int dp[20000];
int n;

bool cmp(P a, P b) {
	if (a.second == b.second)return a.first < b.first;
	return a.second < b.second;
}

int go(int idx) {
	if (idx == n)return 0;
	int &ret = dp[idx];
	if (ret)return ret;
	loopx(i, idx + 1, n) {
		if (v[idx].second > v[i].first)continue;
		if (v[idx + 1].second < v[i].first)break;
		ret = max(ret, go(i));
	}
	return ++ret;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n;
		fill(dp, dp + 20000, 0);
		loop(i, n) {
			scanf("%d%d", &v[i].first, &v[i].second);
		}
		sort(v, v + n, cmp);
		int res = 1;
		int last = v[0].second;
		loopx(i, 1, n) {
			if (last <= v[i].first) {
				res++;
				last = v[i].second;
			}
		}
		cout << res << endl;
	}
	return 0;
}
