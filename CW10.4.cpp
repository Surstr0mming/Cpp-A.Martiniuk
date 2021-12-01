#include <iostream>
using namespace std;


typedef struct {
    int numerator;
    unsigned int denominator;
} Rational;

int Input(Rational* x){
    cout << "Enter numerator :";
    cin >> x->numerator;
    cout  << "Enter denominator :";
    cin >> x->denominator;
    return 0;
}

void Output(const Rational x){
    cout << endl << x.numerator << " / " << x.denominator << endl;
}

Rational add(const Rational a, const Rational b){
    Rational c;
    c.numerator = (int)(a.numerator * b.denominator) + (int)(b.numerator * a.denominator);
    c.denominator = a.denominator * b.denominator;
    return c;
}

Rational mul(const Rational a, const Rational b){
    Rational c;
    c.numerator = a.numerator * b.numerator;
    c.denominator = a.denominator * b.denominator;
    return c;
}

bool cmp(const Rational a, const Rational b){
    return a.numerator*b.denominator > b.numerator*a.denominator;
}

unsigned gcd(unsigned a, unsigned b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(b,a%b);
    else return gcd(a,b%a);
}

Rational reduce(const Rational x){
    unsigned d;
    if(x.numerator>=0) d = gcd(x.numerator, x.denominator);
    else d = gcd(-x.numerator, x.denominator);
    Rational z;

    z.numerator = (int)x.numerator / d;
    z.denominator = x.denominator / d;
    return z;
}

void reduce1(Rational* x){
    unsigned int d = x->numerator>=0?gcd(x->numerator, x->denominator):gcd(-x->numerator, x->denominator);
    x->numerator /= d;
    x->denominator /= d;
}

int main() {
    Rational x, y, z;
    Input(&x);
    Input(&y);
    Output(x);
    reduce1(&x);
    cout << endl << "Irreducible :";
    Output(x);
    cout << endl;
    Output(y);
    reduce1(&y);
    cout << endl << "Irreducible :";
    Output(y);
    z = add(x, y);
    reduce1(&z);
    cout << endl << "Sum of two rational number :";
    Output(z);
    Rational z1 = mul(x, y);
    cout << endl << "Multiplication of two rational number :";
    Output(reduce(z1));
    cout << endl;
    if (cmp(z,z1)==1){
        cout << x.numerator << " / " << x.denominator << " >= " << y.numerator << " / " << y.denominator << endl;
    }
    else if (cmp(z,z1)==0){
        cout << x.numerator << " / " << x.denominator << " =< " << y.numerator << " / " << y.denominator << endl;
    }
}