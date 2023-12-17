// ����� ��� ������������� ���������� � ��������
#include "Product.h"
#include <iostream>
// ����������� ������ Product, ��������������� ������ � ��������
Product::Product(const std::string& date, const std::string& name, int quantity)
    : date(date), name(name), quantity(quantity) {}
// ����� ���������� � ��������
void Product::displayInfo() const {
    // ... (�������� ���������� ������ displayInfo ��� � ���������)
    std::cout << "����: " << date << std::endl;
    std::cout << "��������: " << name << std::endl;
    std::cout << "����������: " << quantity << std::endl;
}
// ������� ��� ������ ���������� � ��������
void printProductInfo(const Product& product) {
    product.displayInfo();
}
