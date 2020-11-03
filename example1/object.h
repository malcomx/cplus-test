#include <string>

using namespace std;

class Person {

public:
    Person(string name);
    void walk();
    void setSpeed(int speed);
    void stop();
    ~Person();
private:
    string _name;
    int _speed;
    bool _isWalking;
    void wakeUp();
    void toRest();
};