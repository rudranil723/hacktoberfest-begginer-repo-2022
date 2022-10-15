#include <iostream>
using namespace std;

int main()

{

 int dec, bin[16], i = 0, j = 0; 

 cout << "Enter a decimal number\n";

 cin >> dec;

 while (dec > 0)

 {
  bin[i] = dec % 2;

  dec = dec / 2;

  ++i;
 }

 cout << "Binary Equivalent:";

 for (j = i - 1; j >= 0; --j)

  cout << bin[j];

 return 0;

}
