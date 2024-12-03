#include "../includes/Animal.h"


Animal::Animal() {
    age = 0;
}

int Animal::get_age(){
    return age;
}

void Animal::makeSound(){
    cout << "Animal noises...\n";
}

