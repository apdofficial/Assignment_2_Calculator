#include <gtest/gtest.h>
#include "../Calculator.h"
#include "../Calculator.cpp"

TEST(Calculator,add)
{
    sax::Calculator calculator;
    ASSERT_EQ(calculator.add(1.1,1.1),2.2);
    ASSERT_EQ(calculator.add(1,1),2);
}

TEST(Calculator,substract)
{
    sax::Calculator calculator;
    ASSERT_EQ(calculator.subtract(2.1,1.1),1.0);
    ASSERT_EQ(calculator.subtract(2,1),1);
}

TEST(Calculator,multiply)
{
    sax::Calculator calculator;
    ASSERT_EQ(calculator.multiply(2.5,2.0),5.0);
    ASSERT_EQ(calculator.multiply(2,2),4);
}

TEST(Calculator,divide)
{
    sax::Calculator calculator;
    ASSERT_EQ(calculator.divide(10.0,2.0),5.0);
    ASSERT_EQ(calculator.divide(10,2),5);
    ASSERT_THROW(calculator.divide(1,0),std::logic_error);
}

TEST(Calculator,square)
{
    sax::Calculator calculator;
    ASSERT_EQ(calculator.square(64.0),8.0);
    ASSERT_EQ(calculator.square(64),8);
}
