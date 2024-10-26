#include<iostream>

class Flower
{
    double price;
public:
    double getPrice(){
        return price;
    }

    Flower (double px ) : price(px){}
    double  operator+(const Flower& flower)const{
    return this->price + flower.price;
}

};
int main(){

Flower f1(1.3),f2(2.1),f3(0);
f3 = f1+f2;
std::cout <<f3.getPrice();




    return 0;
}


