#ifndef wartoscMIN_H_INCLUDED
#define wartoscMIN_H_INCLUDED



int wylicz_min(int tablica[],int ilosc)
{
    int min,i;
    min = tablica[0];
    for(i=1;i<ilosc;i++)
    {
        if (min>tablica[i])
            min = tablica[i];
    }
    return min;
}

#endif