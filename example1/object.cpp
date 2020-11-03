#include <iostream>
#include "object.h"

Person::Person(string name){
    _name = name;
    wakeUp();
}

void Person::wakeUp() {
    _speed = 0;
    _isWalking = false;
    cout << "Waking up " << _name << ", with speed " << _speed << " and isWalking " << (_isWalking == true ? "TRUE" : "FALSE") << endl;
}

void Person::walk(){
    if(_speed > 0) {
        _isWalking = true;
    }

    _isWalking = true;

    cout << "Person " << _name << ", is walking now at speed " << _speed << " m/s" << endl;
}

void Person::setSpeed(int speed) {
    _speed = speed;
}

void Person::stop(){
    _speed = 0;
    _isWalking = false;
    cout << "Person is stoped from " << _name << endl;
}


void Person::toRest() {
    if(_isWalking == true) {
        stop();
    }
    cout << "Person to rest. Good night from " << _name << endl;
}

Person::~Person() {
    toRest();
}