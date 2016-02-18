/*
  Author: Erin Williams
  Course: 136
  Instructor: Ilya Korsunskiy
  Assignment: Lab 3

  This program draws various shapes using character graphics.
*/

#include <iostream>
using namespace std;

int main() 
{

  //Draws a hollow square based on width and height input
  int width, height;

  cout << "Enter a width and a height: ";
  cin >> width >> height;

  while (width>80 || height>80 || width<0 || height<0)
  {
    cout << "Please enter within valid range (80X80).\n";
    cin >> width >> height;
  } 

  for (int i=0; i<height; i++)
  {
    if (i == 0 || i == height-1)
    {
      for (int j=0; j<width; j++)
      {
         cout << "*";
      }
      cout << endl;
    }
    else
    {
      cout << "*";
      for (int k=0; k<width-2; k++)
      {
        cout << " ";
      }
      cout << "*" << endl;
    }
  }

return 0;
}
