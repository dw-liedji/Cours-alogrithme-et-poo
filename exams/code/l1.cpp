#include <iostream>
using namespace std;
class calculer
{
    int x, y;

public:
    void val(int, int);
    int somme()
    {
        return (x + y);
    }
};
void calculer::val(int a, int b)
{
    x = a;
    y = b;
}
int main()
{
    calculer calculer;
    calculer.val(5, 10);
    cout << "La somme = " << calculer.somme();
    return 0;
}