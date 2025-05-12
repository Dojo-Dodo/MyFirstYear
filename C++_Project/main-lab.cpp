#include <iostream>
using namespace std;

#include "Thanos.h"

int main(int argc, char* argv[]) {
Thanos T;
  int n;
  cout<<"How many monster?";
  cin>>n;

  monster *m=new monster[n]; //2. make sure they have hp
 
  /* Add some story Attack each other or 

  add hp to some of them randomly
*/

  ++T;
  ++T;
  T.snap_finger(m,n); //finish the snap finger function
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);

  int i;
  for(i=0;i<n;i++)
      m[i].print();
  
  delete [] m;
  
  

}//call des for A
  
  
