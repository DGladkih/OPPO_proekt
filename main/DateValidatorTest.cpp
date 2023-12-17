//DateValidatorTest.cpp
#include "gtest/gtest.h"
#include "DateValidator.h"

// ������������ ������� isValidDate �� ���������� ����
TEST(DateValidatorTest, ValidDates) {
    EXPECT_TRUE(DateValidator::isValidDate("2023.12.31"));
    EXPECT_TRUE(DateValidator::isValidDate("2024.02.29")); // ���������� ���
    EXPECT_TRUE(DateValidator::isValidDate("2022.01.15"));
}

// ������������ ������� isValidDate �� ������������ ����
TEST(DateValidatorTest, InvalidDates) {
    EXPECT_FALSE(DateValidator::isValidDate("2023.02.31")); // 31 �������
    EXPECT_FALSE(DateValidator::isValidDate("2023.13.01")); // �������� �����
    EXPECT_FALSE(DateValidator::isValidDate("2022.11.00")); // ������� ����
    EXPECT_FALSE(DateValidator::isValidDate("2021.02.29")); // ������������ ���
}
