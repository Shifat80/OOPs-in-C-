#include <iostream>
using namespace std;

template <class T>

T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{

    cout << myMax(3, 5) << endl;

    cout << myMax(2.6, 7.6) << endl;

   // cout << myMax('g', 'e') << endl;

    return 0;
}
