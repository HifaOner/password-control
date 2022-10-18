#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>


int main()
{
char sifre[20];
  char sifreDogrulama[20];
  int i;
  int yanlis;

  while(1){
    yanlis = 0;
    i = 0;
    printf("Parolanizi giriniz...\n");
    scanf("%s",&sifre);
    printf("Parolanizi tekrar giriniz...\n");
    scanf("%s",&sifreDogrulama);

    while(  !(sifre[i]=='\0' && sifreDogrulama [i] =='\0') ) {
          if (sifre [i]!= sifreDogrulama[i]) {

            printf("Hatalı giriş yaptınız..\n");
            yanlis = 1;
            break; }
            else {i++;
            }

            }
            if (yanlis==0) {printf("Şifreleriniz eşleşti,kaydınız tamamlandı.\n");
            break;

            }
  }


  return 0;
}