#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void show()
    {
        cout << real;

        if (imaginary >= 0)
            cout << " + " << imaginary << "i";
        else
            cout << " - " << -imaginary << "i";
    }

    int getReal()
    {
        return real;
    }

    int getImaginary()
    {
        return imaginary;
    }
};

int main()
{
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    int sumReal = c1.getReal() + c2.getReal();
    int sumImaginary = c1.getImaginary() + c2.getImaginary();

    cout << "\nFirst Complex Number = ";
    c1.show();

    cout << "\nSecond Complex Number = ";
    c2.show();

    cout << "\nSum = " << sumReal;

    if (sumImaginary >= 0)
        cout << " + " << sumImaginary << "i";
    else
        cout << " - " << -sumImaginary << "i";

    return 0;
}