	void afficher_reservation() {
		typedef struct affreservation affreservation;
          struct affreservation
	 	{
		char nom[20],depart[20],arriver[20],date[20];
		float prix;
		int id,hdepart,harriver,nsiege;

			};
					int c;
			  affreservation newr;
		FILE    *reservation;

	system("cls");
	reservation=fopen("reservation.txt","r");

	printf("\n\n\n");
	printf("                      Affichage les reservation                      \n");
    printf("");

	while(c!=EOF){    
	c=fscanf(reservation,"%d %s %s %s %s %d %d %d %f",&newr.id,newr.nom,newr.date,newr.depart,newr.arriver,&newr.hdepart,&newr.harriver,&newr.nsiege,&newr.prix);
	 printf("\n\n    ID :                      %d",newr.id);
	printf("\n\n le nom:                       %s",newr.nom);
	printf("\n\n DTAE  :                       %s",newr.date);
	printf("\n\n Depart:                       %s",newr.depart);
	printf("\n\n Arriver:                      %s",newr.arriver);
	printf("\n\n heure depart:                 %d",newr.hdepart);
	printf("\n\n heure arriver:                %d",newr.harriver);
	printf("\n\n Nummero siege:                %d",newr.nsiege);
	printf("\n\n PRIX  :                       %f\n\n",newr.prix);
	printf("       --------------------------------------------");
	c=fscanf(reservation,"%d %s %s %s %s %d %d %d %f",&newr.id,newr.nom,newr.date,newr.depart,newr.arriver,&newr.hdepart,&newr.harriver,&newr.nsiege,&newr.prix);
	}fclose(reservation);
		getch();}
