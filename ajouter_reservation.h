void ajouter_reservation(){

		    typedef struct ajreservation ajreservation ;
          struct ajreservation
	 {
    char nom[20],depart[20],arriver[20],date[20];
		float prix;
		int id,hdepart,harriver,nsiege;
			};

	ajreservation newr;
    FILE  *reserv;

	reserv=fopen("reservation.txt","a+");
	system("cls");
	printf("\n\n\n");
	printf("                        Ajout Reservation                               \n");
    printf("");
	printf("\n\n Entrer ID reservation:       ");
	scanf("%d",&newr.id);
	printf("\n\n Entrer le nom de passage:    ");
	scanf("%s",newr.nom);
	printf("\n\n      DATE :     ");
	scanf("%s",newr.date);
	printf("\n\n\n enter le depart et l'ariver: ");
	printf("\n\n          de :        ");
	scanf("%s",newr.depart);
	printf("\n\n           a :                ");
	scanf("%s",newr.arriver);
	printf("\n\n Lheure de depart et d'ariver :                      ");
	printf("\n\n heure de depart:             ");
	scanf("%d",&newr.hdepart);
	printf("\n\n heure d'arriver:             ");
	scanf("%d",&newr.harriver);
	printf("\n\n Numero de siege :            ");
	scanf("%d",&newr.nsiege);
	printf("\n\n        Prix :                 ");
	scanf("%f",&newr.prix);
	fprintf(reserv,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%f\n",newr.id,newr.nom,newr.date,newr.depart,newr.arriver,newr.hdepart,newr.harriver,newr.nsiege,newr.prix);
	fclose(reserv);
	getch();		}
