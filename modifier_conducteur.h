void modifier_conducteur() {
typedef struct modfconducteur modfconducteur;
          struct modfconducteur
	 {
    char nom[20],prenom[20],adresse[20];
		long tel;
		int num,id;
			};


		modfconducteur modfc;
     FILE             *conducteur,*fptr1;
     int code,k;
	system("cls");
	printf("\n\n\n");
	printf("                       Modifier conducteur                       \n");
    printf("");
	printf("\n\ndonner le ID de client que vous voulez modifier : ");
	scanf("%d",&code);


   conducteur=fopen("conducteur.txt","r");
   fptr1=fopen("blabla.txt","w");




     while(fscanf(conducteur,"%d %s %s %s %ld %d",&modfc.id,modfc.nom,modfc.prenom,modfc.adresse,&modfc.tel,&modfc.num)!=EOF)
                              {
                                  if(code!=modfc.id)
                                       {
					 fprintf(fptr1,"%d\t\t",modfc.id);
                     fprintf(fptr1,"%s\t\t",modfc.nom);
					 fprintf(fptr1,"%s\t\t",modfc.prenom);
					 fprintf(fptr1,"%s\t\t",modfc.adresse);
					 fprintf(fptr1,"%ld\t\t",modfc.tel);
					 fprintf(fptr1,"%d\n",modfc.num);
                                       }
								  else
                                    {
	printf("\n\n Entrer le Nouveau ID:                ");
	scanf("%d",&modfc.id);
	printf("\n\n Entrer le Nouveau nom:                ");
	scanf("%s",modfc.nom);
	printf("\n\n Entrer le Nouveau prenom:             ");
	scanf("%s",modfc.prenom);
	printf("\n\n Nouvelle Adresse:                      ");
	scanf("%s",modfc.adresse);
	printf("\n\n Nouveau Numero Telephone:             ");
	scanf("%ld",&modfc.tel);
	printf("\n\n Nouveau Numero de BUS:                ");
	scanf("%d",&modfc.num);
	
	fprintf(fptr1,"%d\t\t%s\t\t%s\t\t%s\t\t%ld\t\t%d\n",modfc.id,modfc.nom,modfc.prenom,modfc.adresse,modfc.tel,modfc.num);
	for(k=0;k<3;k++)
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
        fclose(conducteur);
        remove("conducteur.txt");
        rename("blabla.txt","conducteur.txt");
		getch();}
