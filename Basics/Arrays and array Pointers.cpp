#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 54, 67};
    
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2] = 87; // You can change the value like this
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
/*
    // using for loop
    for(int i = 0; i<4; i++){
        cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
    }
    int i = 0;
    
    cout<<"Using While loop"<<endl;
    
    while(i > 4){
        cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
    }
    
    do{
        cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
    } while(i>4);
*/

   //name ----> the address of the array
   //&marks ----> wrong
   //p++ will increment the position index of the array 0-1-2-3(a-b-c-d)
   //*(p++) = 45 again incrementing will give 54
   //pointer arithmetic formula
   //address(new) = address(current)+ i * sizeof(datatype)
   //p+i = p
   //23+1*4
   
   //Pointers and arrays
   int*p = marks;
   cout<<*(p++)<<endl;
   cout<<*(p)<<endl;//it will only specify the value that is to be printed
   cout<<"The value of marks[0] "<<*(p)<<endl; //stores starting array
   cout<<"The value of marks[1] "<<*(p+1)<<endl;
   cout<<"The value of marks[2] "<<*(p+2)<<endl;
   cout<<"The value of marks[3] "<<*(p+3)<<endl;//values has been changes because of the statement at 43 line

    return 0;
}
