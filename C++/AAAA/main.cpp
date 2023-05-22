#include <iostream>
#include <locale.h>
#include "potegi.h"
#include <windows.h>
#include <cmath>
#include "polaFigur.h"
#include "PrSrednia.h"
#include "wartoscMAX.h"
#include "wartoscMIN.h"
#include "kelwiny.h"
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
using namespace std;
float a;
float b;
float c;
float d;
float h;
float r;

float suma;
int plaskie = 0;
int bryly = 0;
int wybor = 0;
int chose = 0;
// pole walca, sto¿ka, kuli, ostros³upa i graniastos³upa.
// float c;
//pow - potêga
//sqrt - pierwiastek kwadratowy
//M_PI - liczba PI
int main()
{

 setlocale(LC_CTYPE, "Polish");
 setprecision(5);
 for(;;)
    {
    cout << "WYBIERZ CO CHCESZ POLICZYC" << endl;
    cout << "1. pola powieszchni i objetosc figor przestrzennych" << endl;
    cout << "2. pole figor plaskich" << endl;
    cout << "3. wartosc maksymalna" << endl;
    cout << "4. wartosc minimalna" << endl;
    cout << "5. przeliczanie temperatury" << endl;
    cout << "6. obliczanie sredniej" << endl;
    cout << "7. (zakoncz program)" << endl;
        cout << "(wybierz cyfre)" << endl;

         cin >> wybor;
         switch(wybor)
{

                        case 1:
        {
                                                            cout << "WYBIERZ CO CHCESZ POLICZYC:" << endl;
                                                            cout << "1. Objetosc walca:" << endl;
                                                            cout << "2. Objetosc stozka:" << endl;
                                                            cout << "3 Objetosc kuli:" << endl;
                                                            cin >> bryly;
                                                            switch(bryly)
                                                            {

                                                        case 1:
                                                            {
                                                            cout << "Liczysz objetosc walca: " << endl;
                                                            cout << "podaj r podstawy: " << endl;
                                                            cin >> r ;

                                                            cout << "podaj h: " << endl;
                                                            cin >> h ;

                                                            cout << "objetosc walca: " << walec(r, h);

                                                            break;
                                                            }
                                                        case 2:
                                                            {

                                                            cout << "Liczysz objetosc stozka: "<< endl;
                                                            cout << "podaj r podstawy: " << endl;
                                                            cin >> r;
                                                            cout << "podaj h: " << endl;
                                                            cin >> h;
                                                            cout << "objetosc stozka: "<<stozek(r, h);
                                                            break;

                                                            }
                                                        case 3:
                                                            {

                                                            cout << "Liczysz objetosc kuli: "<< endl;
                                                            cout << "podaj promien: " << endl;
                                                            cin >> r;

                                                            cout << "objetosc kuli: "<<kula(r);
                                                            break;

                                                            }
                                                             default:
                                                           cout << "brak takiej opcji" << endl;
                                                            }

        break;
        }


        case 2:
            {
                                                            cout << "WYBIERZ CO CHCESZ POLICZYC:" << endl;
                                                            cout << "1. Pole kwadratu:" << endl;
                                                            cout << "2. Pole trojkata:" << endl;
                                                            cout << "3 Pole kola:" << endl;

                                                            cin >> plaskie;
                                                            switch(plaskie)
                                                            {

                                                        case 1:
                                                            {
                                                            cout << "Liczysz pole kwadratu: " << endl;
                                                            cout << "podaj a : " << endl;
                                                            cin >> a ;

                                                            cout << "podaj b: " << endl;
                                                            cin >> b ;

                                                            cout << "pole kwadratu: " << kwadrat(a, b);

                                                            break;
                                                            }
                                                        case 2:
                                                            {
                                                            cout << "Liczysz pole trojkata: "<< endl;
                                                            cout << "podaj a podstawy: " << endl;
                                                            cin >> a;
                                                            cout << "podaj h: " << endl;
                                                            cin >> h;

                                                            cout << "pole trojkata: "<< trojkat(a, h);
                                                            break;
                                                            }
                                                        case 3:
                                                            {
                                                            cout << "Liczysz pole kola: "<< endl;
                                                            cout << "podaj r: " << endl;
                                                            cin >> r;

                                                            cout << "pole kola: " <<  kolo(r);
                                                            break;
                                                            }
                                                        default:
                                                            cout << "brak takiej opcji" << endl;
                                                            }
        break;
        }


        case 3:


        {



                int tab01[100],jaka_ilosc,i;
                cout << "Podaj ilosc liczb do porownania: ";
                cin >> jaka_ilosc;

                for(i=0; i<jaka_ilosc;i++)
                        {
                            cout << i+1 << ": ";
                            cin >> tab01[i];
                        }
                cout << "maksimum to: " << wylicz_max(tab01,jaka_ilosc) << endl;




        break;
        }


        case 4:
    {

                int tab01[100],jaka_ilosc,i;
                cout << "Podaj ilosc liczb do porownania: ";
                cin >> jaka_ilosc;

                for(i=0; i<jaka_ilosc;i++)
                        {
                            cout << i+1 << ": ";
                            cin >> tab01[i];
                        }
                cout << "Minimum to: " << wylicz_min(tab01,jaka_ilosc) << endl;



          break;
        }


        case 5:
{

            cout << "powiedz co chcesz policzyc" << endl << "(1 - celcjusze na kelwiny)" << endl << "(2 - kelwiny na celcjusze) " << endl;
            cin >> chose;
            switch(chose)
            {



    case 1:
     {

    cout << "przeliczanie stopni celciusza na kelwiny" << endl << "podaj ilosc stopni celciusza ktora chcesz przeliczyc: " << endl;
    cin >> a;
    cout << "Jest to: " << kelwiny(a);
    break;
     }
    case 2:
     {

     cout << "przeliczanie stopni kelwina na celciusze" << endl << "podaj ilosc stopni kelwina ktora chcesz przeliczyc:" << endl;
     cin >> a;
     cout << "Jest to: " << celcjusze(a);
     break;
     }


          default:
              cout << "nie ma takiego wyboru";
            }
              break;

}
        case 6:
        {
                int tab01[100],jaka_ilosc,i;
                cout << "Podaj ilosc liczb do porownania: ";
                cin >> jaka_ilosc;

                for(i=0; i<jaka_ilosc;i++)
                        {
                            cout << i+1 << ": ";
                            cin >> tab01[i];
                        }
                cout << "Srednia tych liczb wynosi : " << wylicz_srednia(tab01,jaka_ilosc) << endl;



        break;
        }



       case 7:
            {
            exit(0);
            break;
        }

       default:
    cout << "nie ma takiej opcji !!!" << endl;
}
    cout << endl;
    cout << endl;
    cout << "nacisnij ENTER zeby wrocic do poczatku" << endl;
    getchar();getchar();
     system("cls");
}
    }


