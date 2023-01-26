#include <iostream>
using namespace std;

int addNum(int a,int b){  // if we put this function after the main program there will be a error saying that the func is not declared
    
    //int a,b; using this will shadow a parameter
    int c=a+b;
    return c;
}

int main()
{
    int a,b;
    
    cout<<"Enter the first number: ";
    cin >> a;
    
    cout<<"Enter the second number: ";
    cin >> b;
    
    cout<<"The Result is "<<addNum(a,b);

    return 0;
}
