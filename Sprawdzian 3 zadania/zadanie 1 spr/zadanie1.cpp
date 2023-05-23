#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int x;
    char a,b;

    cout<<"Prosze podać pierwszą litere kodu: "<<endl;
    
    cin>> x;

    cout<<"Prosze podać drugą litere kodu: "<<endl;
    
    cin>> a;

    cout<<"Prosze podać trzecią litere kodu: "<<endl;
    
    cin>> b;

    cout<<"Podany kod to: "<<x<<a<<b<<endl;

    a = tolower(a);
    b = tolower(b);

    if (x == 20 && a =='s' && b == 'b')
    {
        cout<<"Brawo znasz moje parametry!"<<endl;
    }
    else
    {
        cout<<"Nie znasz szyfru zegnaj"<<endl;
    }

}