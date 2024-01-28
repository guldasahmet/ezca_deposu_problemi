#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

typedef struct{

    char isimler[100][50];
    int adetler[100];
    int fiyatlar[100];

}data;

int main()
{
    data dolap;
    int i,j;

    srand(time(0));
    for(i=0;i<N;i++)
    {
        for(j=0;j<20;j++)  // rastgele ilac isimleri, fiyatlar ve adetler uretme
        {
            dolap.isimler[i][j] = 'a' + (rand() % 26);
        }
        dolap.isimler[i][20] = '\0';
        dolap.adetler[i] = rand()%41;
        dolap.fiyatlar[i]  = rand()%201 + 50;
    }

    printf("DOLAP:\n");
    for(i=0;i<N;i++)
    {
        printf("ilac adi: %s \tadet: %d \tfiyat: %d\n",dolap.isimler[i],dolap.adetler[i],dolap.fiyatlar[i]);
    }

    // sayisi 20 ve 20'den az kalanlari bulmak icin
    printf("\n\n\nSayisi 20 ve 20'den az kalan ilaclar:\n\n");
    for(i=0;i<N;i++)
    {
        if(dolap.adetler[i] <= 20)
        printf("ilac adi: %s \tadet: %d \tfiyat: %d\n",dolap.isimler[i],dolap.adetler[i],dolap.fiyatlar[i]);
    }

    return 0;
}
