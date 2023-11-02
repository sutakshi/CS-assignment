#include<iostream>
using namespace std;

template <class T1>
class temp{
    
    public:
        T1 value;
        
        temp(T1 val)
        {
            value=val;
            cout<<"Result : "<<val<<endl;
        }
};

int main()
{
    temp <char> t('C');    // for character
    temp <string> u("C++"); // for string
    temp <int> v(58);   //for integer
    temp <float> w(98.9);  //for float
    
}
