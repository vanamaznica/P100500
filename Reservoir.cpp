#include "Reservoir.h"
#include <iostream>

Reservoir::Reservoir()
{
    name = "";
    type = "";
    width = 0;
    length = 0;
    depth = 0;
}

Reservoir::Reservoir(string n, string t, double w, double l, double d)
{
    name = n;
    type = t;
    width = w;
    length = l;
    depth = d;
}

Reservoir::Reservoir(const Reservoir& r)
{
    name = r.name;
    type = r.type;
    width = r.width;
    length = r.length;
    depth = r.depth;
}

double Reservoir::volume() const
{
    return width * length * depth;
}

double Reservoir::area() const
{
    return width * length;
}

bool Reservoir::sameType(const Reservoir& r) const
{
    return type == r.type;
}

bool Reservoir::biggerArea(const Reservoir& r) const
{
    return area() > r.area();
}

void Reservoir::setName(string n)
{
    name = n;
}

void Reservoir::setType(string t)
{
    type = t;
}

string Reservoir::getName() const
{
    return name;
}

string Reservoir::getType() const
{
    return type;
}

void Reservoir::show() const
{
    cout << name << " "
        << type << " "
        << width << " "
        << length << " "
        << depth << endl;
}