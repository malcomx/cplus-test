#include <iostream>
#include "object.h"

using namespace std;

void function1();

int main(int argc, char* argv[]) {

    cout << "Hola mundo" << endl;

    function1();

    Person person("Matia");

    person.setSpeed(2);
    person.walk();
    person.stop();

    Person *p = new Person("Juan");
    p->setSpeed(3);
    p->walk();

    delete p;

    return 0;
}

void function1() {
    cout << "Dentro de la funcion" << endl;
}