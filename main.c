#include <stdio.h>
#include <stdlib.h>

    void teksayilar(int n)
    {
        int i=0;
        while(i<=n)
        {
            if(i%2 == 1)
            {
                printf("%d\n",i);
            }
            i++;
        }
    }

int main()
{
    /*Klavyeden girilen pozitif bir N tamsayisina kadar olan tek sayilari ekrana listele
    yen C programini fonksiyon kullanarak yaziniz.*/
    int sayi;
    printf("Lutfen pozitif bir tam sayi giriniz.\n");
    scanf("%d",&sayi);
    teksayilar(sayi);
}
