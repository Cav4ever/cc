#include <iostream>
#include "proxy.h"

Proxy::Proxy()
{
   realSubject =  new RealSubject();
}

void Proxy::request()
{
    std::cout<< "this is in request() of Proxy"<< std::endl;
    realSubject->request();
}

Proxy::~Proxy()
{
   delete []realSubject;
}