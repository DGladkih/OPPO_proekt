#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string date;
    std::string name;
    int quantity;

public:
    Product(const std::string& date, const std::string& name, int quantity);

    void displayInfo() const;
};

void printProductInfo(const Product& product);

#endif /* PRODUCT_H */
