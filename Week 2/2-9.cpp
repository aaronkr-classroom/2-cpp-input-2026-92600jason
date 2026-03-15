#include <iostream>

int main(void) {
	int a, b;
	std::cout << " 입력: ";
	std::cin >> a >> b;

	if (a > b) {
		std::cout << "더 큰 숫자는 " << a << std::endl;
	}
	else if (a < b) {
		std::cout << "더 큰 숫자는 " << b << std::endl;
	}
	else {
		std::cout << "같다" << std::endl;
	}
	return 0;
}