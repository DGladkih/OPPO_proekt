//Product.h

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

    // Геттеры для доступа к закрытым полям
    std::string getDate() const {
        return date;
    }

    std::string getName() const {
        return name;
    }

    int getQuantity() const {
        return quantity;
    }
};

void printProductInfo(const Product& product);

#endif /* PRODUCT_H */
