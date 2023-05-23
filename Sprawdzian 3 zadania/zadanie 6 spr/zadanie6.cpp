#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    int n;

    cout <<"Podaj liczbe "<<endl;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        while (n/i == 0)
        {
            cout <<"Czynniki pierwsze liczby "<<n<<" ";
            cout<<i<<" ";
            n/=1;
        }
        
    }
    
}