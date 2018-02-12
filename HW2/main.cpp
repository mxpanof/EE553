#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    double WindChill=0;
    ofstream WindTable;
    WindTable.open("WindTable.txt");
    for(double V = 5; V<=60;V+=5)
    {
        for(double T = 40 ; T>=-45;T-=5)
        {
           WindChill = 35.74 + 0.6215*T - 35.75*pow(V,0.16f)+0.4275*T*pow(V,0.16f);
           WindTable << WindChill << "   ";

        }
        WindTable << "\n";
    }
    WindTable.close();

}

