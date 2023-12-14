#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <locale>

class Product {
private:
    std::string date;
    std::string name;
    int quantity;

public:
    Product(const std::string& date, const std::string& name, int quantity)
        : date(date), name(name), quantity(quantity) {}

    void displayInfo() const {
        std::cout << "Дата: " << date << std::endl;
        std::cout << "Название: " << name << std::endl;
        std::cout << "Количество: " << quantity << std::endl;
    }
};

int main() {
    std::locale::global(std::locale(""));

    std::cout << "Введите информацию о товаре (в формате: Дата Название Количество):" << std::endl;

    std::string input;
    std::cout << "Введите Название товара: ";
    std::getline(std::cin, input);
    std::string name = input;

    std::cout << "Введите количество товара: ";
    std::getline(std::cin, input);
    int quantity = std::stoi(input);

    std::cout << "Введите дату (например, 2023.12.31): ";
    std::getline(std::cin, input);
    std::string date = input;

    Product product(date, name, quantity);

    product.displayInfo();

    return 0;
}