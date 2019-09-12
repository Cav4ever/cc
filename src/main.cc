#include "singleton.h"

int main()
{
    Singleton *singleton1 = Singleton::getInstance();
    Singleton *singleton2 = Singleton::getInstance();
    if (singleton1 == singleton2) {
        cout<<"singleton1 = singleton2" <<endl;
    }
    //Singleton singleton3;
    return 0;
}