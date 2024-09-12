#include <iostream>
using namespace std;
int main()
{
    int siz;
    cin>> siz;
    int table[siz];
    for(int i = 0; i<siz ; i++)
    {
        cin>> table[i];
    }
    int maxe=0;
    for(int i=0; i<siz; i++)
    {
        if(table[i]>maxe)
        {
            maxe = table[i];
        }
    }
    cout<<maxe;
    return 0;
}
