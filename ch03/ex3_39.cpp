#include<iostream>
#include<string>
int main() {
	std::string s1 = "asd";
	std::string s2 = "das";
	if (s1 < s2)
		std::cout << "yes";
	else std::cout << "No";

	char s3[] = "sada";
	char s4[] = "dsa";
	if (strcmp(s3, s4))
		std::cout << "Yes";
	else std::cout << "No";
}