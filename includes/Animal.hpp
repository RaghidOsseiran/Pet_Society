#ifndef ANIMAL
#define ANIMAL

#include <iostream>
using namespace std;

class Animal{
    public : 
        Animal();
        int get_age();
        void makeSound();


    private:
        int age;
};

#endif