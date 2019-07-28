void chercher_conducteur()
{
	typedef struct chconducteur chconducteur;
          struct chconducteur
	 {
    char nom[20],prenom[20],adresse[30];
		long tel;
	int num,id;
};
		  chconducteur chcondu;
	FILE* conducteur;
	int k;
	char nom1[20];
	int trouve=0;


	system("cls");
	printf("\n\n\n");
	printf("                       Chercher conducteur                       \n");
    printf("");
printf("\ndonner le nom de conducteur que vous voulez chercher : ");
	scanf("%s",nom1);



         conducteur=fopen("conducteur.txt","r");

        while(fscanf(conducteur,"%d %s %s %s %d %d",&chcondu.id,chcondu.nom,chcondu.prenom,chcondu.adresse,&chcondu.tel,&chcondu.num)!=EOF)
        {
       if((strcmp(nom1,chcondu.nom)==0))

	   {
printf("\n\n ELEMENT TROUVE AVEC SUCCES");
trouve=1;

    printf("\n\n le num:                       %d",chcondu.id);
	printf("\n\n le nom:                       %s",chcondu.nom);
	printf("\n\n le prenom:                    %s",chcondu.prenom);
	printf("\n\n Adresse:                      %s",chcondu.adresse);
	printf("\n\n Numero Telephone:             %d",chcondu.tel);
	printf("\n\n Numero de BUS:                %d\n\n",chcondu.num);


		}
		}
	   if(!trouve){
		   for(k=0; k<5; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                                  Le nom de conducteur entrer n\'existe pas           \n");

		Sleep(500);
		}

		}

        fclose(conducteur);
		getch();       }
