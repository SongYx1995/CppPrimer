#include<iostream>

auto sum(int lo, int hi) {
	long long result = 0;
	while (lo <= hi) {
		result += lo++;
	}
	return result;
}
int main() {
	
	std::cout << sum(INT_MAX-3,INT_MAX-1) << std::endl;
	std::cout<<(50 + 100) * 51 / 2;
}