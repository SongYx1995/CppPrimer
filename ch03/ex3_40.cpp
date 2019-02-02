#include<iostream>
int main() {
	char s1[] = "test1";
	char s2[] = "test2";
	char s3[12] = {};
	strcpy(s3, s1);
	strcat(s3, s2);
	std::cout << s3;
}