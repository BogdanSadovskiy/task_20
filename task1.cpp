using namespace std;
#include <iostream>
void input(int*& arr, int& size, int& a) {
	cout << "Input " << size + 1 << " number\n";
	cout << "Stop inputting - 0\n";
	int* arr2 = new int[size + 1];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
	}
	cin >> a;
	if (a == 0) {
		return;
	}
	arr2[size] = a;
	size++;
	delete[] arr;
	arr = arr2;
}

void output(int* arr, int size) {
	cout << "________________________________\n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n--------------------------------\n\n";
}

void nominus(int*& arr, int& size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	int newsize = size - k;
	int* newarr = new int[newsize];
    k = 0;
	for (int i = 0; i < size; i++) {
		newarr[k] = arr[i];
		k++;
		if (arr[i] < 0) {
			k--;
		}
	}
	size = newsize;
	cout << endl;
	delete[] arr;
	arr = newarr;
}
int main()
{
	int size = 0;
	int* arr = new int[size];
	int a = 1;
	do {
		input(arr, size, a);
	} while (a != 0);
	output(arr, size);
	nominus(arr, size);
	cout << "Positive array:\n";
	output(arr, size);
}

