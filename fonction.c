#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#include <string.h>




void reglage_moteur(float haut, float bas , float moteur)
{
if (haut < 600)
{
	printf("le reglage carbu est trop riche\n");
}
else if (haut > 639 )
{
	printf("le reglage carbu est trop pauvre\n");
}
if (moteur >55)
{
	printf("enleve un scotch du radiateur ou enrichir carbu\n");
}
if (moteur <50)
{
	printf("mettre du scotch sur le radiateur\n");
}
}













void reglage_arbre( char *arbre , char *ressenti)
{
	if( (strcmp(arbre,"hard")==0 || strcmp(arbre,"medium")==0) && strcmp(ressenti,"glisse")==0)
	{
		printf("assouplir l'arbre permet de redonner du grip à l'arriere\n");
	}
	else if( (strcmp(arbre,"medium")==0 || strcmp(arbre,"soft")==0) && strcmp(ressenti,"grip")==0)
	{
		printf("durcir l'arbre permet de degriper l'arriere\n");
	}
}

void reglage_hauteurAR(char *hauteurAR , char *ressenti)
{
if ((strcmp(hauteurAR,"bas")==0 || strcmp(hauteurAR,"milieu")==0) && strcmp(ressenti,"glisse")==0)
{
printf("monter l'arriere donne du grip mais moins stable\n");
}
else if ((strcmp(hauteurAR,"haut")==0 || strcmp(hauteurAR,"milieu")==0)  && strcmp(ressenti,"grip")==0)
{
printf("descendre l'arriere rend le chassis plus stable et enleve du grip\n");
}
}

void reglage_moyeux(char *moyeux , char *ressenti)
{
	if((strcmp(moyeux,"court")==0 || strcmp(moyeux,"normal")==0) && strcmp(ressenti,"grip")==0)
	{
		printf("augmenter la longueur des moyeux permet de rigidifier l'arbre et en consequence de perdre du grip arriere\n");
	}
	else if((strcmp(moyeux,"normal")==0 || strcmp(moyeux,"long")==0) && strcmp(ressenti,"glisse")==0) 
	{
		printf("diminuer la taille des moyeux permet d'assouplir l'arbre et en consequence d'augmenter le grip arriere\n");
	}
}

void reglage_largeur_AR( float largeurAR, char *ressenti)
{
	if (largeurAR<=140 && strcmp(ressenti,"glisse")==0)
	{
	printf("la largeur arriere peut etre augmenter :  diminue le grip arriere, ajoute de la stabilite et du grip lateral, augmente motricite et augmente survirage\n");	
	}
	else if (largeurAR>136 && strcmp(ressenti,"grip")==0)
	{
	printf("la largeur arriere peut etre diminuee : augmente le grip arriere, diminue la stabilite et le grip lateral, perte motricite et augmente souvirage\n");	
	}
}

void reglage_raidisseur( float Nbraidisseur, char *ressenti)
{
if (Nbraidisseur > 1 && strcmp(ressenti,"glisse")==0)
{
	printf ("Diminuer le nombre de raidisseur pour ajouter du grip\n");
}
else if (Nbraidisseur < 3 && strcmp(ressenti,"grip")==0)
{
	printf("Augmenter le nombre de raidisseur pour perdre du grip\n");
}
}


void pression(float pression , char *surchauffe)
{
	if (pression > 450  && strcmp(surchauffe,"oui")==0)
	{
		printf("diminuer la pression des pneus pour eviter la surchauffe en fin de serie\n");
	}
	else if (pression <800 && strcmp(surchauffe,"non")==0)
	{
		printf("augmenter un peu la presision pour gagner en grip mais pas surchauffer\n");
	} 
}























void reglage_largeur_AV( float largeurAV, char *ressenti)
{
	if (largeurAV <=125 && strcmp(ressenti,"glisse")==0)
	{
	printf("la largeur avant peut etre augmenter : augmente le grip arriere, ajoute de la stabilite et du grip lateral, augmente le sousvirage\n");	
	}
	else if (largeurAV >= 122 && strcmp(ressenti,"grip")==0)
	{
	printf("la largeur avant peut etre diminue : diminue le grip arriere, diminue la stabilite et le grip lateral, augmente le survirage\n");	
	}
}

 void reglage_barre(char *barre,char *ressenti)
{
 if (strcmp(barre,"ronde")==0 && strcmp(ressenti,"grip")==0)
 {
  printf("tester barre plate pour gagner du grip avant : barre horizontale plus de grip\n");
 }
 else if (strcmp(barre,"plate")==0 && strcmp(ressenti,"glisse")==0)
 {
  printf("tester barre ronde pour changer diminuer grip avant donc augmenter arriere\n");
 }
}


void reglage_chasse(float chasse,char *ressenti)
{
if (chasse == 0 && strcmp(ressenti,"glisse")==0)
{
printf("mettre un peu de chasse peu rendre le kart plus stable, plus souvireur(lourd)\n");
}
else if (chasse != 0 && strcmp(ressenti,"grip")==0)
{
printf("enlever de la chasse pour rendre le kart plus incisif et plus survireur(moins grip arriere\n");
}
}

void reglage_carossage(float carossage,char *ressenti)
{
if (carossage == 0 && strcmp(ressenti,"glisse")==0)
{
printf("mettre un peu de carossage peu ameliorer grip lateral mais on perd en motricité et usure des pneus plus importante\n");
}
else if (carossage != 0 && strcmp(ressenti,"grip")==0)
{
printf("enlever de la carossage enleve du grip lateral et vitesse en ligne droite mais ameliore motricite et reactivite\n");
}
}


void reglage_hauteurAV(char *hauteurAV,char *ressenti)
{
if ((strcmp(hauteurAV,"bas")==0 || strcmp(hauteurAV,"milieu")==0) && strcmp(ressenti,"glisse")==0)
{
printf("monter l'avant redonne de l'avant mais chassis moins reactif\n");
}
else if ((strcmp(hauteurAV,"haut")==0 || strcmp(hauteurAV,"milieu"))==0  && strcmp(ressenti,"grip")==0)
{
printf("descendre l'avant peut redonner du grip a l'arriere et rendre le chassis plus reactif\n");
}
}


