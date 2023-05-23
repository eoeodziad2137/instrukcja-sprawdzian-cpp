#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int x;

    do
    {
        cout << "SPRAWDZIAN ZADANIE2" << endl;
        cout<<"Będe powtarzał program czylu napis gdy podasz liczbe z przedzialyu (-1,3>"<<endl;
        cout<<"Podaj liczbe x: "<<endl;
        cin>> x;

    }while(x>-2 && x<=3);
}