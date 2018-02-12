
/*
    Make the following main work by writing a class Complex.
    Replace this comment with your author information and cite as necessary.
    Notice that since objects are const, you will have to promise not to change them
   WORKED WITH LAURA TESORIERO
 */
#include <iostream>
using namespace std;

class Complex
{
    double real, imag;
public:
Complex (const double RE, const double IM)
{
   real = RE;
   imag = IM;
}
friend Complex operator + (const Complex &A, const Complex &B);
void print () const
{
    cout << "The real portion of this complex number is: " << real << "\n";
    cout << "The imaginary portion of this complex number is: " << imag << "\n";
}
const Complex add (const Complex &B) const
{
    Complex C(0,0);
    C.real = real + B.real;
    C.imag = imag + B.imag;
    return C;
}
friend Complex operator - (const Complex &A);
friend ostream &operator << (ostream &o, const Complex &A);

private:

};
Complex operator - (const Complex &A)
{
    Complex C(0,0);
    C.real = -A.real;
    C.imag = -A.imag;
    return C;
}
Complex operator + (const Complex &A, const Complex &B)
{
    Complex C(0,0);
    C.real = A.real + B.real;
    C.imag = A.imag + B.imag;
    return C;
}
ostream &operator << (ostream &o, const Complex &A)
{
    o<<"Real: " << A.real << ", Imag: " << A.imag << "\n";
    return o;
}

int main() {
    const Complex a(1.0, 2.0); // create a complex number with real=1.0 imag=2.0
    const Complex b(0.5, 0.0); // real = 0.5, imag = 0.0
    const Complex c = a + b;   // overload operator + using the first syntax we discussed
    c.print(); // should print the following to cout: (1.5,2.0)
    // (member syntax).  Should look the same as method add where the name add
    // is replaced by operator +
    const Complex d = a.add(b); // this should be the same as the above except the name
    d.print();
    Complex e = -d;
    e.print();
    cout << c << "\t" << d << "\n";
}
