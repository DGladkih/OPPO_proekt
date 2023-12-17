//Date.h
#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    std::string date;

public:
    Date(const std::string& inputDate);

    std::string getDate() const;
};

#endif /* DATE_H */