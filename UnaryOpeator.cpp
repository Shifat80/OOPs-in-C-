#include<iostream>
using namespace std;
class Counter
{
    int Count;
public:
    Counter()
    {
        Count = 0;
    }
    Counter(int c)
    {
        Count = c;
    }
    int get_Count()
    {
        return Count;
    }
    Counter operator ++()
    {
        ++Count;
        Counter temp;
        temp.Count = Count;
        return temp;
    }
    // Counter operator ++ ()
    // {
    //     ++Count;
    //     return Counter(Count);
    // }
    
    Counter operator ++ (int)
    {
        Count++;
        return Counter(Count);
    }
};


// class Counter
// {
//     int Count;
// public:
//     Counter()
//     {
//         Count = 0;
//     }
//     int get_Count()
//     {
//         return Count;
//     }
//     void operator ++()
//     {
//         ++Count;
//     }
//     void operator ++(int)
//     {
//         Count++;
//     }
// };
int main()
{
    Counter c1,c2;
    cout<<c1.get_Count()<<endl;
    cout<<c2.get_Count()<<endl;
    ++c1;
    c1++;
    cout<<c1.get_Count()<<endl;
    cout<<c2.get_Count()<<endl;
    return 0;

}
