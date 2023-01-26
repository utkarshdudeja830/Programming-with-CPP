#include <iostream>

using namespace std;


/*struct employee   // It is used to store multiple data types.
{
    int eid;   
    char favchar;
    float salary;
};*/

typedef struct employee		// It is used to store multiple data types.
{
  int eid;
  char favchar;
  float salary;
} ep;

int main (){
    
  //struct employee Utkarsh;
  
  ep Utkarsh; //we can also write like this to make it easier
  
  Utkarsh.eid = 1;
  Utkarsh.favchar = 'P';
  Utkarsh.salary = 1000000000;

  cout << "The value is " << Utkarsh.eid << endl;
  cout << "The value is " << Utkarsh.favchar << endl;
  cout << "The value is " << Utkarsh.salary << endl;

  return 0;
}
