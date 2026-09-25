#include <iostream>
using namespace std;

class Salary {
public:
    int salary;

    void updateSalary() {
        int &newSalary = salary;

        newSalary = newSalary + (newSalary * 10 / 100);

        cout << "Salary = " << salary << endl;
    }
};

int main() {

    Salary s;

    s.salary = 50000;c

    s.updateSalary();

    return 0;
}