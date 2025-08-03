#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    // function to input real and imaginary parts from user
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // non-static member function to add two complex numbers
    Complex add(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

    // function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter the first complex number:\n";
    c1.input();

    cout << "Enter the second complex number:\n";
    c2.input();

    c3 = c3.add(c1, c2);

    cout << "Sum of two complex numbers is: ";
    c3.display();

    return 0;
}

/*
Enter the first complex number:
Enter real part: 5
Enter imaginary part: 7
Enter the second complex number:
Enter real part: 9
Enter imaginary part: 1
Sum of two complex numbers is: 14 + 8i
*/
