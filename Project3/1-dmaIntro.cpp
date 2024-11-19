#include<iostream>

using namespace std;

int main() {
	cout << "Welcome to OOP244" << endl;
	cout << "Using version control system!" << endl;

	int* numbers{};//golden rule to initialize to null or int* numbers = nullptr;
	size_t size{};	//size_t is better than int. size_t is unsigned integer, size_t means size type
	cout << "Enter the number of integer values to be printed in reverse.\n>";
	cin >> size;
	numbers = new int[size];
	for (size_t i = 0; i < size; i++) {
		cout << (i + 1) << "> ";
		cin >> numbers[i];
	}

	for (size_t i = 0; i < size; i++) { // when the condition is i >= 0, i will become -1, this in size_t which is the biggest number
		cout << (i + 1) << ": " << numbers[size - i - 1] << endl;
	}
	delete[] numbers;
	//delete[] numbers;//delete nullptr is safe, but delete then delete causes crash
	numbers = nullptr;//make sure to set null


	return 0;
}