//Date.cpp
// ����� ��� ������ � �����
#include "Date.h"
 // ����������� ������ Date, ���������������� ����
Date::Date(const std::string& inputDate) : date(inputDate) {}
// ��������� ������ � �����
std::string Date::getDate() const {
    return date;
}
