//Date.cpp
// Класс для работы с датой
#include "Date.h"
 // Конструктор класса Date, инициализирующий дату
Date::Date(const std::string& inputDate) : date(inputDate) {}
// Получение строки с датой
std::string Date::getDate() const {
    return date;
}
