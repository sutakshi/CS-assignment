#include<iostream>
using namespace std;

int main()
{
    //first method
    pair <int,int> a[5]={{2,3},{2,7},{6,3},{7,9},{3,8}};
    
    for(int i=0;i<5;i++)
    {
        cout<<"First value : "<<a[i].first<<" , Second value : "<<a[i].second<<endl;
    }
    
    
    //second method
    pair <int,int> a[5];
    
    for(int i=0;i<5;i++)
    {
        cout<<"Enter first value : ";
        cin>>a[i].first;
        
        cout<<"Enter second value : ";
        cin>>a[i].second;
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<"First value : "<<a[i].first<<" , Second value : "<<a[i].second<<endl;
    }
    return 0;
}
