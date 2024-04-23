#include <iostream>
using namespace std;

int main ()
{
int A, B, C;

cout << "Escribe un numero " << "\n";
  cin>>A;
  
  cout << "Escribe otro numero" << "\n";
  cin>>B;
  
 // cout << "Escribe oteo numero " << "\n"; (este no alda, no esta guardando el dato)
  
  cout << "Escribe otro numero " << "\n"; //este si
  cin>>C;
  
  if (A>B){

         if (B>C){
                  if (B>C) {
                  	       cout <<A<<"   "<<B<<"   "<<C<<  "\n";
                  }else
                  	       {cout << A<<"  "<<C<<"  "<<C<< "\n";}
                  	       
         }else {   cout << C<<"  "<<A<<"  "<<B<< "\n";}
       }
  else{
        if (B>C)
               if (A>C)
                       {cout << B<<"  "<<A<<"  "<<C<< "\n";}
               else    {cout <<B<<"  "<<C<<"  "<<A  <<"\n";}
               
        else
          {cout<< C<<"  " <<B<<"  "<<A<< "\n";}
      }                 
                  	       
       return 0;            
}

