#include <iostream>
#include "class.h"
using namespace std;
void menu(){
    cout<<"1.Obliczanie 2 wektorow"<<endl;
    cout<<"2.Zatrzymaj Program"<<endl;
}
void display( Vector& w1, Vector& w2){
    w1.displayCoordinates();
    w2.displayCoordinates();
    cout<<"Dlugosc wektora 1: ";
    cout<<w1.length()<<endl;
    cout<<"Dlugosc wektora 2: ";
    cout<<w2.length()<<endl;
    const Vector x1 = w1.sum(w2);
    const Vector x2 = w1.sub(w2);
    x1.displayCal();
    x2.displayCal();
    cout<<"Iloczyn skalarny: ";
    cout<<w1.scalar(w2)<<endl;
}
int main() {
    int choice;
    double p1x,p1y,p2x,p2y,k1x,k1y,k2x,k2y;
    char name1[40]= "";
    char name2[40]= "";
    while(1){
        menu();
        cout<<"Wybierz"<<endl;
        cin>> choice;
        if (choice == 1){
            double x1,y1,x2,y2;

            cout<<endl;
            cout<< "Nazwa pierwszego wektora"<<endl;
            cin>> name1;


            cout<<"Podaj puntk poczatkowy"<<endl<< "wspolrzedna x =";
            cin>> p1x;
            cout<< endl<<"wspolrzedna y =  ";
            cin>> p1y;


            cout<<endl;
            cout<<"Podaj puntk koncowy"<<endl<< "wspolrzedna x =";
            cin>> k1x;
            cout<< endl<<"wspolrzedna y =  ";
            cin>> k1y;


            cout<<endl;
            cout<< "Nazwa drugiego wektora"<<endl;
            cin>> name2;

            cout<<"Podaj puntk poczatkowy"<<endl<< "wspolrzedna x = ";
            cin>> p2x;
            cout<< endl<<"wspolrzedna y = ";
            cin>> p2y;
            cout<<endl;

            cout<<"Podaj puntk koncowy"<<endl<< "wspolrzedna x =";
            cin>> k2x;
            cout<< endl<<"wspolrzedna y =  ";
            cin>> k2y;
            cout<<endl;


            x1 = k1x-p1x;
            y1 = k1y-p1y;
            x2 = k2x-p2x;
            y2 = k2y-p2y;
            Vector vec1(name1,x1,y1);
            Vector vec2(name2,x2,y2);
            display(vec1,vec2);
        }
        if (choice == 2) {
            break;
        }
    }
}

