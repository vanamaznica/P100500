#pragma once
#include <string>
using namespace std;

class Reservoir
{
private:
    string name;
    string type;
    double width;
    double length;
    double depth;

public:
    Reservoir();
    explicit Reservoir(string n, string t, double w, double l, double d);
    Reservoir(const Reservoir& r);

    double volume() const;
    double area() const;

    bool sameType(const Reservoir& r) const;
    bool biggerArea(const Reservoir& r) const;

    void setName(string n);
    void setType(string t);

    string getName() const;
    string getType() const;
    void show() const;
};