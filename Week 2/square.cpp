//square.cpp
#include <iostream>

using std::cin;
using std:: cout;
using std::endl;


//*네모 만들기
int main(void) {
	cout << "1. square, 2. rectangle ";
	int option;
	cin  >> option;
	if (option != 1 && option != 2) {
		cout << "Error: Only choose 1 or 2 ";
		return 0x34AF; // 16진법 
	}
	cout << "what size square? ";

	int size;
	cin >> size;

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (option == 1) {
					cout << "*"; // 10X10 사각형
				}
				else if (option == 2) {
					cout << "**"; // 20X10 직사각형
				}
				else {
					cout << "Error: Only choose 1 or 2 ";
						return 0x34AF; // 16진법 
				}
				
			}
			cout << endl;
		}




	return 0;
}