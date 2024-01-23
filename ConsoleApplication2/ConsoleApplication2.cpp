
#include <iostream>э
#include <Windows.h>
using namespace std;


double squareRoot(double x) {
	if (x < 0) {
		cout << "Невозможно извлечь квадратный корень из отрицательного числа." << endl;
		return 0.0;
	}

	double epsilon = 1e-15;  
	double guess = x;     

	while (abs(guess * guess - x) > epsilon) {
		
		guess = (guess + x / guess) / 2.0;
	}

	return guess;
}

double power(double base, int exponent) {
if (exponent == 0) {
		return 1.0;
	}
	else {
		double result = 1.0;
		for (int i = 0; i < abs(exponent); ++i) {
			result *= base;
		}
		return (exponent > 0) ? result : 1.0 / result;
	}
}


void ExitProgram() {
	cout << "Программа завершена." << endl;
	exit(0);
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int choice;


	double a, b;
	while(true) 
	{

		cout << "Выберите операцию: " << endl;
		cout << "1. Сложение " << endl;
		cout << "2. Вычитание " << endl;
		cout << "3. Умножение " << endl;
		cout << "4. Деление" << endl;
		cout << "5. Возведение в степень N первого числа" << endl;
		cout << "6. Найти квадратный корень числа" << endl;
		cout << "7. Найти один процент от числа" << endl;
		cout << "8. Найти факториал из числа" << endl;
		cout << "9. Выход " << endl;

		cin >> choice;


		switch (choice)
		{
		case 1:
			cout << "Введите первое число: " << endl;
			cin >> a;
			cout << "Введите второе число: " << endl;
			cin >> b;
		
			cout << "Результат: " << a+b << endl;
			break;

		case 2:
			cout << "Введите первое число: " << endl;
			cin >> a;
			cout << "Введите второе число: " << endl;
			cin >> b;
			cout << "Результат: " << a - b << endl;
			break;

		case 3:
			cout << "Введите первое число: " << endl;
			cin >> a;
			cout << "Введите второе число: " << endl;
			cin >> b;
			cout << "Результат: " << a* b << endl;
			break;
		case 4:
			cout << "Введите первое число: " << endl;
			cin >> a;
			cout << "Введите второе число: " << endl;
			cin >> b;
			if (b != 0) {
				cout << "Результат: " << a / b << endl;
			}
			else {
				cout << "Делить на ноль нельзя" << endl;
				return 0;
			}
			break;
			
		case 5:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << " Введите число в которое хотите возвести" << endl;
			cin >> b;
			cout << "возведение в степень числа : " << power(a, static_cast<int>(b))<< endl;
			break;

		case 6:
			cout << "Введите число, которое хотите вынести из квадратного корня" << endl;
			cin >> a;
			cout << "Результат: " << squareRoot(a) << endl;
			break;


		case 7: 

			cout << "Введите число из которого хотите найти 1 процент" << endl;
			cin >> a;
			cout << "Результат: " << a * 0.01 << endl;
			break;


		case 8:
			cout << "Введите число, для которого хотите найти факториал: " << endl;
			cin >> a;
			double factorial = 1;
			if (a < 0) {
				cout << "Факториал отрицательного числа не определен." << endl;
			}
			else {
				for (int i = 1; i <= a; ++i) {
					factorial *= i;
				}
				cout << "Факториал числа " << a << " равен: " << factorial << endl;
			}
			break;
	
		case 9:
			ExitProgram();  
			break;
		default:
			cout << "Ошибка" << endl;
			

			}
	

		}
	
		return 0;

	} 



	


