#include <stdio.h>
#include <windows.h>

int secim,i,j,satir,sutun;
char A[3][5];
char B[5][5];
char C[4][5]; 
char tur,otopark;

 
void Baslangic(char A[3][5], char B[5][5], char C[4][5])
 {
  for(i=0; i<3; i++) 
   { 
    for(j=0; j<5; j++){A[i][j] = '0';}
   } 
 
  for(i=0; i<5; i++) 
   { 
    for(j=0; j<5; j++){B[i][j] = '0';}
   } 
 
  for(i=0; i<4; i++) 
   { 
    for(j=0; j<5; j++){C[i][j] = '0';}
   } 
 }
 

void Listeleme(char A[3][5], char B[5][5], char C[4][5])
 {
  printf("\n A-Otoparki: \n");
  for(i=0; i<3; i++)
   {
    for(j=0; j<5; j++)
     {
      printf("%c ",A[i][j]);
     }
    printf("\n");
   }
  printf("\n B-Otoparki: \n");
  for(i=0; i<5; i++)
   {
    for(j=0; j<5; j++)
     {
      printf("%c ",B[i][j]);
     }
    printf("\n");
   }
  printf("\n C-Otoparký: \n");
  for(i=0; i<4; i++)
   {
    for(j=0; j<5; j++)
     {
      printf("%c ",C[i][j]);
     } 
    printf("\n");
   }
 }
 
void Giris(char A[3][5], char B[5][5], char C[4][5])
 {
  printf("(Arac ->'A', Kamyon ->'K')\nLutfen arac turunu girin: ");scanf(" %c",&tur);
  printf("Lutfen otopark girin: ");scanf(" %c",&otopark);
  printf("Lutfen aracinizi park edeceginiz konumu girin: ");scanf("%d %d",&satir, &sutun);
  {
   if (otopark == 'A')
    {
     A[satir][sutun] = tur;
    }
   else if (otopark == 'B')
    {
     B[satir][sutun] = tur;
    }
   else if (otopark == 'C')
    {
     C[satir][sutun] = tur;
    }
   else printf("Gecersiz islem...\n");
   return; 
  }
 }
 







void Cikis(char A[3][5], char B[5][5], char C[4][5])
 {
  printf("Lutfen otopark girin: ");scanf(" %c",&otopark);
  printf("Lutfen cikis yaptiginiz konumu girin: ");scanf("%d %d",&satir,&sutun);
  {
   if (otopark == 'A')
    {
     A[satir][sutun] = '0';
    }
   else if (otopark == 'B')
    {
     B[satir][sutun] = '0';
    }
   else if (otopark == 'C')
    {
     C[satir][sutun] = '0';
    }
   else printf("Gecersiz islem...\n");
   return;    
  } 
 }
  









int main()
 
{
 Baslangic(A, B, C);
 printf("Otopark menusune hos geldiniz...\n");

 while (1) 
 {
     printf("Lutfen yapmak istediginiz uygulamayi secin --> \n 1-Arac Girisi\n 2-Arac Cikisi\n 3-Listeleme\n 4-Cikis\n Seciminiz: ");
     scanf("%d", &secim);

      if (secim == 1) {Giris(A, B, C);}
   else if (secim == 2) {Cikis(A, B, C);}
   else if (secim == 3) {Listeleme(A, B, C);}
   else if (secim == 4) {printf("Cikis yapiliyor...\n");break;}
   else {printf("Gecersiz islem...\n");}
 }
 return 0;
}
