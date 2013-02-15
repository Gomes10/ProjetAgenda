#include<stdio.h>
#include<stdlib.h>
#include<myconio.h>

int choixMenu;
char choixIni;
char fichier[10000];
FILE *pf1;
FILE *pf2;

void choixBase()
{
   do
    {

        printf("Bienvenue dans l'application Agenda\n\n");
        printf("Cette application a %ct%c cr%c%ce dans le but de g%crer vos contacts de facon la plus complete possible\n\n",130,130,130,130,130);
        printf("Veuillez entrer votre choix : \n");
        printf("1- Cr%cation d'un r%cpertoire\n2- Ouverture d'un r%cpertoire existant\n3- Quitter\n",130,130,130);
        choixIni=getch();
        if(choixIni!=49 && choixIni!=50 && choixIni!=51)
        {
            system("cls");
            printf("Choix erron%c",130);
            Sleep(600);
            system("cls");
        }
    }while(choixIni!=49 && choixIni!=50 && choixIni!=51 );

}

void creationAgenda()
{
    char txt[5]=".txt";
    do
    {
        printf("Creation d'un agenda... \n"); Sleep(1000); printf("\n Entrez le nom de votre agenda :");
        gets(fichier);
        strcat(fichier,txt);
        pf1 = fopen(fichier,"w");
        printf("\n Vous avez creer l'agenda %s",fichier);

            if(!pf1)printf("Creation de fichier impossible");
    }while(!pf1);
}

void ouvertureAgenda()
{
    char txt[5]=".txt";
    printf("Ouverture de l'agenda... \n"); Sleep(1000); printf("\n Entrez le nom de votre agenda :");
    gets(fichier);
    strcat(fichier,txt);
    pf1 = fopen(fichier,"r");


}

void affichageMenu()
{

}

void creaContact()
{

}

void rechercheContact()
{

}

void suppContact()
{

}

void afficheContact()
{

}

void nbContact()
{

}

void cryptage()
{

}

void deCryptage()
{

}

main()
{
    do
    {
        choixBase();
        if(choixIni==51)break;
        system("cls");
        if(choixIni==49) creationAgenda();
        else if(choixIni==50) ouvertureAgenda(); if(!pf1) printf("ouverture imposs");
    }while(choixIni!=51);
    //TEST//




}
