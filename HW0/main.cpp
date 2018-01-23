#include <iostream>

using namespace std;

int main()
{
   char d = 'a'; // 1 byte
   short e = 1; // >= 2 bytes
   int a = 1; // 4 bytes signed or unsigned
   long b = 123412321312; // >= 8bytes signed or unsigned
   long long c = 1231231231231232;// >=16 bytes signed or unsigned
   unsigned int w = 2+2;
   //unsigned int test = 2-5;
   int x = 2-5;
   int y =3*4;
   int z = 2/3;
   cout << w << y << z << endl;

}

