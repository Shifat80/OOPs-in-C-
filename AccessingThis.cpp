#include<iostream>
using namespace std;

class Test
{
private:
    int alpha;
public:
    Test()
    {
        this->alpha = 10;
    }
    Test(int alpha)
    {
        this->alpha = alpha;
    }
    void tester()
    {
        cout<<alpha<<endl;
    }
};
int main()
{
    Test t;
    t.tester();
    Test t2(20);
    t2.tester();
    return 0;
}
/*#include<iostream>
using namespace std;


class Test
{
private:
   int x;
public:
   void setX (int x)
   {
       this->x = x;
   }
   void print()
    { cout << "x = " << x << endl; }
};

int main()
{
   Test obj;
   int x = 20;
   obj.setX(x);
   obj.print();
   return 0;
}*/
