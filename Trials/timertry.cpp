
//Please note that this is Windows specific code
#include <iostream>
#include <Windows.h>
#include <simplecpp>
using namespace std;

int main()
{
    int counter = 60; //amount of seconds
    while (counter >= 1)
    {
        cout << "\rTime remaining: " << counter << flush;
        Sleep(1000);
        counter--;
    }
}
