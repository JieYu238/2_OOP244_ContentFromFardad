#include <iostream>
using namespace std;
class Base {
    int m_b{};
public:
    Base() {
        cout << "Base Default";
    }
    Base(int b) :m_b{ b } {
        cout << "Base Constr(" << b << ")";
    }
    Base(const Base& Bs) {
        cout << "Base Copy(" << (m_b = Bs.m_b - 1) << ")";
    }
    Base& operator=(const Base& Bs) {
        cout << "Base Copy Assign(" << m_b << " to " << Bs.m_b + 1 << ")";
        if (this != &Bs) {
            m_b = Bs.m_b + 1;
        }
        return *this;
    }
    Base& operator=(int b) {
        cout << "Base Assign(" << m_b << " to " << b << ")";
        m_b = b;
        return *this;
    }
    virtual ~Base() {
        cout << "Base Dest(" << m_b << ")";
    }
    virtual ostream& write(ostream& ostr = cout)const {
        return ostr << "Base(" << m_b << ")";
    }
};
ostream& operator<<(ostream& ostr, const Base& B) {
    return B.write(ostr);
}

class Derived :public Base {
    int m_d{};
public:
    Derived() {
        cout << "+Der Default";
    }
    Derived(int d) :Base{ d }, m_d{ d } {
        cout << "+Der Contsr(" << d << ")";
    }
    /*Derived( const Derived& Dr ) {
       cout << "+Der Copy(" << (m_d = Dr.m_d - 10) << ")";
    }
    Derived& operator=( const Derived& Dr ) {
       cout << "Der Assing(" << m_d << " to " << Dr.m_d + 10 << ")";
       if ( this != &Dr ) {
          m_d = Dr.m_d + 10;
       }
       return *this;
    }*/
    virtual ~Derived() {
        cout << "Derived Dest(" << m_d << ")";
    }
    ostream& write(ostream& ostr = cout)const {
        Base::write(ostr);
        return ostr << "+Derived(" << m_d << ")";
    }
};

void nl() {
    cout << endl;
}
int main() {
    Derived D = 123;
    nl();
    Derived E;
    nl();
    Derived F = D;
    nl();
    E = D;
    nl();
    cout << D << endl;
    cout << E << endl;
    cout << F << endl;
    return 0;
}