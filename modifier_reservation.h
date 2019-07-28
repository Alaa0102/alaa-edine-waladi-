void modifier_reservation() {
typedef struct modreservation modreservation;
          struct modreservation
	 {
    	char nom[20],depart[20],arriver[20],date[20];
		float prix;
		int id,hdepart,harriver,nsiege;

			};


		modreservation newr;
     FILE             *reservation,*fptr1;
     int code,k;
	system("cls");
	printf("\n\n\n");
	printf("                       Modifier reservation                       \n");
    printf("");
	printf("\n\ndonner le ID de reservation que vous voulez modifier : ");
	scanf("%d",&code);


   reservation=fopen("reservation.txt","r");
   fptr1=fopen("netch.txt","w");




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
								  else
                                    {
	printf("\n\n Entrer le Nouveau id:                ");
	scanf("%d",&newr.id);
	printf("\n\n Entrer le Nouveau nom:                ");
	scanf("%s",&newr.nom);
	printf("\n\n Entrer le nouveau DATE                ");
	scanf("%s",&newr.date);
	printf("\n\n Entrer le Nouveau depart:             ");
	scanf("%s",&newr.depart);
	printf("\n\n Nouveau arriver:        ");
	scanf("%s",&newr.arriver);
	printf("\n\n Nouvelle heuere de depart:             ");
	scanf("%d",&newr.hdepart);
	printf("\n\n Nouvelle huere d'arriver' :                      ");
	scanf("%d",&newr.harriver);
	printf("\n\n Nouveau numero de siege:             ");
	scanf("%d",&newr.nsiege);
	printf("\n\n Nouveau Prixt:             ");
	scanf("%f",&newr.prix);
	
	fprintf(fptr1,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%f\n",newr.id,newr.nom,newr.date,newr.depart,newr.arriver,newr.hdepart,newr.harriver,newr.nsiege,newr.prix);
for(k=0; k<3; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                          Modification effectuee avec succes          \n");

		Sleep(500);
		}

                                    }

        }


        fclose(fptr1);
        fclose(reservation);
        remove("reservation.txt");
        rename("netch.txt","reservation.txt");
		getch();}
