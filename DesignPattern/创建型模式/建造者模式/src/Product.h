#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>
#include <string>
using namespace std;

class Product{
public:
    Product();
    virtual ~Product();

    void setA(string str);
    void setB(string str);
    void setC(string str);
    void show();
private:
    string m_a;
    string m_b;
    string m_c;
};

#endif
