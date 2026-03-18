//tryangle.cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


//*네모 만들기
int main(void) {
	
	cout << "what size tryangle? ";

	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
			}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";

		}
		cout << endl;
	}




	return 0;
}