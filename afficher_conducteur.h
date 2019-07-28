void afficher_conducteur(){
typedef struct affconducteur affconducteur;
          struct affconducteur
	 {
    char nom[20],prenom[20],adresse[30];
		long tel;
	int num,id;
	};
		  int a;
		  affconducteur newr;
	FILE *conducteur;

	system("cls");
	conducteur=fopen("conducteur.txt","r");

	printf("\n\n\n");
	printf("                      Affichage les Conducteur                       \n");
    printf("");

	while(a!=EOF){    
	a=fscanf(conducteur,"%d %s %s %s %ld %d",&newr.id,newr.nom,newr.prenom,newr.adresse,&newr.tel,&newr.num);
	printf("\n\n ID:                           %d",newr.id);
	printf("\n\n le nom:                       %s",newr.nom);
	printf("\n\n le prenom:                    %s",newr.prenom);
	printf("\n\n Adresse:                      %s",newr.adresse);
	printf("\n\n Numero Telephone:             %ld",newr.tel);
	printf("\n\n Numero de BUS:                %d\n\n",newr.num);
	printf("   ****************************************************  ");
	a=fscanf(conducteur,"%d %s %s %s %ld %d",&newr.id,newr.nom,newr.prenom,newr.adresse,&newr.tel,&newr.num);
	}
	fclose(conducteur);
		getch();}
