#include <iostream>
#include <string>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopx(i,x,n) for(int i=x;i<n;i++)

int comb[1000][1000];
int main()
{
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		cout << (n % 7 == 0 || n % 7 == 2 ? "Once" : "Buddy") << endl;
	}
}