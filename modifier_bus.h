void modifier_bus(){
	typedef struct mbus mbus;
          struct mbus
          {
            char nom[20];
            int nrb,jdt,dst,dv,ns;
    };
    
      mbus newr;
	       
      FILE  *bus,*fptr1;    
	
	int code,k;
	system("cls");
	printf("\n\n\n");
	printf("                       Modifier BUS disponible                       \n");
    printf("");
	printf("\n\ndonner le nomber de bus que vous voulez modifier : ");
	scanf("%d",&code);
	
	bus=fopen("bus.txt","r");
    fptr1=fopen("models.txt","w");



     while(fscanf(bus,"%d %s %d %d %d %d",&newr.nrb,newr.nom,&newr.jdt,&newr.dst,&newr.dv,&newr.ns)!=EOF)
                              {
                                  if(code!=newr.nrb)
                                       {
					 fprintf(fptr1,"%d\t\t",newr.nrb);
                     fprintf(fptr1,"%s\t\t",newr.nom);
					 fprintf(fptr1,"%d\t\t",newr.jdt);
					 fprintf(fptr1,"%d\t\t",newr.dst);
					 fprintf(fptr1,"%d\t\t",newr.dv);
					 fprintf(fptr1,"%d\n",newr.ns);
                                       }
									else
                                    {
	printf("\n\n Entrer le Nouveau nomber de bus:          ");
	scanf("%d",&newr.nrb);
	printf("\n\n Entrer le nouveau nom de conducteur:      ");
	scanf("%s",newr.nom);
	printf("\n\n Entrerle nouveau nomber de jour de tarvaill par semaine:   ");
	scanf("%d",&newr.jdt);
	printf("\n\n Enter Nouveau distance (km) :             ");
	scanf("%d",&newr.dst);
	printf("\n\n Nouvelle Dure de voyage (h) :             ");
	scanf("%d",&newr.dv);
	printf("\n\n Entrer Nouveau Nomber de sattion d arret:  ");
	scanf("%d",&newr.ns);
	fprintf(fptr1,"%d\t\t%s\t\t%d\t\t%d\t\t%ld\t\t%d\n",newr.nrb,newr.nom,newr.jdt,newr.dst,newr.dv,newr.ns);
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
        fclose(bus);
        remove("bus.txt");
        rename("models.txt","bus.txt");
		getch();}
