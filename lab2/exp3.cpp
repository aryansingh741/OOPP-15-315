#include <iostream>
using namespace std;

class Salary {
public:
    int salary;

    // Using reference
    void updateByReference() {

        int &newSalary = salary;

        newSalary = newSalary + (newSalary * 10 / 100);
    }

    // Using pointer
    void updateByAddress() {

        int *newSalary = &salary;

        *newSalary = *newSalary + (*newSalary * 10 / 100);
    }
};

int main() {

    Salary s1;
    s1.salary = 50000;

    s1.updateByReference();

    cout << "Salary using reference = " << s1.salary << endl;


    Salary s2;
    s2.salary = 50000;

    s2.updateByAddress();

    cout << "Salary using pointer = " << s2.salary << endl;

    return 0;
}