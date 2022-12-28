//ID 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int i = 1;
  int sum = 0;
  while (i<1000){
    // below 1000; 1000 not included
    if (i%3 == 0){
      sum += i;
    } 
    else if (i%5 == 0){
      sum += i;
    }
    // no. divisible by BOTH will be captured at i/3; only counted once
    i++;
  }
  cout << "Sum of all the multiples of 3 or 5 below 1000: " << sum;
  return 0;
}
