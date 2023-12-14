#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <locale>
#include <stdexcept>

// Класс для работы с датой
class Date {
private:
    std::string date;

public:
    // Конструктор класса Date, инициализирующий дату
    Date(const std::string& inputDate) : date(inputDate) {}

    // Получение строки с датой
    std::string getDate() const {
        return date;
    }
};

// Класс для проверки корректности даты
class DateValidator {
public:
    // Метод для проверки корректности формата и существования даты
    static bool isValidDate(const std::string& inputDate) {
        // Проверка формата даты (YYYY.MM.DD)
        if (inputDate.size() != 10 || inputDate[4] != '.' || inputDate[7] != '.') {
            return false; // Неверный формат даты (не YYYY.MM.DD)
        }

        std::istringstream ss(inputDate);
        int year, month, day;
        char delimiter;

        // Разбиение строки даты на компоненты (год, месяц, день)
        ss >> year >> delimiter >> month >> delimiter >> day;

        if (ss.fail()) {
            return false; // Некорректный формат чисел
        }

        // Проверка на существование даты в календаре
        bool isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
        int daysInMonth[] = { 0, 31, (isLeapYear ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        return (month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth[month]);
    }
};

// Класс для работы с информацией о продукте
class ProductInfoHandler {
public:
    // Получение названия товара от пользователя
    static std::string getProductName() {
        std::string name;
        std::cout << "Введите Название товара: ";
        std::getline(std::cin, name);
        return name;
    }

    // Получение количества товара от пользователя
    static int getProductQuantity() {
        std::string input;
        std::cout << "Введите количество товара: ";
        std::getline(std::cin, input);
        try {
            int quantity = std::stoi(input);
            if (quantity < 0) {
                throw std::invalid_argument("Отрицательное количество товара");
            }
            return quantity;
        }
        catch (const std::invalid_argument& e) {
            throw std::invalid_argument("Некорректное количество товара");
        }
    }

    // Получение даты товара от пользователя
    static std::string getProductDate() {
        std::string date;
        std::cout << "Введите дату (например, 2023.12.31): ";
        std::getline(std::cin, date);
        if (!DateValidator::isValidDate(date)) {
            throw std::invalid_argument("Некорректная или несуществующая дата");
        }
        return date;
    }
};

// Класс для представления информации о продукте
class Product {
private:
    std::string date;
    std::string name;
    int quantity;

public:
    // Конструктор класса Product, устанавливающий данные о продукте
    Product(const std::string& date, const std::string& name, int quantity)
        : date(date), name(name), quantity(quantity) {}

    // Вывод информации о продукте
    void displayInfo() const {
        std::cout << "Дата: " << date << std::endl;
        std::cout << "Название: " << name << std::endl;
        std::cout << "Количество: " << quantity << std::endl;
    }
};

// Функция для вывода информации о продукте
void printProductInfo(const Product& product) {
    product.displayInfo();
}

// Основная функция программы
int main() {
    std::locale::global(std::locale(""));

    try {
        // Запрос информации о продукте у пользователя
        std::cout << "Введите информацию о товаре (в формате: Дата Название Количество):" << std::endl;

        // Получение данных о продукте
        std::string name = ProductInfoHandler::getProductName();
        int quantity = ProductInfoHandler::getProductQuantity();
        std::string date = ProductInfoHandler::getProductDate();

        // Создание объекта продукта и вывод информации
        Product product(date, name, quantity);
        printProductInfo(product);
    }
    catch (const std::exception& e) {
        // Вывод сообщения об ошибке в случае исключения
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
