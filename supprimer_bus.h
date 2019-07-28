	void supprimer_bus()
	{
	typedef struct sbus sbus;
          struct sbus
	 {
	char nom[20];
            int nrb,jdt,dst,dv,ns;
	};
	 sbus newr;
     FILE             *bus,*fptr1;
     int code,k;
	system("cls");
	printf("\n\n\n");
	printf("                      supprimer BUS disponible                       \n");
    printf("");
	printf("\n\ndonner le nomber de BUS que vous voulez supprimer : ");
	scanf("%d",&code);


   bus=fopen("bus.txt","r");
   fptr1=fopen("amg.txt","w");
	
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
                              }
        fclose(fptr1);
        fclose(bus);
        remove("bus.txt");
        rename("amg.txt","bus.txt");
		for(k=0; k<3; k++)
		{
		system("cls");
		Sleep(300);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

	   	printf("                      Le BUS qui a le ID que vous avez entre a ete supprimer     \n");

		Sleep(500);
		}



	getch();}
