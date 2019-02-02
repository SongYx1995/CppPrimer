#include<iostream>
#include<vector>
int main() {
	std::vector<int> a{ 1,2,3,4 };
	int b[5];
	decltype(sizeof(b)) index=0;
	for (auto i : a) {
		b[index++] = i;
		std::cout << b[index - 1];
	}
}