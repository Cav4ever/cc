#include "nbaObserver.h"
#include "stockObserver.h"
#include "boss.h"

int main()
{
    Subject *sub = new Boss();
    sub->setState();
    Observer *hui = new NbaObserver(sub, "Hui");
    Observer *yong = new StockObserver(sub, "Yong");
    Observer *fei = new NbaObserver(sub, "Fei");

    sub->attach(hui);
    sub->attach(yong);
    sub->attach(fei);
    sub->notify();

    sub->detach(fei);
    cout<<endl;
    cout<<"after detach fei" <<endl;
    sub->notify();
    delete sub;
    delete hui;
    delete yong;
    delete fei;
    return 0;
}