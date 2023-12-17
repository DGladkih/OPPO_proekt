#ifndef PRODUCTINFOHANDLER_H
#define PRODUCTINFOHANDLER_H

#include <string>

class ProductInfoHandler {
public:
    static std::string getProductName();
    static int getProductQuantity();
    static std::string getProductDate();
};

#endif /* PRODUCTINFOHANDLER_H */
