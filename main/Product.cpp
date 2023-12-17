// Êëàññ äëÿ ïðåäñòàâëåíèÿ èíôîðìàöèè î ïðîäóêòå
#include "Product.h"
#include <iostream>
// Êîíñòðóêòîð êëàññà Product, óñòàíàâëèâàþùèé äàííûå î ïðîäóêòå
Product::Product(const std::string& date, const std::string& name, int quantity)
    : date(date), name(name), quantity(quantity) {}
// Âûâîä èíôîðìàöèè î ïðîäóêòå
void Product::displayInfo() const {

    std::cout << "Äàòà: " << date << std::endl;
    std::cout << "Íàçâàíèå: " << name << std::endl;
    std::cout << "Êîëè÷åñòâî: " << quantity << std::endl;
}
// Ôóíêöèÿ äëÿ âûâîäà èíôîðìàöèè î ïðîäóêòå
void printProductInfo(const Product& product) {
    product.displayInfo();
}
