#include <iostream>
using namespace std;

class Shape {
   protected:
      int width, height;

   public:
      Shape( int a, int b){
         width = a;
         height = b;
      }
    virtual int area() {
         cout << "Parent class area :";
         return width+height;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a, int b):Shape(a, b) { }

      int area () {
         cout << "Rectangle class area :";
         return (width * height);
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a, int b):Shape(a, b) { }

      int area () {
         cout << "Triangle class area :";
         return (width * height / 2);
      }
};


int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);


   shape = &rec;


   cout<<shape->area()<<endl;

   shape = &tri;


   cout<<shape->area()<<endl;

   return 0;
}
