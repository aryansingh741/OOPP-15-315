#include <iostream>
using namespace std;

class Demo {
private:
    int id;

public:
    // 1. Default Constructor
    Demo() {
        id = 0;
        cout << "Default Constructor called (id = " << id << ")\n";
    }

    // 2. Parameterized Constructor
    Demo(int x) {
        id = x;
        cout << "Parameterized Constructor called (id = " << id << ")\n";
    }

    // 3. Copy Constructor
    Demo(Demo &d) {
        id = d.id;
        cout << "Copy Constructor called (id = " << id << ")\n";
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for id = " << id << "\n";
    }
};

int main() {
    Demo obj1;        // Calls Default Constructor
    Demo obj2(10);    // Calls Parameterized Constructor
    Demo obj3 = obj2; // Calls Copy Constructor

    return 0;
}
