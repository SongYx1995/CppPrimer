#include<iostream>
using namespace std;
int main() {
	int cur = 0, pre = 0, count = 0;

	if (cin >> cur) {
		pre = cur;
		count = 1;
		while (cin >> cur) {
			if (cur == pre)
				count++;
			else {
				cout << pre << " occurs "
					<< count << " times" << endl;
				count = 1;
				pre = cur;
			}
		}
		cout << pre << " occurs "
			<< count << " times" << endl;
	}
}