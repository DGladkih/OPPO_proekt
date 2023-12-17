#include "gtest/gtest.h"
#include "Product.h"

// ������������ ����������� ������ Product

// ���� ������������ Product
TEST(ProductTest, ConstructorTest) {
    Product product("2023.12.31", "TestProduct", 5);
    EXPECT_EQ(product.getDate(), "2023.12.31");
    EXPECT_EQ(product.getName(), "TestProduct");
    EXPECT_EQ(product.getQuantity(), 5);
}

// ���� ������ ���������� � ��������
TEST(ProductTest, DisplayInfoTest) {
    Product product("2023.12.31", "TestProduct", 5);

    testing::internal::CaptureStdout(); // ������ ������
    product.displayInfo();
    std::string output = testing::internal::GetCapturedStdout(); // ��������� ������������ ������

    // �������� ������ ����������
    EXPECT_NE(output.find("����: 2023.12.31"), std::string::npos);
    EXPECT_NE(output.find("��������: TestProduct"), std::string::npos);
    EXPECT_NE(output.find("����������: 5"), std::string::npos);
}

// ���� ������� printProductInfo
TEST(ProductTest, PrintProductInfoTest) {
    Product product("2023.12.31", "TestProduct", 5);

    testing::internal::CaptureStdout(); // ������ ������
    printProductInfo(product);
    std::string output = testing::internal::GetCapturedStdout(); // ��������� ������������ ������

    // �������� ������ ����������
    EXPECT_NE(output.find("����: 2023.12.31"), std::string::npos);
    EXPECT_NE(output.find("��������: TestProduct"), std::string::npos);
    EXPECT_NE(output.find("����������: 5"), std::string::npos);
}
