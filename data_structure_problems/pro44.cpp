#include <iostream>
using namespace std;

int main() {
   int num, i;
   bool binary[16];
   cout << "Enter a negative number: ";
   cin >> num;
   // Converting to binary
   for (i = 0; i < 16; i++) {
      binary[i] = num % 2;
      num /= 2;
   }
   // Taking 2's complement
   for (i = 0; i < 16; i++) {
      binary[i] = !binary[i];
   }
   for (i = 0; i < 15; i++) {
      if (binary[i]) {
         binary[i] = 0;
         binary[i+1] = !binary[i+1];
      }
   }
   // Printing the binary number
   cout << "Binary representation: ";
   for (i = 15; i >= 0; i--) {
      cout << binary[i];
   }
   return 0;
}

