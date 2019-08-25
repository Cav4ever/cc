#ifndef _ANIMAL_H
#define _ANIMAL_H

class Animal
{
    protected:
        char *name;
        int shoutNum;
    public:
        Animal();
        Animal(const char *name, int shoutNum);
        Animal(const Animal &obj);
        Animal &operator=(const Animal &obj);
        virtual ~Animal();
        int getShoutNum();
        void setShoutNum(int shoutNum);
        virtual void shout() = 0;
};

#endif