#include "ProductInfoHandler.h"
#include <iostream>
#include "DateValidator.h" // Ïîäêëþ÷àåì äëÿ èñïîëüçîâàíèÿ DateValidator

std::string ProductInfoHandler::getProductName() {
    std::string name;
    std::cout << "Ââåäèòå Íàçâàíèå òîâàðà: ";
    std::getline(std::cin, name);
    return name;
}

// Ïîëó÷åíèå êîëè÷åñòâà òîâàðà îò ïîëüçîâàòåëÿ
int ProductInfoHandler::getProductQuantity() {
    std::string input;
    std::cout << "Ââåäèòå êîëè÷åñòâî òîâàðà: ";
    std::getline(std::cin, input);
    try {
        int quantity = std::stoi(input);
        if (quantity < 0) {
            throw std::invalid_argument("Îòðèöàòåëüíîå êîëè÷åñòâî òîâàðà");
        }
        return quantity;
    }
    catch (const std::invalid_argument& e) {
        throw std::invalid_argument("Íåêîððåêòíîå êîëè÷åñòâî òîâàðà");
    }
}

// Ïîëó÷åíèå äàòû òîâàðà îò ïîëüçîâàòåëÿ
std::string ProductInfoHandler::getProductDate() {
    std::string date;
    std::cout << "Ââåäèòå äàòó (íàïðèìåð, 2023.12.31): ";
    std::getline(std::cin, date);
    if (!DateValidator::isValidDate(date)) {
        throw std::invalid_argument("Íåêîððåêòíàÿ èëè íåñóùåñòâóþùàÿ äàòà");
    }
    return date;
}
