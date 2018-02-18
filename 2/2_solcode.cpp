#include <iostream> 
#include <string> 
#include <cstdio> 
#include <vector> 
#include <algorithm>
#include <set>
using namespace std;

#define P pair<int,int>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopx(i,x,n) for(int i=x;i<n;i++)
int t;
string s;

int main() {
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		cin >> s;
		int cnt = 0;
		int ans = 0;
		for (int j = 0; j < 10; j++) {
			if (s[j] == 'O') {
				cnt++;
				ans += cnt;
			}
			else cnt = 0;
		}
		printf("%d\n", ans);
	}
	return 0;
}

