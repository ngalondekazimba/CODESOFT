#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// this is a random number generator,generating number between one to ten 
int main(){
 //declaring variable
   int random_number;
   int rn = rand()% 10 + 1;
 
  cout << "Guess and Enter the following random number "<<endl;
  cin >> random_number;
 
   
         if (  random_number < rn){
            cout << "The number is too low" <<endl;
         }else if(random_number==rn){
            cout <<"you got  it !!!! " <<endl;
         }else{
            cout<<"the number is too high ";
         }
   cout << "The answer is : " << rn << endl;
   ;


  system ("pause");
return 0;
}

