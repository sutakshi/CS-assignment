#include<iostream>
using namespace std;

template <class T1>

void fun(T1 val)
{
    cout<<"Result : "<<val<<endl;
}

int main()
{
    
    fun('C');   //for character
    fun("C++"); //for string
    fun(56);    //for integer
    fun(89.9);  //for float
    
}
