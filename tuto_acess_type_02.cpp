#include <iostream>

using namespace std;

 enum Units{Celcius , Fahrenheit , Kelvin};

class Temperature {
private :

    float temp;
    Units unit;
public:


     void Assign(float val , Units m){
       if(m == 0){
             unit = Celcius;

       }
       else if(m== 1){
             unit = Fahrenheit;

       }
       else {
          unit = Kelvin;
       }


       if( (m== 0 && val < -273) || (m == 1 && val < -460) || ( m == 2 && val < 0)){
            cout << "Invalid Temperature"<< endl;
       }
       else {
        temp = val;
       }
    }

};


int main(){

    Temperature T;

    T.Assign(10.1, Celcius);
    T.

        return 0;
}
