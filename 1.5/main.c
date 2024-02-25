#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0;
    int liczba = 0;
    while(1) // petla bedzie dzialac dopoki uzytkownik nie wpisze poprawnej liczby
    {
        printf("Podaj liczbe naturalna: ")
        scanf("%d", &liczba); // wpisywanie liczby naturalnej
        if(liczba >= 0)
        {
            break;
        }
    }

    for(int x = 0; x < liczba; x++)
    {
        if(x % 3 == 0)
        {
            suma = suma + x;
            continue;
        }
        else if(x % 5 == 0)
        {
            suma = suma + x;
        }
    }
    printf("\n\nLiczba wynosi: %d", suma);
    return 0;
}

