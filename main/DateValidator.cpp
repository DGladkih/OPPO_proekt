#include "DateValidator.h"
#include <sstream>

bool DateValidator::isValidDate(const std::string& inputDate) {
    // �������� ������� ���� (YYYY.MM.DD)
    if (inputDate.size() != 10 || inputDate[4] != '.' || inputDate[7] != '.') {
        return false; // �������� ������ ���� (�� YYYY.MM.DD)
    }

    std::istringstream ss(inputDate);
    int year, month, day;
    char delimiter;

    // ��������� ������ ���� �� ���������� (���, �����, ����)
    ss >> year >> delimiter >> month >> delimiter >> day;

    if (ss.fail()) {
        return false; // ������������ ������ �����
    }

    // �������� �� ������������� ���� � ���������
    bool isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    int daysInMonth[] = { 0, 31, (isLeapYear ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth[month]);
}
