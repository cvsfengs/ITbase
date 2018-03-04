#ifndef BUILDER_H_
#define BUILDER_H_
#include "Product.h"
class Builder{
public:
    Builder();
    virtual ~Builder();

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();
    virtual Product* getResult();
protected:
    Product* m_prod;
};

#endif
