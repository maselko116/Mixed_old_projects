#include <iostream>
#include <locale.h>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
using namespace std;
float a;
float b;
float c;
float d;
float H;
float r;
float h;
float l;
float suma;
int wybor = 0;
// pole walca, sto¿ka, kuli, ostros³upa i graniastos³upa.
// float c;
//pow - potêga
//sqrt - pierwiastek kwadratowy
//M_PI - liczba PI
int main()
{

 setlocale(LC_CTYPE, "Polish");
 setprecision(5);
 for(;;){
    cout << "WYBIERZ CO CHCESZ POLICZYĆ " << endl;
    cout << "1. pole powieszchni i objetosc walca" << endl;
    cout << "2. pole powieszchni i objetosc stożka" << endl;
    cout << "3. pole powieszchni i objetosc graniastosłupa" << endl;
    cout << "4. pole powieszchni i objetośc kuli" << endl;
    cout << "5. pole powieszchni i objetosc ostroslupa" << endl;
    cout << "6. pole powieszchni i obwód kwadratu" << endl;
    cout << "7. zakoncz program" << endl;
        cout << "(wybierz cyfre)" << endl;
        cin >> wybor;



        if (wybor == 1)
        {
        cout << "Liczysz pole powieszchni i objetosc walca: "<< endl;

        cout << "podaj r podstawy: " << endl;
        cin >> r ;

        cout << "podaj H: " << endl;
        cin >> H ;

        cout << "pole powieszchni walca: " << 2*M_PI*pow(r,2)+2*M_PI*r*H << endl;
        cout << "objetość walca: " << M_PI*pow(r,2)*H << endl;
        cout << endl;
        cout << endl;
        cout << "naciśnij ENTER żeby wrócił do początku" << endl;
        }


        else if (wybor == 2){
            cout << "Liczysz pole powieszchni i objetosc stozka: "<< endl;
            cout << "podaj r podstawy: " << endl;
            cin >> r ;
            cout << "podaj H: " << endl;
            cin >> H;
            cout << "podaj l: " << endl;
            cin >> l;

            cout << "objętość stożka to: " << (1.0/3.0)*M_PI*pow(r,2)*H << endl;
            cout << "pole powieszchni sto¿ka to: " << M_PI*pow(r,2)+M_PI*r*l << endl;

            cout << endl;
        cout << "naciśnij ENTER ¿eby wróciæ do pocz¹tku" << endl;
        }


        else if (wybor == 3){
            cout << "Liczysz pole powieszchni i objetosc graniastoslupa: " << endl;
            // wzór(objetosc): a*b*H
            // wzór(pole powieszchni): (2*a*b)+(2*a*H)+(2*b*H)
        cout << "podaj a: " << endl;
        cin >> a ;
        cout << "podaj b: " << endl;
        cin >> b ;
        cout << "podaj H: " << endl;
        cin >> H ;
        cout << "objêtoœæ to: " << a*b*H << endl;
        cout << "pole powieszchni to: " << (2*a*b)+(2*H*a)+(2*b*H);
        cout << endl;
        cout << endl;
        cout << "naciœnij ENTER ¿eby wróciæ do pocz¹tku" << endl;
        }


        else if (wybor == 4){
            cout << "Liczysz pole powieszchni i objetosc kuli: "<< endl;
          cout << "podaj r" <<endl;
          cin >> r;

          cout << "pole powieszchni kuli: " << endl;
          cout << 4*M_PI*pow(r,2) << endl;

          cout << "objêtoœæ kuli: " << endl;
          cout << (4/3.0)*M_PI*(r,3);
          cout << endl;
          cout << endl;
          cout << "naciœnij ENTER ¿eby wróciæ do pocz¹tku" << endl;
        }


        else if (wybor == 5)
        {
            cout << "Liczysz pole powieszchni i objetosc ostroslupa: "<< endl;

          cout << "podaj a" <<endl;
          cin >> a;

          cout << "podaj b" <<endl;
          cin >> b;

          cout << "podaj H" <<endl;
          cin >> H;

          cout << "podaj h boczne" <<endl;
          cin >> h;

          cout << "pole powieszchni ostrosłupa: " << endl;
          cout << (a*b)+(a*2*h)+(b*2*h) << endl;

          cout << "objętość ostrosłupa: " << endl;
          cout << (1.0/3.0)*(a*b)*H << endl;
          cout << endl;
          cout << endl;
          cout << "naciśnij ENTER żeby wrócić do początku" << endl;
        }

        cout << "Liczysz pole powieszchni kwadratu: "<< endl;

          cout << "podaj a" <<endl;
          cin >> a;

          cout << "podaj b" <<endl;
          cin >> b;



          cout << "pole powieszchni kwadratu: " << endl;
          cout << a+b << endl;

          cout << "obwód kwadratu: " << endl;
          cout << (2*a)+(2*b) << endl;
          cout << endl;
          cout << endl;
          cout << "naciśnij ENTER żeby wrócić do początku" << endl;








        else if (wybor == 7){
            exit(0);
        }


        else {
    cout << "nie ma takiej opcji !!!" << endl;

    cout << endl;
    cout << endl;
    cout << "naciśnij ENTER zeby wrócić do początku" << endl;
}
     getchar();getchar();
     system("cls");
 }
    return 0;
}
