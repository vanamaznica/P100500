#include <iostream>
#include <fstream>
#include "Reservoir.h"
using namespace std;

int main()
{
    int n = 2;
    Reservoir* a = new Reservoir[n];
    a[0] = Reservoir("Sea", "sea", 100, 200, 30);
    a[1] = Reservoir("Lake", "lake", 50, 100, 10);

    for (int i = 0; i < n; i++)
        a[i].show();

    cout << "Volume: " << a[0].volume() << endl;
    cout << "Area: " << a[0].area() << endl;

    if (a[0].sameType(a[1]))
        cout << "Same type" << endl;
    else
        cout << "Different type" << endl;

    Reservoir copy(a[0]);
    copy.show();
    ofstream text("reservoirs.txt");

    for (int i = 0; i < n; i++)
        text << a[i].getName() << " "
        << a[i].getType() << endl;

    text.close();
    ofstream bin("reservoirs.dat", ios::binary);
    bin.write((char*)&n, sizeof(n));

    for (int i = 0; i < n; i++)
        bin.write((char*)&a[i], sizeof(Reservoir));

    bin.close();
    delete[] a;
}