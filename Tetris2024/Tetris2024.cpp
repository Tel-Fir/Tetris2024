
#include <iostream>
#include <time.h>
using namespace std; 

void Completion(int array[22][12])
{
    for (int i = 0; i < 22; i++)
    {
        for (int g = 0; g < 12; g++)
        {
            array[i][g] = 0;
        }
    }
}

void Print(int array[22][12])
{
    cout << "======================";
    for (int i = 0; i < 22; i++)
    {

        cout << endl;
        for (int g = 0; g < 12; g++)
        {
            if (g == 0 || g == 11)
            {
                cout << "|";
            }
            else
            {
                cout << array[i][g] << " ";
            }
        }
    }
    cout << endl << "======================";
}

void Figure

int main()
{
    int cell[22][12];

    Completion(cell);

    Print(cell);

    cout << endl << " " << "Tetis!\n";
}

