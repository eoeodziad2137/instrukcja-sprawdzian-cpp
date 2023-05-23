#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double h, r, p;
    int x;
    double pi = 3.14159;

    cout << "Umiem obliczac objetorsc oraz pole calkowite walca po podaniu wysokosci podstawy walca " << endl;
    cout << "Umiem sprawdzic wczytane dane" << endl;
    cout << "Musiszy wybrac opcje" << endl;

    cout << "****************************************************************" << endl;

    cout << "1-objetosc walca" << endl;
    cout << "2-powierzchania calkowita walca" << endl;

    cout << "****************************************************************" << endl;
    do
    {
        cout << "Podja opcje " << endl;
        cin >> x;
        if ((x != 1) && (x != 2))
        {
            cout << "Nie ma takiej opcji!" << endl;
        }

    } while ((x != 1) && (x != 2));

    cout << "Podaj wysokosc walca: " << endl;
    cin >> h;
    cout << "Podaj promien podstawy walca: " << endl;
    cin >> r;

    cout << "Wczytane dane " << endl;
    cout << "h=" << h << endl;
    cout << "r=" << r << endl;
    cout << "Wyniki" << endl;

    if (x == 1)
    {
        p = ((pi*pow(r, 2)) * h);

        cout << "Objętośc walca: " << p <<" cm^3"<< endl;
    }
    if (x == 2)
    {
        p =(2*pi * pow(r, 2) + 2 * pi * r *h);

        cout<<"Powierzchnia całkowita walca wynosi: "<<p<<" cm^2"<<endl;
    }
    
}