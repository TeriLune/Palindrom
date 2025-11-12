#include <iostream>
#include <string>

int main() {
	std::string slowo = "";
	std::cout << "Wpisz swoje s³owo: "; std::cin >> slowo;

	for (auto i = 0; i < slowo.length(); i++) {
		slowo[i] = toupper(slowo[i]);

	}

	for (auto i = 0; i < slowo.length(); i++) {
		if (slowo[i] != slowo[slowo.length() - i - 1]) {
			std::cout << "Nie jest palindromem \n";
			return 1;
		}
	}
	std::cout << "Jest palindromem \n";
	return 0;
}