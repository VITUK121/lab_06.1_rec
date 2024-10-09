#include <iostream>
#include <ctime>
using namespace std;

int* make_arr(int size) {
	return new int[size];
}

void fill_arr(int* arr, int size, int index) {
	if (index != size) {
		arr[index] = -50 + rand() % (15 - (-50) + 1);
		fill_arr(arr, size, index + 1);
	}
}

void print_arr(int* arr, int size, int index) {
	if (index != size) {
		cout << arr[index] << " ";
		print_arr(arr, size, index + 1);
	}
}

int counter(int* arr, int size, int index) {
	int amount = 0;
	if (index != size) {
		if (arr[index] < 0 || arr[index] % 2 != 0) {
			amount = 1;
		}
		return amount + counter(arr, size, index + 1);
	}
	return 0;
}

int sum(int* arr, int size, int index) {
	int value;
	if (index != size) {
		(arr[index] < 0 || arr[index] % 2 != 0) ? (value = arr[index]) : (value = 0);
		return value + sum(arr, size, index + 1);
	}
	return 0;
}

void change_arr(int* arr, int size, int index) {
	if (index != size) {
		if (arr[index] < 0 || arr[index] % 2 != 0) {
			arr[index] = 0;
		}
		change_arr(arr, size, index + 1);
	}
}

int main()
{
	srand(time(NULL));
	int size = 24;
	int* a = make_arr(size);
	fill_arr(a, size, 0);
	print_arr(a, size, 0);
	cout << "\ncounter = " << counter(a, size, 0) << endl;
	cout << "sum = " << sum(a, size, 0) << endl;
	change_arr(a, size, 0);
	print_arr(a, size, 0);
	delete[] a;
}