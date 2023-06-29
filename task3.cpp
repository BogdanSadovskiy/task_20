using namespace std;
#include <iostream>
void inputnumb(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Input " << i + 1 << " element  ";
		cin >> arr[i];
	}
	cout << "Your numbers:_________________\n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "------------------------------\n";
	
}
void calculate(int* arr, int size, int& m, int& d, int& n) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			d++;
		}
		else if (arr[i] == 0) {
			n++;
		}
		else {
			m++;
		}
	}
}
int main()
{
	int m = 0, d = 0, n = 0;
	int size = 0;
	cout << "What is the array's size?  ";
	cin >> size;
	int* arr = new int[size];
	inputnumb(arr, size);
	calculate(arr, size, m, d, n);
	cout << "The minus numbers   - " << m << endl;
	cout << "The null numbers    - " << n << endl;
	cout << "The addition number - " << d << endl;


}

