// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,d,r;
    
    cout<<endl<<"enter numinator : ";
    cin>>n;
    
    cout<<endl<<"enter denuminator : ";
    cin>>d;
    
    try
    {
        if(d==0)
        {
            throw d;
        }
        
        r=n/d;
        cout<<"result : "<<r<<endl;
    }
    
    catch(int exception)
    {
        cout<<"Exception : Division by zero"<<endl;
    }
    
    
    
}
