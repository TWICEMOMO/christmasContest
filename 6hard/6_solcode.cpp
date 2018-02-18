#include <iostream> 
#include <string> 
#include <cstdio> 
#include <vector> 
using namespace std;

vector<int> getPi(string p) {
	int m = (int)p.size(), j = 0;
	vector<int> pi(m, 0);
	for (int i = 1; i < m; i++) {
		while (j > 0 && p[i] != p[j])
			j = pi[j - 1];
		if (p[i] == p[j]) pi[i] = ++j;
	}
	return pi;
}

int kmp(string s, string p) {
	int res = 0;
	auto pi = getPi(p);
	int n = (int)s.size(), m = (int)p.size(), j = 0;
	for (int i = 0; i < n; i++) {
		while (j > 0 && s[i] != p[j]) j = pi[j - 1];
		if (s[i] == p[j]) {
			if (j == m - 1) {
				res++;
				j = pi[j];
			}
			else { j++; }
		}
	}
	return res;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string s, sa, sb, sc;
		cin >> s >> sa >> sb >> sc;
		long long int a = kmp(s, sa);
		long long int b = kmp(s, sb);
		long long int c = kmp(s, sc);
		printf("%lld\n", (a + b)*c);
	}
	return 0;
}
