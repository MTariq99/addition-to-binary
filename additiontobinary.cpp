#include <iostream>
using namespace std;


int main() {

int a , b , c , d , e , i , j , sum[20] ;

cout << "Enter Two Binary Numbers  " << endl;

cout << "a : ";
cin >> a;

cout << "b : ";
cin >> b;


i = 0 ;
j = 0;
while (a !=0 && b !=0 ) {

sum[i] = ((a + b + j) % 2);
j = ((a + b + j  )/2);

i++;

cout << sum[i];
}


}