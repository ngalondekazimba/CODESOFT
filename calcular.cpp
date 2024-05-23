# include <iostream>


using namespace std;

int main(){
// declaration section

double num_1;
double num_2;
char opt;

// prompting the user
cout << "Enter the first number: " << endl;
cin>> num_1;


cout << "Enter the second number: " << endl;
cin>> num_2;
 
 
cout<< "choose the operation (+,/,-,*)" << endl;
 cin >> opt;

 if (opt== '+')
 {
    cout << "the sum is: " << num_1 + num_2 <<endl;

 }else if (opt== '-')
 {
    cout << "the the answer is: " << num_1 - num_2 <<endl; 
 }else if (opt== '*')
 {
     cout << "the product is: " << num_1 * num_2 <<endl;
 }else if (opt== '/')
 {
     cout << "the answer is: " << num_1 + num_2 <<endl;
 }else {
     cout << "invalid input ! "<<endl;
 }
 
 
 
 


    return 0;
}