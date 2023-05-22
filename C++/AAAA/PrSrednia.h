#ifndef PrSrednia_H_INCLUDED
#define PrSrednia_H_INCLUDED


float wylicz_srednia(int tablica[],int ilosc)
{
    int suma=0,i;
    float srednia;

    for(i=0;i<ilosc;i++)
    {
        suma+=tablica[i];
    }

    srednia = suma/ilosc;
    return srednia;
}


#endif