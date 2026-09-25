#include <iostream>
using namespace std;

class Salary {
public:

    
    void callByValue(int salary) {

        salary = salary + (salary * 10 / 100);

        cout << "Inside Call by Value: " << salary << endl;
    }


    
    void callByReference(int &salary) {

        salary = salary + (salary * 10 / 100);

        cout << "Inside Call by Reference: " << salary << endl;
    }


    
    void callByAddress(int *salary) {

        *salary = *salary + (*salary * 10 / 100);

        cout << "Inside Call by Address: " << *salary << endl;
    }
};

int main() {

    Salary s;

    int salary1 = 50000;
    int salary2 = 50000;
    int salary3 = 50000;


    // Call by Value
    s.callByValue(salary1);

    cout << "After Call by Value: " << salary1 << endl;

    cout << endl;


    
    s.callByReference(salary2);

    cout << "After Call by Reference: " << salary2 << endl;

    cout << endl;


    
    s.callByAddress(&salary3);

    cout << "After Call by Address: " << salary3 << endl;


    return 0;
}