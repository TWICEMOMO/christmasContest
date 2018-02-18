#include <iostream>
#include <string>
#include<algorithm>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopx(i,x,n) for(int i=x;i<n;i++)

using namespace std;


int main()
{
	int tc;
	cin >> tc;
	while (tc--) {
		string s, sa, sb, sc;
		sa = "hard";
		sb = "un";
		sc = "chuck";
		long long int a, b, c;
		a = b = c = 0;
		string temp = string(s.begin(), s.begin() + sa.size() - 1);
		loopx(i, sa.size() - 1, s.size()) {
			temp += s[i];
			if (temp == sa)a++;
			temp.erase(temp.begin());
		}
		temp = string(s.begin(), s.begin() + sb.size() - 1);
		loopx(i, sb.size() - 1, s.size()) {
			temp += s[i];
			if (temp == sb)b++;
			temp.erase(temp.begin());
		}
		temp = string(s.begin(), s.begin() + sc.size() - 1);
		loopx(i, sc.size() - 1, s.size()) {
			temp += s[i];
			if (temp == sc)c++;
			temp.erase(temp.begin());
		}
		cout << (a + b)*c << endl;
	}
}