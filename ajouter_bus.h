void ajouter_bus(){
	typedef struct ajbus ajbus;
          struct ajbus
          {
            char nom[20];
            int nrb,jdt,dst,dv,ns;
    };
    
      ajbus newr;
	       
      FILE  *fbus;    
          
          fbus=fopen("bus.txt","a+");
	system("cls");
	printf("\n\n\n");
	printf("                        Ajouter  BUS                                \n");
    printf("");
	printf("\n\n Entrer le numero de bus:                ");
	scanf("%d",&newr.nrb);
	printf("\n\n Entrer le nom de conducteur:              ");
	scanf("%s",newr.nom);
    printf(" \n\n Entrer les nomber de jour de travaille par semaine  :    ");
	scanf("%d",&newr.jdt);
    printf("\n\n distance ecoulee (km):          ");
	scanf("%d",&newr.dst);
    printf("\n\n Dure de voyage (h) :          ");
	scanf("%d",&newr.dv);
	printf("\n\n Nomber se sattion d arret:                      ");
	scanf("%d",&newr.ns);
	fprintf(fbus,"%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\n",newr.nrb,newr.nom,newr.jdt,newr.dst,newr.dv,newr.ns);
	fclose(fbus);
	getch();		}
          

