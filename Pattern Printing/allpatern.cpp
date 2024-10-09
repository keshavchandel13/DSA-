#include<iostream>
using namespace std;

int main(){
    int side, i, j;
    cout << endl;
    cout << "Enter side of the square:";
    cout << endl;
    cin >> side;
    cout << endl;

    for (i = 1; i <= side; i++)
    {
        for (j = 1; j <= side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;




return 0;
}