#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	
	while (cin >> s) {
		string result;
		for (auto &i : s) {
			if (!ispunct(i)) {
				result += i;
			}
		}
		cout << result;
	}
}