#include<iostream>
using namespace std;

inline int max(int x,int y, int z)
{
    return (x>y)&&(x>z)?x:(y>z)?y:z;
}

int main()
{
    cout<<"max(20,10,30):"<<max(20,10,30)<<endl;
    cout<<"max(0,200,300):"<<max(0,200,300)<<endl;
    cout<<"max(100,1010,2000):"<<max(100,1010,2000)<<endl;
    return 0;
}
