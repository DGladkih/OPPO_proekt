//main.cpp

#include "Product.h"
#include "ProductInfoHandler.h"
#include "DateValidator.h"
#include <iostream>
#include <locale>
#include <stdexcept>

int main() {
    std::locale::global(std::locale(""));

    try {
        // Запрос информации о продукте у пользователя
        std::cout << "Введите информацию о товаре (в формате: Дата Название Количество):" << std::endl;

        // Получение данных о продукте
        std::string name = ProductInfoHandler::getProductName();
        int quantity = ProductInfoHandler::getProductQuantity();
        std::string date = ProductInfoHandler::getProductDate();

        // Создание объекта продукта и вывод информации
        Product product(date, name, quantity);
        product.displayInfo();
    }
    catch (const std::exception& e) {
        // Вывод сообщения об ошибке в случае исключения
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
