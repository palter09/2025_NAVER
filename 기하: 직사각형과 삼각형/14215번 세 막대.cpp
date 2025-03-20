#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	
	if (v[2] >= v[0] + v[1]) {
		cout << 2 * (v[0] + v[1]) - 1;
	}
	
	else if (v[0] == v[1] && v[0] == v[2] && v[1] == v[2]) {
		cout << 3 * v[0];
	}
	
	else {
		cout << v[0] + v[1] + v[2];
	}
}
