#include <iostream>


using namespace std;


class Counter
{

private :


    int Count;
   int  incstep;
public:

    void Setincstep(int val)
    {

        incstep = val;

    }

    int getCount ()
    {
        return Count;
    }

    void increment()
    {
        Count += incstep;

    }

    void reserCount ()
    {
        Count = 4;
    }
};



int main()
{

Counter C1;

C1.reserCount();
C1.Setincstep(4);
C1.increment();
C1.Setincstep(2);
C1.increment();

cout<< C1.getCount()<<endl;
    return 0;
}
