#include <iostream>
using namespace std;


int main (){
  
    // What are Enums? ----> enum or enumeration is a data type consisting of named values like elements, members, etc., that represent integral constants. It also makes the code easy to maintain and less complex.
    
    enum meal{breakfast, lunch, dinner};
    
    meal m1 = breakfast;
    cout<<m1; //We can also write this
    //cout<<(m1==1);// it will show the statement is true and therfore will show 1
    
    /*
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    */
    
    return 0;
}
