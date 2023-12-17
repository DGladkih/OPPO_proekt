#include "ProductInfoHandler.h"
#include <iostream>
#include "DateValidator.h" // Подключаем для использования DateValidator

// ... (оставить реализацию методов как в оригинале)
std::string ProductInfoHandler::getProductName() {
    std::string name;
    std::cout << "Введите Название товара: ";
    std::getline(std::cin, name);
    return name;
}

// Получение количества товара от пользователя
int ProductInfoHandler::getProductQuantity() {
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
std::string ProductInfoHandler::getProductDate() {
    std::string date;
    std::cout << "Введите дату (например, 2023.12.31): ";
    std::getline(std::cin, date);
    if (!DateValidator::isValidDate(date)) {
        throw std::invalid_argument("Некорректная или несуществующая дата");
    }
    return date;
}