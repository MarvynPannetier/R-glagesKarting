#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

#define MAX 200

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  int compt = 0;
  char chaine[MAX]="";
  char set[18][20]={"pression","largeurAV","largeurAR","raidisseur","carossage","chasse","parallelisme","TempHaut","TempBas","TempMoteur","moyeux","HchassisAV","HchassisAR","pneus","arbre","barre avant","ressenti","surchauffe"};

  float reg[10]={0};
  char reg2[8][MAX]={0};
  // printf("arg c = %d et argv = %s\n",argc, argv[1]);

  if (argc == 2)
    {

      fichier = fopen(argv[argc-1],"r");

      if (fichier != NULL)
	{
	  while (compt < 3)
	    {

	      compt++ ;

	      printf("\n %s",fgets(chaine, MAX, fichier ));

	    }

   
	  fscanf(fichier,"%f %f %f %f %f %f %f %f %f %f %s %s %s %s %s %s %s %s" ,&reg[0], &reg[1], &reg[2],&reg[3],&reg[4],&reg[5],&reg[6],&reg[7],&reg[8],&reg[9],reg2[0],reg2[1], reg2[2],reg2[3],reg2[4],reg2[5],reg2[6],reg2[7]);


	//  printf("\n%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %s %s %s %s %s %s %s %s\n",reg[0],reg[1],reg[2],reg[3],reg[4],reg[5],reg[6],reg[7],reg[8],reg[9],reg2[0],reg2[1],reg2[2],reg2[3],reg2[4],reg2[5],reg2[6],reg2[7]);
	}

      else
	{
	  printf("fail");
	}

      fclose(fichier); // On ferme le fichier qui a été ouvert

    }

  else
    {

      //ici je ne donne pas de fichier en argument donc je demande les r�glages !

      printf("veuillez saisir vos differents reglages \n");
	
	
      for (int i=0 ; i<18 ; i++)
	{
	  printf("%s : ",set[i]);

	  if (i<10) {
	    scanf("%f", &reg[i])  ;
	  }

	  else {
	    scanf("%s", reg2[i-10]);

	  }
	}
	

     // printf("\n%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %s %s %s %s %s %s %s %s\n",reg[0],reg[1],reg[2],reg[3],reg[4],reg[5],reg[6],reg[7],reg[8],reg[9],reg2[0],reg2[1],reg2[2],reg2[3],reg2[4],reg2[5],reg2[6],reg2[7]);


    }



reglage_moteur(reg[7], reg[8] , reg[9]);

reglage_arbre( reg2[4] , reg2[6]);

reglage_hauteurAR(reg2[2] , reg2[6]);

reglage_moyeux(reg2[0] , reg2[6]);

reglage_largeur_AR( reg[2], reg2[6]);

reglage_raidisseur( reg[3], reg2[6]);

pression(reg[0] , reg2[7]);

reglage_largeur_AV( reg[1], reg2[6]);

reglage_barre(reg2[5],reg2[6]);

reglage_chasse(reg[5],reg2[6]);

reglage_carossage(reg[4],reg2[6]);

reglage_hauteurAV(reg2[1],reg2[6]);



  return 0;
}


// lire un fichier excell modif donné en argument.
// récupéré les données voulues et créer des fonctions pour les réglages


//recupérer la données de glisse ou grip (ex: grip=-1 je glisse et grip=0 bien et grip=1 trop de grip)

//si je glisse donner les différents réglages à adopter (en fonction de ceux qui sont déjà fait)

//si bien on touche pas

//si trop donner réglages à adopter en focntions de ceux existant

//récupérer les températures moteur et proposer des réglages si mauvais


