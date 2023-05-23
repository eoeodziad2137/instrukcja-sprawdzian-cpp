#include <iostream>
#define skocz goto

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("Clear");

    int n;
    char t;

poczatek:

    cout << "Podaj liczbe naturalna: " << endl;
    cin >> n;

    if (n > 0 && n % 1 == 0)
    {
        cout << "Taka cyfra isnieje i jest nia cyfra " << n << endl;
    }
    else
    {
        cout << "Taka cyfra nie istnieje i jest nia " << n << endl;
    }

    cout << "Jesli chcesz powtorzyc wcisji t/t" << endl;
    cin >> t;

    t = tolower(t);

    switch (t)
    {
    case 't':
        goto poczatek;
        break;

    default:
        exit(0);
        break;
    }
}