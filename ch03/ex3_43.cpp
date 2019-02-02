#include<iostream>
int main() {
	int ia[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for(const int (&row)[4]:ia)
		for (const int col : row) {
			std::cout << col<<" ";
		}
	std::cout << std::endl;

	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 4; col++)
			std::cout << ia[row][col]<<" ";
	std::cout << std::endl;


	for (int(*row)[4] = ia; row != ia + 3; row++)
		for (int* col = *row; col != *row + 4; col++)
			std::cout << *col << " ";
	std::cout << std::endl;
}