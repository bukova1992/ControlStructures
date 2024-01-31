#include <iostream>
using namespace std;
void main()

{
    int k,i,j;
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 10; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i <= 10; i++) 
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 10; j > i + 1; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < 10; i++) //װמנלא ְ
    {
        for (int j = 10; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;

        for (int k = -1; k < i; k++)
        {
            cout << " ";
        }
    }