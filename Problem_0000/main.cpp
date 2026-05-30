#include <iostream>
using namespace std;
int main(){
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		if(i % 2 == 0) continue;
		sum += 1LL * i * i;
	}
	cout << sum << endl;
	return 0;
}
