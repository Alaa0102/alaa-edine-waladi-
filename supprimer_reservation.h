	void supprimer_reservation()
	{
	typedef struct supreservation supreservation;
          struct supreservation
	 {
		char nom[20],depart[20],arriver[20],date[20];
		float prix;
		int id,hdepart,harriver,nsiege;
	};
	 supreservation newr;
     FILE             *reservation,*fptr1;
     int code,k;
	system("cls");
	printf("\n\n\n");
	printf("                      supprimer reservation                       \n");
    printf("");
	printf("\n\ndonner le code de reservation que vous voulez supprimer : ");
	scanf("%d",&code);


   reservation=fopen("reservation.txt","r");
   fptr1=fopen("spacex.txt","w");




     while(fscanf(reservation,"%d %s %s %s %s %d %d %d %f",&newr.id,newr.nom,newr.date,newr.depart,newr.arriver,&newr.hdepart,&newr.harriver,&newr.nsiege,&newr.prix)!=EOF)
                              {
                                  if(code!=newr.id)
                                       {
					 fprintf(fptr1,"%d\t\t",newr.id);
                     fprintf(fptr1,"%s\t\t",newr.nom);
                     fprintf(fptr1,"%s\t\t",newr.date);
					 fprintf(fptr1,"%s\t\t",newr.depart);
					 fprintf(fptr1,"%s\t\t",newr.arriver);
					 fprintf(fptr1,"%d\t\t",newr.hdepart);
					 fprintf(fptr1,"%d\n",newr.harriver);
					 fprintf(fptr1,"%d\n",newr.nsiege);
					 fprintf(fptr1,"%f\n",newr.prix);
					                   }
                              }
        fclose(fptr1);
        fclose(reservation);
        remove("reservation.txt");
        rename("spacex.txt","reservation.txt");
		for(k=0; k<3; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                      Le client qui a le ID que vous avez entre a ete supprimer     \n");

		Sleep(500);
		}



getch();}
