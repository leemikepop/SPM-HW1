#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	int n, a, l = 0;
	int code[26]={};
	
	cin >> n;
	
	cin.ignore();
	
	string w;
	
	for (i=0;i<n;i++) {
		getline(cin, w);
		
		for (j=0;j<w.size();j++) {
			a = -1;
			
			if (w[j] >= 'a' && w[j] <= 'z')
				a = w[j] - 'a';
			else if (w[j] >= 'A' && w[j] <= 'Z')
				a = w[j] - 'A';
			
			if (a != -1) {
				l++;
				code[a]++;
			}
		}
	}
	
	for (j=l;j>=1;j--) {
		for (i=0;i<26;i++) {
			if (code[i] == j) {
				cout << (char) (i + 'A') << " " << code[i] << endl;
			}
		}
	}

	return 0;
}