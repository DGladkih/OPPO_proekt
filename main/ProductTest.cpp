#include "gtest/gtest.h"
#include "Product.h"

// Тестирование функционала класса Product

// Тест конструктора Product
TEST(ProductTest, ConstructorTest) {
    Product product("2023.12.31", "TestProduct", 5);
    EXPECT_EQ(product.getDate(), "2023.12.31");
    EXPECT_EQ(product.getName(), "TestProduct");
    EXPECT_EQ(product.getQuantity(), 5);
}

// Тест вывода информации о продукте
TEST(ProductTest, DisplayInfoTest) {
    Product product("2023.12.31", "TestProduct", 5);

    testing::internal::CaptureStdout(); // Захват вывода
    product.displayInfo();
    std::string output = testing::internal::GetCapturedStdout(); // Получение захваченного вывода

    // Проверка вывода информации
    EXPECT_NE(output.find("Дата: 2023.12.31"), std::string::npos);
    EXPECT_NE(output.find("Название: TestProduct"), std::string::npos);
    EXPECT_NE(output.find("Количество: 5"), std::string::npos);
}

// Тест функции printProductInfo
TEST(ProductTest, PrintProductInfoTest) {
    Product product("2023.12.31", "TestProduct", 5);

    testing::internal::CaptureStdout(); // Захват вывода
    printProductInfo(product);
    std::string output = testing::internal::GetCapturedStdout(); // Получение захваченного вывода

    // Проверка вывода информации
    EXPECT_NE(output.find("Дата: 2023.12.31"), std::string::npos);
    EXPECT_NE(output.find("Название: TestProduct"), std::string::npos);
    EXPECT_NE(output.find("Количество: 5"), std::string::npos);
}
