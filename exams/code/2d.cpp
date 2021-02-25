//ficher source
#include <iostream>
#include <math.h>
class point
{
    double x;
    double y;

public:
    point();
    point(double, double);
    point(point &);
    ~point();
    double get_x();
    double get_y();
    void set_x(double x1);
    void set_y(double y1);
    point deplace(double dx, double dy);
    void affiche();
    void saisir();
    double distance(point &);
    point milieu(point &);
};

point::point()
{
}
point::point(double a, double b)
{
    x = a;
    y = b;
}
point::point(point &p)
{
    set_x(p.get_x());
    set_y(p.get_y());
}
point::~point()
{
}
double point::get_x()
{
    return x;
}

double point::get_y()
{
    return y;
}

void point::set_x(double a)
{
    x = a;
}
void point::set_y(double a)
{
    y = a;
}

point point::deplace(double dx, double dy)
{

    set_x(get_x() + dx);

    set_y(get_y() + dy);
    return *this;
}

double point::distance(point &p)
{
    double p1, x1, x2;
    x1 = (get_x() - p.get_x()) * (get_x() - p.get_x());
    x2 = (get_y() - p.get_y()) * (get_y() - p.get_y());
    //p1=sqrt(((get_x()-p.x)*((get_x()-p.x))+((get_y()-p.y)*(get_y()-p.y)));
    p1 = sqrt(x1 + x2);
    return p1;
}

void point::affiche()
{
    cout << "les coordonnees sont:" << endl;
    cout << "x=" << get_x() << endl;
    cout << "y=" << get_y() << endl;
}

void point::saisir()
{
    cout << "donnee les coordonnees:" << endl;
    cout << "x=" << endl;
    cin >> x;
    cout << "y=" << endl;
    cin >> y;
}

point point::milieu(point &p)
{
    point p1;
    p1.x = (get_x() + p.get_x()) / 2;
    p1.y = (get_y() + p.get_y()) / 2;
    return p1;
}

//programme d'essai(main)

#include <iostream>
#include "point.h"
void main()
{
    point p(1, 1);
    point x(5, 5);
    point c;

    p.affiche();
    p.deplace(5, 5);
    p.affiche();
    cout << "la distance est : " << p.distance(x);
    c = p.milieu(x);
    c.affiche();
}
