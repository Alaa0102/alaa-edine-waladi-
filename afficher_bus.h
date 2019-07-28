void afficher_bus(){
typedef struct affbus affbus;
          struct affbus
	 {
    char nom[20];
            int nrb,jdt,dst,dv,ns;
	};
		  int c;
		  affbus newr;
	FILE   *bus;

	system("cls");
	bus=fopen("bus.txt","r");

	printf("\n\n\n");
	printf("                      Affichage des bus disponible                       \n");
    printf("");

	while(c!=EOF){    
	c=fscanf(bus,"%d %s %d %d %d %d",&newr.nrb,newr.nom,&newr.jdt,&newr.dst,&newr.dv,&newr.ns);
	printf("\n\n le numero de bus: :           	%d",newr.nrb);
	printf("\n\n le nom de conducteur:         	%s",newr.nom);
	printf("\n\n les nomber de jour de travaille par semaine:  %d",newr.jdt);
	printf("\n\n Distance ecoulee (km):        	%d",newr.dst);
	printf("\n\n Dure de voyage (h):            %d",newr.dv);
	printf("\n\n Nomber se sattion d arret:     %d\n\n",newr.ns);
	printf("       --------------------------------------------");
	c=fscanf(bus,"%d %s %d %d %d %d",&newr.nrb,newr.nom,&newr.jdt,&newr.dst,&newr.dv,&newr.ns);
	}fclose(bus);
		getch();}
