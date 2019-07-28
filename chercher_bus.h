	void chercher_bus()
	{
	typedef struct chbus chbus;
          struct chbus
	 {
            char nom[20];
            int nrb,jdt,dst,dv,ns;
    };
    
		  chbus newr;
	FILE     *bus;
	int k;
	char nom1[20];
	int trouve=0;


	system("cls");
	printf("\n\n\n");
	printf("                       Chercher BUS disponble                       \n");
    printf("");
	printf("\ndonner le nom  de Conducteur que vous voulez chercher : ");
	scanf("%s",nom1);
	
	bus=fopen("bus.txt","r");

        while(fscanf(bus,"%d %s %d %d %d %d",&newr.nrb,newr.nom,&newr.jdt,&newr.dst,&newr.dv,&newr.ns)!=EOF)
        {
       if((strcmp(nom1,newr.nom)==0))

	   {
	printf("\n\n ELEMENT TROUVE AVEC SUCCES");
	trouve=1;
	
	printf("\n\n Nomber de bus:                										%d",newr.nrb);
	printf("\n\n le nom de conducteur:                      					    %s",newr.nom);
	printf("\n\n le les nomber de jour de travaille par semaine:                    %d",newr.jdt);
	printf("\n\n Distance ecoulee (km)::                         					%d",newr.dst);
	printf("\n\n Dure de voyage (h):                             					%d",newr.dv);
	printf("\n\n Nomber se sattion d arret:                      					%d\n\n",newr.ns);


		}
		}
	   if(!trouve){
		   for(k=0; k<5; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                                  Le nom de Conducteur entrer n\'existe pas           \n");

		Sleep(500);
		}

		}

        fclose(bus);
		getch();       }
