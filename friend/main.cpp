#include <iostream>

using namespace std;

class A{
    private:
        int valueA;
    public:
        A()
        {
            valueA = 18;
        }
        friend void showA(A);
};

void showA(A x)
{
    cout << x.valueA << endl;
}

int main()
{
    A a;
    showA(a); // 18
    return 0;
}