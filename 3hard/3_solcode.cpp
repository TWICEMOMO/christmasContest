#include <iostream>
#include <string>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopx(i,x,n) for(int i=x;i<n;i++)

int comb[1000][1000];
int main()
{
	loop(i, 1000) {
		comb[i][0] = comb[0][i] = 1;
	}
	loopx(i, 1, 1000) {
		loopx(j, 1, 1000) {
			comb[i][j] = comb[i - 1][j] + comb[i][j - 1];
			comb[i][j] %= 1000000007;
		}
	}
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int a, b;
		cin >> a >> b;
		long long int res = (long long int)comb[n - a][a] * comb[n - a - b][b];
		res %= 1000000007;
		while (n--) {
			res *= 3;
			res %= 1000000007;
		}
		cout << res << endl;
	}
}