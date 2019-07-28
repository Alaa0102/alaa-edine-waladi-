void supprimer_conducteur()
{
	typedef struct supconducteur supconducteur;
          struct supconducteur
	 {
    char nom[20],prenom[20],adresse[30];
		long tel;
	int num,id;
};
	 supconducteur supc;
     FILE             *conducteur,*fptr1;
     int code,k;
	system("cls");
	printf("\n\n\n");
	printf("                      supprimer client                       \n");
    printf("");
	printf("\n\ndonner le ID de conducteur que vous voulez supprimer : ");
	scanf("%d",&code);


   conducteur=fopen("conducteur.txt","r");
   fptr1=fopen("tesla.txt","w");




     while(fscanf(conducteur,"%d %s %s %s %ld %d",&supc.id,supc.nom,supc.prenom,supc.adresse,&supc.tel,&supc.num)!=EOF)
                              {
                                  if(code!=supc.id)
                                       {
					 fprintf(fptr1,"%d\t\t",supc.id);
                     fprintf(fptr1,"%s\t\t",supc.nom);
					 fprintf(fptr1,"%s\t\t",supc.prenom);
					 fprintf(fptr1,"%s\t\t",supc.adresse);
					 fprintf(fptr1,"%ld\t\t",supc.tel);
					 fprintf(fptr1,"%d\n",supc.num);
                                       }
                              }
        fclose(fptr1);
        fclose(conducteur);
        remove("conducteur.txt");
        rename("tesla.txt","conducteur.txt");
		for(k=0; k<3; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                      Le conducteur qui a le ID que vous avez entre a ete supprimer     \n");

		Sleep(500);
		}



getch();}
