#include <iostream>

using namespace std;

void Show(const int& i)
{
    cout <<"Function const: " << i << endl;
}

void Show(int &i)
{   
    cout <<"Function non-const: " << i << endl;
}

int main()
{
    const int n=5;
    Show(n);
	return 0;
}
