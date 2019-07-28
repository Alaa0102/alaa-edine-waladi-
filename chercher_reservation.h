		void chercher_reservation() {
		typedef struct chereservation chereservation;
          struct chereservation
	 	{
    	char nom[20],depart[20],arriver[20],date[20];
		float prix;
		int id,hdepart,harriver,nsiege;

			};
			
			  chereservation newr;
		FILE     *reservation;
		int k;
		char nom1[20];
		int trouve=0;
	
	
		system("cls");
		printf("\n\n\n");
		printf("                       Chercher reservation                       \n");
	    printf("");
		printf("\ndonner le nom de client que vous voulez chercher : ");
			scanf("%s",nom1);



         reservation=fopen("reservation.txt","r");

        while(fscanf(reservation,"%d %s %s %s %s %d %d %d %f",&newr.id,newr.nom,newr.date,newr.depart,newr.arriver,&newr.hdepart,&newr.harriver,&newr.nsiege,&newr.prix)!=EOF)
        {
       if((strcmp(nom1,newr.nom)==0))

	   {
	printf("\n\n ELEMENT TROUVE AVEC SUCCES");
	trouve=1;

    printf("\n\n    ID :                       %d",newr.id);
	printf("\n\n le nom:                       %s",newr.nom);
	printf("\n\n  DATE:                        %s",newr.date);
	printf("\n\n Depart:                       %s",newr.depart);
	printf("\n\n Arriver:                      %s",newr.arriver);
	printf("\n\n heure depart:                 %d",newr.hdepart);
	printf("\n\n heure arriver:                %d",newr.harriver);
	printf("\n\n Nummero siege:                %d",newr.nsiege);
	printf("\n\n PRIX  :                       %f\n\n",newr.prix);
		}
		}
	   if(!trouve){
		   for(k=0; k<5; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                                  Le nom de client entrer n\'existe pas           \n");

		Sleep(500);
		}

		}

        fclose(reservation);
		getch();       }
