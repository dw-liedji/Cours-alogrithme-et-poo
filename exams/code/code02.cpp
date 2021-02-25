#include "math.h"
#include "iostream"
#include <string>
using namespace std;

class Complexe
{
private:
    double re;
    double im;

public:
    Complexe()
    {
        re = 0.0;
        im = 0.0;
    }

public:
    Complexe(double pre, double pim)
    {
        re = pre;
        im = pim;
    }

public:
    // User defined Copy constructor
    Complexe(const Complexe &c)
    {
        re = c.re;
        im = c.im;
    }

public:
    Complexe plus(Complexe c)
    {

        return Complexe(re + c.re, im + c.im);
    }

public:
    Complexe fois(Complexe c)
    {
        double re_temp = re * c.re - im * c.im;
        double im_temp = re * c.im + im * c.re;

        return Complexe(re_temp, im_temp);
    }

public:
    Complexe divise(Complexe c)
    {

        double num_re = re * c.re + im * c.im;

        double num_im = im * c.re - re * c.im;

        double den = pow(c.re, 2) + pow(c.im, 2);

        return Complexe(num_re / den, num_im / den);
    }

public:
    double module()
    {
        return sqrt(pow(re, 2) + pow(im, 2));
    }

public:
    Complexe plus(double pre, double pim)
    {

        return Complexe(re + pre, im + pim);
    }

public:
    Complexe fois(double pre, double pim)
    {
        double re_temp = re * pre - im * pim;
        double im_temp = re * pim + im * pre;

        return Complexe(re_temp, im_temp);
    }

public:
    void const afficher()
    {
        cout << re << "+" << im << "i" << endl;
    }

public:
    bool egal(Complexe c)
    {
        return (re == c.re & im == c.im);
    }

public:
    string const toString()
    {
        return to_string(re) + "+" + to_string(im) + "i";
    }

public:
    void static swap(Complexe &c1, Complexe &c2)
    {
        Complexe temp = c1;
        c1 = c2;
        c2 = temp;
    }

public:
    void conjugue()
    {
        im = -im;
    }

public:
    void inverse()
    {
        double deno = pow(re, 2) + pow(im, 2);
        re = re / deno;
        im = -im / deno;
    }
};

int main(int argc, char const *argv[])
{
    Complexe c(1, 3);

    Complexe *c1 = new Complexe(1, 1);
    Complexe *c2 = new Complexe(2, 2);

    c1->afficher();
    c2->afficher();
    Complexe::swap(*c1, *c2);
    c1->afficher();
    c2->afficher();

    return 0;
}
