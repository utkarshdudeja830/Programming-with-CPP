#include <iostream>
using namespace std;

typedef struct employee		// It is used to store multiple data types.
{
  int eid;// 4
  char favchar;// 1
  float salary;// 4
} ep;

union money		//It is used for better memory management by storing the maximum 
                //byte size and when using the data type it will use only 4 like in the
                // example below unlike in structure where it will allocate 9 bytes in the memory and for the next it will overwrite the p               previous datatype and then will also use 4 bytes of memory
{
  int rice; // 4
  char car; // 1
  float pounds;// 4
} ;                 // Here memory is shared



int main (){
    
  ep Utkarsh;
  union money m1;
  
  m1.rice = 5;
  m1.car = 'c';
  cout<<m1.rice<<endl; // after adding m1.car we will get garbage value because m1.rice is over written by m1.car due to union
  cout<<m1.car<<endl;

  return 0;
}
