#ifndef _OPERATION_H
#define _OPERATION_H

class Operation
{
    protected:
        int numberA;
        int numberB;
    public:
        Operation();
        Operation(int numberA, int numberB);
        void setNumber(int numberA, int numberB);
        virtual void getResult() = 0;
};

#endif