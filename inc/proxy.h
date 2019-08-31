#ifndef _PROXY_H
#define _PROXY_H

#include "subject.h"
#include "realSubject.h"

class Proxy: public Subject
{
    private:
        RealSubject *realSubject;
    public:
        Proxy();
        void request();
        ~Proxy();
};

#endif