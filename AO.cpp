#include<iostream>
using namespace std;
inline void Addition(int x, int y) {
    int Addition = x + y;
    cout << "Addition        " << x << " + " << y << " = " << Addition << "\n";
}

inline void Subtraction(int x, int y) {
    int Subtraction = x - y;
    cout << "Subtraction " << x << " - " << y << " = " << Subtraction << "\n";
}

inline void Multiplication(int x, int y) {
    int Multiplication = x * y;
    cout << "Multiplication    " << x << " * " << y << " = " << Multiplication << "\n";
}

inline void Division(int x, int y) {
    float Division = (float)x / y;
    cout << "Division   " << x << " / " << y << " = " << Division << "\n";
}

inline void Modulus(int x, int y) {
    int Modulus = x % y;
    cout << "Modulus    " << x << " % " << y << " = " << Modulus << "\n";
}
int main() {
    int x, y;
    
    cout << "Enter any two numbers:\n";
    cin >> x >> y;
    cout << endl;
    Addition(x,y);
    Subtraction(x,y);
    Multiplication(x,y);
    Division(x,y);
    Modulus(x,y);
}
