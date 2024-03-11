#include <iostream>
using namespace std;

int main(){
 setlocale(LC_ALL, "Rus");

 int width, height; 
 cout << "Введите ширину: "; cin >> width;
 cout << "Введите высоту: "; cin >> height;
 for (int row = 1; row <= height; row++) {
     for (int col = 0; col <= width; col++) {
         if (col == 1 || col == width) {
             cout << "|";
         }
         else if (col >= 1 && col < width && row == 1 || col >= 1 && col < width && row == height) {
             cout << "-";
         }
         else {
             cout << " ";
         }
     }
     cout << "\n";
 }
}

