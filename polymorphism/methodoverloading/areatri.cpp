#include<iostream>
using namespace std;

 class shape
{
 double ans;
 public:
void area(double r)
 {
 ans=3.14*r*r;
 cout<<"area of the circle is:"<<ans<<endl;
 }

void area(double b,double h)
 {
 ans=(0.5)*b*h;
 cout<<"area of the triangle is:"<<ans<<endl;
 }

void area(int s)
 {
 ans=s*s;
 cout<<"area of the square is:"<<ans<<endl;
 }
};

int main()
{
 shape s;
s.area(2);
s.area(2.5);
s.area(2.5,4.5);
}
 
