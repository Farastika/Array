#include <iostream>

using namespace std;
int main(int argc, char** argv) {

int A[5],c=0;
 for (int i=0;i<10;i++)
 {
  if(i%2==1)
  {
A[c]=i;
   c++;
  }
 }
cout<<"Ganjil"<<endl;
 for(int i=0;i<5;i++)

cout<<A[i]<<" ";
cout<<endl;


 system ("PAUSE");
 return 0;
}
