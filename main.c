#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>


#include "ajouter_conducteur.h"
void ajouter_conducteur();

#include "afficher_conducteur.h"
void afficher_conducteur();

#include "modifier_conducteur.h"
void modifier_conducteur();

#include "supprimer_conducteur.h"
void supprimer_conducteur();

#include "chercher_conducteur.h"
void chercher_conducteur();

#include "afficher_reservation.h"
void afficher_reservation();

#include "ajouter_reservation.h"
void ajouter_reservation();

#include "chercher_reservation.h"
void chercher_reservation();

#include "modifier_reservation.h"
void modifier_reservation();

#include "supprimer_reservation.h"
void supprimer_reservation();

#include "afficher_bus.h"
void afficher_bus();

#include "ajouter_bus.h"
void ajouter_bus();


#include "supprimer_bus.h"
void supprimer_bus();

#include "modifier_bus.h"
void modifier_bus();

#include "chercher_bus.h"
void chercher_bus();

void main()
	{

	int w1,w2,w3,w4,k;
    int password;
	char login[20];
	system("color cf");
	printf("\n\n\n\n\n\n\n");

		printf("\n                                             PROJET DE FIN D'ANNEE       ");
		printf("\n                                                   2019/2020             ");
		printf("\n\n\n\n\n");
		printf("                                ------------------------------------------------ \n");
		printf("                                |                                               | \n");
		printf("                                |             gestion de BUS                    |\n");
		printf("                                |                                               | \n");
		printf("                                ------------------------------------------------ \n");
		printf("\n\n");
		printf("                   Developpee par:  Alae edine waladi   \n\n\n");
		printf("                   Entrer votre Nom d'utilisateur et votre Mot de passe: \n\n\n");
		printf("                           Nom d'utilisateur : ");
		scanf("%s",login);
		printf("\n");
		printf("                           Mot de passe : ");
		scanf("%d",&password);
	if (password==2019 && (strcmp(login,"miage")==0)){

				do{
			system("cls");
			printf("\n\n");
			printf("\n                                             PROJET DE FIN D'ANNEE       ");
		    printf("\n                                                   2019/2020             ");
            printf("\n\n\n\n\n");
			printf("\n\n\n\t\t                               gestion de BUS \n\n");
			printf("                      --------------------------- MENU ---------------------------\n");
			printf("                      \n");
			printf("                      | 1 | Conducteur                                       \n");
        	printf("                                                                              \n");
        	printf("                      | 2 | Reservation                                  \n");
        	printf("                                                                              \n");
        	printf("                      | 3 | Bus disponible                                      \n");
        	printf("                                                                              \n");
		    printf("                      | 0 | Quitter                                      \n");
			printf("                      \n");
        	printf("                     \n\n");
		printf("                                                    * Entrer Votre Choix *   ->\t");
		scanf("%d",&w1);
	    switch(w1)
		{
        //**********************************************************************************************************

    	case 1:	do{
			system("cls");
			printf("\n\n");
			printf("\n                                             PROJET DE FIN D'ANNEE       ");
		    printf("\n                                                   2019/2020             ");
            printf("\n\n\n\n\n");
			printf("\n\n\n\t\t                                 gestion de BUS \n\n");
			printf("                      ------------------------ MENU Conducteur------------------------\n");
			printf("                    \n");
			printf("                     | 1 | Ajouter                                      \n");
        	printf("                                                                                \n");
        	printf("                     | 2 | Afficher                                     \n");
        	printf("                                                                                \n");
        	printf("                     | 3 | Supprimer                                    \n");
        	printf("                                                                                \n");
        	printf("                     | 4 | Modifier                                     \n");
        	printf("                                                                                \n");
        	printf("                     | 5 | Chercher                                     \n");
        	printf("                                                                                \n");
		    printf("                     | 0 | Menu principale                              \n");
			printf("                    \n");
        	printf("                     \n\n\n");
		    printf("                                                    * Entrer Votre Choix *   ->\t");
		    scanf("%d",&w2);
	        switch(w2)
		    {
		    case 1:ajouter_conducteur();break;
		    case 2:afficher_conducteur();break;
		    case 3:supprimer_conducteur();break;
		    case 4:modifier_conducteur();break;
		    case 5:chercher_conducteur();break;
	        }

		    }while(w2!=0);            ;break;

        //**************************************************************************************************************

    	case 2: do{
			system("cls");
			printf("\n\n");
			printf("\n                                             PROJET DE FIN D'ANNEE       ");
		    printf("\n                                                   2019/2020             ");
            printf("\n\n\n\n\n");
			printf("\n\n\n\t\t                                gestion de BUS \n\n");
			printf("                      -------------------- MENU Reservation ---------------------\n");
		    printf("                    \n");
			printf("                     | 1 | Ajouter                                      \n");
        	printf("                                                                                \n");
        	printf("                     | 2 | Afficher                                     \n");
        	printf("                                                                                \n");
        	printf("                     | 3 | Supprimer                                    \n");
        	printf("                                                                                \n");
        	printf("                     | 4 | Modifier                                     \n");
        	printf("                                                                         \n");
        	printf("                     | 5 | Chercher                                     \n");
        	printf("                                                                                \n");
		    printf("                     | 0 | Menu principale                              \n");
			printf("                    \n");
        	printf("                     \n\n\n");
		    printf("                                                    * Entrer Votre Choix *   ->\t");
		    scanf("%d",&w3);
	        switch(w3)
		    {
		    case 1:ajouter_reservation();break;
		    case 2:afficher_reservation();break;
		    case 3:supprimer_reservation();break;
		    case 4:modifier_reservation();break;
		    case 5:chercher_reservation();break;
	        }

		    }while(w3!=0);             ;break;

    	//******************************************************************************************************************

    	case 3: do{
			system("cls");
			printf("\n\n");
			printf("\n                                             PROJET DE FIN D'ANNEE       ");
		    printf("\n                                                   2019/2020             ");
            printf("\n\n\n\n\n");
			printf("\n\n\n\t\t                              gestion de BUS \n\n");
			printf("                      ---------------------- MENU BUS -----------------------\n");
			printf("                    \n");
			printf("                     | 1 | Ajouter                                      \n");
        	printf("                                                                                \n");
        	printf("                     | 2 | Afficher                                     \n");
        	printf("                                                                                \n");
        	printf("                     | 3 | Supprimer                                    \n");
        	printf("                                                                                \n");
        	printf("                     | 4 | Modifier                                     \n");
        	printf("                                                                                \n");
        	printf("                     | 5 | Chercher                                     \n");
        	printf("                                                                                \n");
		    printf("                     | 0 | Menu principale                              \n");
			printf("                    \n");
        	printf("                     \n\n\n");
		    printf("                                                    * Entrer Votre Choix *   ->\t");
		    scanf("%d",&w4);
	        switch(w4)
		   {
		   case 1:ajouter_bus();break;
		   case 2:afficher_bus();break;
		   case 3:supprimer_bus();break;
		   case 4:modifier_bus();break;
		   case 5:chercher_bus();break;
	       }

		   }while(w4!=0);             ;break;

      //********************************************************************************************************************
    	default:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n");

		printf("                                            appuye sur une touche                  \n");
	 break;
		scanf("%d",&w1);}

		}while(w1!=0);

		//*******************************************************************************************************************
	}

	else {
	for(k=0; k<5; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                           le mot de passe ou le nom d'utilisateur est incorrect    \n");

		Sleep(500);
		}
		}
		getch();
	}


