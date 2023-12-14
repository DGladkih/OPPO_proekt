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

std::string getProductName() {
    std::string name;
    std::cout << "Введите Название товара: ";
    std::getline(std::cin, name);
    return name;
}

int getProductQuantity() {
    std::string input;
    std::cout << "Введите количество товара: ";
    std::getline(std::cin, input);
    return std::stoi(input);
}

std::string getProductDate() {
    std::string date;
    std::cout << "Введите дату (напримерf, 2023.12.31): ";
    std::getline(std::cin, date);
    return date;
}

void printProductInfo(const Product& product) {
    product.displayInfo();
}

int main() {
    std::locale::global(std::locale(""));

    std::cout << "Введите информацию о товаре (в формате: Дата Название Количество):" << std::endl;

    std::string name = getProductName();
    int quantity = getProductQuantity();
    std::string date = getProductDate();

    Product product(date, name, quantity);

    printProductInfo(product);

    return 0;
}
