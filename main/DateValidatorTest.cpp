//DateValidatorTest.cpp
#include "gtest/gtest.h"
#include "DateValidator.h"

// Тестирование функции isValidDate на корректные даты
TEST(DateValidatorTest, ValidDates) {
    EXPECT_TRUE(DateValidator::isValidDate("2023.12.31"));
    EXPECT_TRUE(DateValidator::isValidDate("2024.02.29")); // Високосный год
    EXPECT_TRUE(DateValidator::isValidDate("2022.01.15"));
}

// Тестирование функции isValidDate на некорректные даты
TEST(DateValidatorTest, InvalidDates) {
    EXPECT_FALSE(DateValidator::isValidDate("2023.02.31")); // 31 февраля
    EXPECT_FALSE(DateValidator::isValidDate("2023.13.01")); // Неверный месяц
    EXPECT_FALSE(DateValidator::isValidDate("2022.11.00")); // Нулевой день
    EXPECT_FALSE(DateValidator::isValidDate("2021.02.29")); // Невисокосный год
}
