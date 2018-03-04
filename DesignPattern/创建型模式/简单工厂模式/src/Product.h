#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product{
public:
    Product();
    virtual ~Product();
    virtual void Use()=0;
};

#endif
