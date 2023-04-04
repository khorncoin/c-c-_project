#include <iostream>

using namespace std;

bool gameOver ;
int i,k,j,n,x,y;
int fruitX,fruitY,score;
const int width =20;
const int hight =20;
enum eDirection { STOP = 0, LEFT , RIGHT, UP , DOWN, }
eDirection dir;

int main()
{
  Setup();
  while (!gameOver)
  {

    Draw();
    Input();
    Logic();

  }
  
 
  return 0;
}

void Setup(){

   gameOver = false;
   dir = STOP;
   x = width / 2;
   y = hight / 2;

   fruitX = rand() % width;
   fruitY rand() % hight;

}

void Draw(){

  system("cls"); //clear system

  for (i =0 ; i < width ; i++){
    cout << "#";
    cout << endl;
  }

  for (i =0 ; i < hight ; i++){
    for( j=0 ; i < width ; j++ ){
      if(j==0){
         cout << "#" ;
      }
      else{
        cout << " ";
      }
      if ( j == width-1 ){
        cout << "#" ;
      }
    }
  }

  for (i =0 ; i < width ; i++){
    cout << "#";
    cout << endl;
  }

}

void Input(){

}

void Logic(){

}





