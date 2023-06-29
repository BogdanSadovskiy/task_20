
using namespace std;
#include <iostream>
void output(int* arr, int size) {
	cout << "__________________________________\n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n__________________________________\n\n";
}

void generalelements(int* arr, int size, int* arr2, int size2,int *& arr3, int& newsize) {
	int count = 0;
	if (size <= size2) {
		newsize = size;
		count = size2;
	}
	else {
		newsize = size2;
		count = size;
	}
	int* newarr = new int[newsize];
	int k = 0;
	for (int i = 0; i < newsize; i++) {
		for (int j = 0; j < count; j++) {
			if (count == size2) {
				if (arr[i] == arr2[j]) {
					newarr[k] = arr2[j];
					k++;
					break;
				}
			}
			else {
				if (arr2[i] == arr[j]) {
					newarr[k] = arr[j];
					k++;
					break;
				}
			}
		}
	}
	newsize = k;

	for (int i = 0; i < newsize-1; i++) {
			for (int j = i+1; j < newsize - 1; j++) {
				if (arr[i] == arr[j]) {
					newarr[j] = newarr[j + 1];
					i--;
					newsize--;
					break;
				}
			}
			
		
	}
	delete[] arr3;
	arr3 = newarr;

}
void fill(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 31 + 1;
	}
}
int main()
{
    int size, size2;
start:
    cout << "Input the size of first array\n";
    cin >> size;
    if (size < 1) {
        cout << "Wrong inputting\n";
        goto start;
    }
	int* arr = new int[size];
	fill(arr, size);
	output(arr, size);

	start2:
	cout << "Input the size of first array\n";
	cin >> size2;
	if (size2 < 1) {
		cout << "Wrong inputting\n";
		goto start2;
	}
	int* arr2 = new int[size2];
	fill(arr2, size2);
	output(arr2, size2);
	int newsize = 0;
	int* arr3 = new int[newsize]; 
	generalelements(arr, size, arr2, size2,  arr3, newsize);

	cout << "General numb arr:\n";
	output(arr3, newsize);

}

