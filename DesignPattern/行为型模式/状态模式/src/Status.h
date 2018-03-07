#ifndef STATUS_H
#define STATUS_H
class Context;

class Status
{

public:
    Status();
    virtual ~Status();

    virtual void handle(Context * c);

};
#endif // STATUS_H
