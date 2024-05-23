# include <iostream>
# include <math.h>

using namespace std;
 //declaring a 2 dimensional array
char grid[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'x';
int n;

void Draw(){
    system ("cls");

    cout<<"hi, welcome to tick tac toe game.Enjoy!!! " <<endl;
 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
       cout << grid[i][j] << " ";
    }
    cout << endl;
 }
  
}

void Input (){
    int a;
cout <<player << " it is your turn."<<"Press the number of the field: ";
cin>> a;

if (a ==1){

 if(grid[0][0] == '1'){
grid[0][0]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }
}
else if(a==2)
{

if(grid[0][1] == '2'){
grid[0][1]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }

}
else if (a==3)
{

if(grid[0][2] == '3'){
grid[0][2]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }

}
else if (a ==4)
{

if(grid[1][0] == '4'){
grid[1][0]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }
}
else if(a==5)
{

if(grid[1][1] == '5'){
grid[1][1]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }

}
else if (a==6)
{

if(grid[1][2] == '6'){
grid[1][2]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }

} 
else if (a ==7)
{

if(grid[2][0] == '7'){
grid[2][0]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }
}
else if(a==8){

if(grid[2][1] == '8'){
grid[2][1]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }

}else if (a==9)
{

if(grid[2][2] == '9'){
grid[2][2]= player;
 }else
 {
    cout<<"field taken, select another field! "<<endl;
     Input();
 }

} 



}

void changePlayer(){
    if (player == 'x')
    player = 'o';
    else 
    player = 'x';
}

char Win (){
//checking raws for the first player

    if (grid[0][0] == 'x' && grid[0][1]=='x' && grid [0][2] == 'x')
    {
      return 'x';
    }
    if (grid[1][0] == 'x' && grid[1][1]=='x' && grid [1][2] == 'x')
    {
      return 'x';
    }
    if (grid[2][0  ] == 'x' && grid[2][1]=='x' && grid [2][2] == 'x')
    {
      return 'x';
    }
//checking colomns for the first player

     if (grid[0][0] == 'x' && grid[1][0]=='x' && grid [2][0] == 'x')
    {
      return 'x';
    }
    if (grid[01][0] == 'x' && grid[1][1]=='x' && grid [2][1] == 'x')
    {
      return 'x';
    }
    if (grid[0][2] == 'x' && grid[1][2]=='x' && grid [2][2] == 'x')
    {
      return 'x';

    }

// checking first diagonal for the first player 

 if (grid[0][0] == 'x' && grid[1][1]=='x' && grid [2][2] == 'x')
    {
      return 'x';
    }
// checking second diagonal for the first player
    if (grid[2][0] == 'x' && grid[1][1]=='x' && grid [0][2] == 'x')
    {
      return 'x';
    }

//checking raws for the second player    
     if (grid[0][0] == 'o' && grid[0][1]=='o' && grid [0][2] == 'o')
    {
      return 'o';
    }
    if (grid[1][0] == 'o' && grid[1][1]=='o' && grid [1][2] == 'o')
    {
      return 'o';
    }
    if (grid[2][0  ] == 'o' && grid[2][1]=='o' && grid [2][2] == 'o')
    {
      return 'o';
    }
//checking colomns for the second player

     if (grid[0][0] == 'o' && grid[1][0]=='o' && grid [2][0] == 'o')
    {
      return 'o';
    }
    if (grid[01][0] == 'o' && grid[1][1]=='o' && grid [2][1] == 'o')
    {
      return 'o';
    }
    if (grid[0][2] == 'o' && grid[1][2]=='o' && grid [2][2] == 'o')
    {
      return 'o';

    }

// checking first diagonal for the second player 

 if (grid[0][0] == 'o' && grid[1][1]=='o' && grid [2][2] == 'o')
    {
      return 'o';
    }
// checking second diagonal for the second player
    if (grid[2][0] == 'o' && grid[1][1]=='o' && grid [0][2] == 'o')
    {
      return 'o';
    }

    return '/';

}

int main(){
 n=0;
Draw();

while (1)
{
    n++;
    Input();
    Draw();
    if (Win()== 'x'){
        cout<< "the X has Won!"<<endl;
        break;
    }
    else if(Win()== 'o'){
         cout << "the O has Won!"<<endl;
         break;

    }
    else if (Win()== '/'  && n==9){
     cout << "it's a draw!" <<endl;
      break;
    }
    
    changePlayer();
    
}

system("pause");
 return 0;
}

