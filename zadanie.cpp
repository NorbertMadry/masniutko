#include <iostream>
#include <fstream>

using namespace std;

int main(){

int tab[1000];
int x=0;

    ifstream wejscie;
    ofstream wyjscie("out.json");

    wyjscie.open("wyjscie.txt");
    wejscie.open("we.json");

    if(wejscie.good())
        while(!wejscie.eof())
        {
           wejscie>>tab[x];
           wyjscie<<tab[x];
            x++;
        }

    wejscie.close();
    wyjscie.close();

    return 0;
}

