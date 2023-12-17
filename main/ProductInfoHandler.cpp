#include "ProductInfoHandler.h"
#include <iostream>
#include "DateValidator.h" // ���������� ��� ������������� DateValidator

// ... (�������� ���������� ������� ��� � ���������)
std::string ProductInfoHandler::getProductName() {
    std::string name;
    std::cout << "������� �������� ������: ";
    std::getline(std::cin, name);
    return name;
}

// ��������� ���������� ������ �� ������������
int ProductInfoHandler::getProductQuantity() {
    std::string input;
    std::cout << "������� ���������� ������: ";
    std::getline(std::cin, input);
    try {
        int quantity = std::stoi(input);
        if (quantity < 0) {
            throw std::invalid_argument("������������� ���������� ������");
        }
        return quantity;
    }
    catch (const std::invalid_argument& e) {
        throw std::invalid_argument("������������ ���������� ������");
    }
}

// ��������� ���� ������ �� ������������
std::string ProductInfoHandler::getProductDate() {
    std::string date;
    std::cout << "������� ���� (��������, 2023.12.31): ";
    std::getline(std::cin, date);
    if (!DateValidator::isValidDate(date)) {
        throw std::invalid_argument("������������ ��� �������������� ����");
    }
    return date;
}