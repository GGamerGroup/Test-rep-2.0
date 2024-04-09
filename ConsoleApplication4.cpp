#include <iostream>
using namespace std;
// Функция для сложения двух чисел
double add(double a, double b) {
    return a + b;
}

// Функция для вычитания двух чисел
double subtract(double a, double b) {
    return a - b;
}
// Функция для умножения двух чисел
double multiply(double a, double b) {
    return a * b;
}

// Функция для деления двух чисел
double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Ошибка: Деление на ноль невозможно!" << std::endl;
        return 0; // Возвращаем 0 в случае деления на ноль

    }
    return a / b;
}

    int main() {
        setlocale(LC_ALL, "ru");
        char operation;
        double num1, num2, result;

        std::cout << "Введите операцию (+; -; *; /): ";
        std::cin >> operation;

        std::cout << "Введите первое число: ";
        std::cin >> num1;

        std::cout << "Введите второе число: ";
        std::cin >> num2;

        switch (operation) {
        case '+':
            result = add(num1, num2);
            std::cout << "Результат сложения: " << result << std::endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "Результат вычитания: " << result << std::endl;
            break;
        case '*':
            result = multiply(num1, num2);
            std::cout << "Результат умножения: " << result << std::endl;
            break;
        case '/':
            result = divide(num1, num2);
            std::cout << "Результат деления: " << result << std::endl;
            break;
        default:
            std::cout << "Ошибка: Неподдерживаемая операция!" << std::endl;
        }

        return 0;
    }