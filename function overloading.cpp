#include<iostream>
using namespace std;

class addition{

    public:
    // Function to add two integers
        void add(int a, int b) {

            cout<<"Sum of int values : "<<a+b<<endl;
        }

        // Function to add two doubles
        void add(double a, double b) {
            cout<<"Sum of double values : "<<a+b<<endl;
        }
};

int main() {

    addition dd;
    
    // Calls int add(int a, int b)
    dd.add(5, 3); 

    // Calls double add(double a, double b)      
    dd.add(2.5, 3.7); 

    return 0;
}
