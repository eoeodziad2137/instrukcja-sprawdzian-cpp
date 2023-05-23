#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int a, b;
    char ch;

    do
    {

        cout << "Podaj pierwszy kąt: ";
        cin >> a;

        cout << "Podaj drugi kąt: ";
        cin >> b;

        int gamma = 180 - (a + b);

        if (gamma == 60)
        {
            cout << "To jest trojkat rownoboczny" << endl;
        }
        else if ((gamma == a) || (gamma == b) || (a == b))
        {
            cout << "To jest trojkat rownoramienny" << endl;
        }
        else if ((gamma == 90) || (a == 90) || (b == 90))
        {
            cout << "To jest trojkat prostokatny" << endl;
        }
        else if ((gamma != a) && (gamma != b) && (a != b))
        {
            cout << "To jest trojkat roznoboczny" << endl;
        }

        cout << "jesli chcesz powtorzyc program wcisnij J lub j" << endl;
        cin >> ch;

        ch = tolower(ch);

    } while (ch == 'j');
}