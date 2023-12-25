#include<iostream>
using namespace std;
  struct trianle{
        int base;
        int height;
    };
int main()
{
 struct trianle t;
 t.base=4;
 t.height=6;
 cout<<"base = "<<" "<<t.base<<endl;
 cout<<"height = "<<" "<<t.height<<endl;
// cout<<"Area of the triangle = %d"<<(0.5)*(t.base)*(t.height)<<endl;
printf("Area of triangle is %d",0.5*(t.height)*(t.base));
    return 0;
}