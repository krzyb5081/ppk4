#include <iostream>
#include <vector>

void generation(std::vector<std::vector<std::vector<double>>>& wektorWektorowWektorowDouble) {
	double liczba = 0.2;

	for (int i = 0; i < 10; i++) {
		std::cout << "i: " << i << std::endl;

		std::vector<std::vector<double>> wektorWektorowDouble;

		for (int j = 0; j < 10; j++) {
			std::cout << "j: " << j << std::endl;

			std::vector<double> wektorDouble;

			for (int k = 0; k < 10; k++) {
				std::cout << "k: " << k << std::endl;

				wektorDouble.push_back(liczba *= 2);

			}
			wektorWektorowDouble.push_back(wektorDouble);

		}
		wektorWektorowWektorowDouble.push_back(wektorWektorowDouble);

	}
}

void display(std::vector<std::vector<std::vector<double>>>& wektorWektorowWektorowDouble) {
	
}

int main() {
	std::vector<std::vector<std::vector<double>>> wektorWektorowWektorowDouble;

	generation(wektorWektorowWektorowDouble);

	display(wektorWektorowWektorowDouble);

}