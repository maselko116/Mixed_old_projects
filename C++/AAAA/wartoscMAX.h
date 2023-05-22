#ifndef wartoscMAX_H_INCLUDED
#define wartoscMAX_H_INCLUDED


int wylicz_max(int tablica[],int ilosc)
{
    int max,i;
    max = tablica[0];
    for(i=1;i<ilosc;i++)
    {
        if (max<tablica[i])
            max = tablica[i];
    }
    return max;
}

#endif