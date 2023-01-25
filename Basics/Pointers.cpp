#include<iostream>
using namespace std;

int main(){
    
    // What is a pointer? --> It is a data type which holds the address of other data types.
    
    int a = 3;
    int* b  = &a;
    int* b;
    b = &a;// It can also be written in this way
    
    // & ----> (address of) operator
    cout<<"The address is "<< &a<<endl;
    cout<<"The address is "<<b<< endl; // both will be the same
    
    // * ----> (Value at) Dereference operator
    cout<<"The value at address b is "<< *b;
    
    //Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 
    
    
    return 0;
    
}
