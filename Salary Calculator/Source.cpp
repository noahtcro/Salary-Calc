#include <iostream> //input-output streams
#include <cstdlib> //mathmatical functions

void salary();
void sMonthly();
void sWage();
void wage();
void wMonthly();
void wAnnual();

int main() {
	int menu = 0;

	do {
		std::cout << "What does the position offer?" << std::endl;
		std::cout << "1. Salary" << std::endl;
		std::cout << "2. Wage" << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cin >> menu;

		switch (menu) {
		case 1:
			salary();
			break;
		case 2:
			wage();
			break;
		case 3:
			break;
		}
	} while (menu != 3);
}

void salary() {
	system("cls"); //clear screen
	int menu = 0;

	std::cout << "How would you like to convert the salary?" << std::endl;
	std::cout << "1. Salary -> Monthly" << std::endl;
	std::cout << "2. Salary -> Wage" << std::endl;
	std::cin >> menu;

	switch (menu) {
	case 1:
		sMonthly();
		break;
	case 2:
		sWage();
		break;
	}
}

void sMonthly() {
	system("cls");
	double income = 0;

	std::cout << "Please enter the annual salary: $";
	std::cin >> income;

	income = income / 12;

	system("cls");
	std::cout << "The monthly income for the salary is: $" << income << std::endl;
	system("pause"); //enter to continue
	system("cls");
}

void sWage() {
	system("cls");
	double income = 0;

	std::cout << "Please enter the annual salary: $";
	std::cin >> income;

	income = income / 12 / 2 / 2 / 40;

	system("cls");
	std::cout << "The wage for the salary is: $" << salary << std::endl;
	system("pause");
	system("cls");
}

void wage() {
	system("cls");
	int menu = 0;

	std::cout << "How would you like to convert the wage?" << std::endl;
	std::cout << "1. Wage -> Monthly" << std::endl;
	std::cout << "2. Wage -> Annual" << std::endl;
	std::cin >> menu;

	switch (menu) {
	case 1:
		wMonthly();
		break;
	case 2:
		wAnnual();
		break;
	}
}

void wMonthly() {
	system("cls");
	double wage = 0;

	std::cout << "Please enter the wage: $";
	std::cin >> wage;

	wage = wage * 40 * 4;

	system("cls");
	std::cout << "The monthly income for the wage is: $" << wage << std::endl;
	system("pause"); //enter to continue
	system("cls");
}

void wAnnual() {
	system("cls");
	double wage = 0;

	std::cout << "Please enter the wage: $";
	std::cin >> wage;

	wage = wage * 40 * 4 * 12;

	system("cls");
	std::cout << "The annual income for the wage is: $" << wage << std::endl;
	system("pause");
	system("cls");
}