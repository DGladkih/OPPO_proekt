// ����� ��� ������������� ���������� � ��������
// Êëàññ äëÿ ïðåäñòàâëåíèÿ èíôîðìàöèè î ïðîäóêòå
#include "Product.h"
#include <iostream>
// Êîíñòðóêòîð êëàññà Product, óñòàíàâëèâàþùèé äàííûå î ïðîäóêòå
Product::Product(const std::string& date, const std::string& name, int quantity)
    : date(date), name(name), quantity(quantity) {}
// Âûâîä èíôîðìàöèè î ïðîäóêòå
void Product::displayInfo() const {

    std::cout << "����: " << date << std::endl;
    std::cout << "��������: " << name << std::endl;
    std::cout << "����������: " << quantity << std::endl;
    std::cout << "Äàòà: " << date << std::endl;
    std::cout << "Íàçâàíèå: " << name << std::endl;
    std::cout << "Êîëè÷åñòâî: " << quantity << std::endl;
}
// Ôóíêöèÿ äëÿ âûâîäà èíôîðìàöèè î ïðîäóêòå
void printProductInfo(const Product& product) {
    product.displayInfo();
}
//Product.cpp
// ����� ��� ������������� ���������� � ��������
// Êëàññ äëÿ ïðåäñòàâëåíèÿ èíôîðìàöèè î ïðîäóêòå
#include "Product.h"
#include <iostream>
// Êîíñòðóêòîð êëàññà Product, óñòàíàâëèâàþùèé äàííûå î ïðîäóêòå
Product::Product(const std::string& date, const std::string& name, int quantity)
    : date(date), name(name), quantity(quantity) {}
// Âûâîä èíôîðìàöèè î ïðîäóêòå
void Product::displayInfo() const {

    std::cout << "����: " << date << std::endl;
    std::cout << "��������: " << name << std::endl;
    std::cout << "����������: " << quantity << std::endl;
    std::cout << "Äàòà: " << date << std::endl;
    std::cout << "Íàçâàíèå: " << name << std::endl;
    std::cout << "Êîëè÷åñòâî: " << quantity << std::endl;
}
// Ôóíêöèÿ äëÿ âûâîäà èíôîðìàöèè î ïðîäóêòå
void printProductInfo(const Product& product) {
    product.displayInfo();
}
