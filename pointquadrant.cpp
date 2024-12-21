#include <iostream>

using namespace std;

typedef struct
{
    int x; // absis
    int y; // ordinat
} point;

int main()
{
    point p;

    // membaca input koordinat point
    cout << "Masukkan koordinat point x: ";
    cin >> p.x;
    cout << "Masukkan koordinat point y: ";
    cin >> p.y;

    // menentukan letak point
    if (p.x == 0 && p.y == 0)
    {
        cout << " Kuadran tidak bisa dihitung : Titik berada di origin (0,0) " << endl;
    }
    else if (p.x == 0)
    {
        cout << " Titik berada di garis y = 0 " << endl;
    }
    else if (p.y == 0)
    {
        cout << " Titik berada di garis x = 0 " << endl;
    }

    else
    {
        if (p.x > 0 && p.y > 0)
        {
            cout << " Titik berada di kuadran I " << endl;
        }
        else if (p.x < 0 && p.y > 0)
        {
            cout << " Titik berada di kuadran II " << endl;
        }
        else if (p.x < 0 && p.y < 0)
        {
            cout << " Titik berada di kuadran III " << endl;
        }
        else if (p.x > 0 && p.y < 0)
        {
            cout << " Titik berada di kuadran IV " << endl;
        }
    }
    return 0;
}
