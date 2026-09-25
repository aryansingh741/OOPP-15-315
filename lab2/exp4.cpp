#include <iostream>
using namespace std;

void updateSalary(int &salary) {

    salary = salary + (salary * 10 / 100);
}

int main() {

    int salary = 50000;

    updateSalary(salary);

    cout << "Salary = " << salary << endl;

    return 0;
}