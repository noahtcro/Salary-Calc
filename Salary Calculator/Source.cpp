#include <iostream> //input-output streams
#include <cstdlib> //mathmatical functions

void salary();
double sMonthly(double salary);
double sWage(double salary);
void wage();
double wMonthly(double wage);
double wAnnual(double wage);

int main() {
	int menu = 0;
	double salary = 0;
	double wage = 0;

	do {


		std::cout << "What does the position offer?" << std::endl;
		std::cout << "1. Salary" << std::endl;
		std::cout << "2. Wage" << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cin >> menu;

		switch (menu) {
		case 1:
			system("cls"); //clear screen
			std::cout << "How would you like to convert the salary?" << std::endl;
			std::cout << "1. Salary -> Monthly" << std::endl;
			std::cout << "2. Salary -> Wage" << std::endl;
			std::cin >> menu;

			switch (menu) {
			case 1:
				system("cls");
				std::cout << "Please enter the annual salary: $";
				std::cin >> salary;

				salary = salary / 12;

				system("cls");
				std::cout << "The monthly income for the salary is: $" << salary << std::endl;
				system("pause"); //enter to continue
				system("cls");
				
				break;
			case 2:
				system("cls");
				std::cout << "Please enter the annual salary: $";
				std::cin >> salary;

				salary = salary / 12 / 2 / 2 / 40;

				system("cls");
				std::cout << "The wage for the salary is: $" << salary << std::endl;
				system("pause");
				system("cls");
				break;
			}
		case 2:
			system("cls");
			std::cout << "How would you like to convert the wage?" << std::endl;
			std::cout << "1. Wage -> Monthly" << std::endl;
			std::cout << "2. Wage -> Annual" << std::endl;
			std::cin >> menu;

			switch (menu) {
			case 1:
				system("cls");
				std::cout << "Please enter the wage: $";
				std::cin >> wage;

				wage = wage * 40 * 4;

				system("cls");
				std::cout << "The monthly income for the wage is: $" << wage << std::endl;
				system("pause"); //enter to continue
				system("cls");

				break;
			case 2:
				system("cls");
				std::cout << "Please enter the wage: $";
				std::cin >> wage;

				wage = wage * 40 * 4 * 12;

				system("cls");
				std::cout << "The annual income for the wage is: $" << wage << std::endl;
				system("pause");
				system("cls");
				break;
			}
		}
	} while (menu != 3);
}

void salary() {

}

double sMonthly(double salary) {

}

double sWage(double salary) {

}

void wage() {

}

double wMonthly(double wage) {

}

double wAnnual(double wage) {

}