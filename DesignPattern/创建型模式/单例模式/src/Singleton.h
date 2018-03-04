#ifndef SINGLETON_H_
#define SINGLETON_H_
class Singleton{
public:
    virtual ~Singleton();
    Singleton * m_Singleton;

    static Singleton* getInstance();
    void singletonOperation();
private:
    static Singleton * instance;
    Singleton();
};
#endif
