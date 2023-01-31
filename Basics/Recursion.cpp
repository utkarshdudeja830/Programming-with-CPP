#include <iostream>

using namespace std;

int fibo(int n){
    if(n<2){
        return n;
    }
    return fibo(n-2)+fibo(n-1);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    
    cout<<"Enter the number to find the factorial: "<<endl;
    cin>>n;
    
    cout<<"The factorial of the number is "<<factorial(n)<<"."<<endl;
    
    cout<<"The term in the fibonacci series at position is "<<fibo(n)<<"."<<endl;
    
    return 0;
}
