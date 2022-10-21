#include<iostream>
#include<cstdlib>
#include
using namespace std;
main() {
   int maxi;
   maxi = 100; 
   srand(time());
   cout << "The random number is: "<<rand()%maxi;
}
