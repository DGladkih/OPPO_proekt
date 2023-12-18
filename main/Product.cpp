// Класс для представления информации о продукте

#include "Product.h"
#include <iostream>

Product::Product(const std::string& date, const std::string& name, int quantity)
    : date(date), name(name), quantity(quantity) {}

void Product::displayInfo() const {

    std::cout << "Дата: " << date << std::endl;
    std::cout << "Название: " << name << std::endl;
    std::cout << "Количество: " << quantity << std::endl;

}

void printProductInfo(const Product& product) {
    product.displayInfo();
}
