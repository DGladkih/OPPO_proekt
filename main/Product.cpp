// Класс для представления информации о продукте
#include "Product.h"
#include <iostream>
// Конструктор класса Product, устанавливающий данные о продукте
Product::Product(const std::string& date, const std::string& name, int quantity)
    : date(date), name(name), quantity(quantity) {}
// Вывод информации о продукте
void Product::displayInfo() const {
    // ... (оставить реализацию метода displayInfo как в оригинале)
    std::cout << "Дата: " << date << std::endl;
    std::cout << "Название: " << name << std::endl;
    std::cout << "Количество: " << quantity << std::endl;
}
// Функция для вывода информации о продукте
void printProductInfo(const Product& product) {
    product.displayInfo();
}
