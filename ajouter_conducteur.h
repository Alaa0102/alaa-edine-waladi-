void ajouter_conducteur(){

		    typedef struct  ajconducteur ajconducteur;
          struct ajconducteur
	 {
    char nom[20],prenom[20],adresse[20];
		long tel;
		int num,id;
			};

	ajconducteur nouvcon;
    FILE *conducteur;

	conducteur=fopen("conducteur.txt","a+");
	system("cls");
	printf("\n\n\n");
	printf("                        Ajout Conducteur                               \n");
    printf("");
	printf("\n\n Entrer ID:                    ");
	scanf("%d",&nouvcon.id);
	printf("\n\n Entrer le nom:                ");
	scanf("%s",nouvcon.nom);
	printf("\n\n Entrer le prenom:             ");
	scanf("%s",nouvcon.prenom);
	printf("\n\n Adresse:                      ");
	scanf("%s",nouvcon.adresse);
	printf("\n\n Numero Telephone:             ");
	scanf("%ld",&nouvcon.tel);
	printf("\n\n Numero BUS:                  ");
	scanf("%d",&nouvcon.num);

	fprintf(conducteur,"%d\t\t%s\t\t%s\t\t%s\t\t%ld\t\t%d\n",nouvcon.id,nouvcon.nom,nouvcon.prenom,nouvcon.adresse,nouvcon.tel,nouvcon.num);
	fclose(conducteur);
	getch();		}
