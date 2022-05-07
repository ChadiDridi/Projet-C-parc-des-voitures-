#include <iostream>
#include"voiture.h"
#include"chaffeur.h"
#include"centrereservation.h"
#include"emplacement.h"
#include<fstream>
#include"centrereservation.h"
#include"fonctionnaire.h"
#include<ctime>
#pragma once
#include<windows.h>
using namespace std;


int main()
{
	int i=0;
    int ce,x;
	time_t t;
	time(&t);
	date d;
	int choice;
	voiture v;
	emplacement e(0,0,d);
	chaffeur c(0,"aa",4,5);

    fonctionnaire f(0,"aa",4,5,0);
	fstream fv;
    fstream fc;
    fstream fcen;
    fstream femp;
    fstream ff;
    fstream centr;
	system("cls");   // FOR CLEARING SCREEN

 	cout<<"\t\t           ---------------------                \n";
	cout<<"\t\t                                                \n";
	cout<<"\t\t       -----------------------------            \n";
	cout<<"\t\t|       bienvenue au system  location           |\n";
	cout<<"\t\t|       des  voitures de la ministere           |\n";
	cout<<"\t\t|       -----------------------------           |\n";
	cout<<"\t\t|                                               |\n";
	cout<<"\t\t|                                               |\n";
	cout<<"\t\t|                                               |\n";
	cout<<"\t\t                                                \n";
	cout<<"\t\t                                                \n";
	cout<<"\t\t           ----------------------               \n\n\n";
		for(i=0;i<5;i++)
		cout<<">";
		cout<<"\ndate et temps "<<ctime(&t);
	    for(i=0;i<80;i++)
		cout<<"<";
	cout<<" \n taper pour continuer:";
    system("PAUSE");
    system("cls");
    cout<<"donner les valeurs de reservation";
    centreReservation cen;

while (1)  // repeter autant de fois que l'utilisateur veut choisir un sevice parmi ceux données
	{
		system("cls");
        for(i=0;i<80;i++)
		   cout<<"-";
		cout<<"\n";
		cout<<"   ---------------------->>>>  |MAIN MENU|  <<<<------------------------ \n";
		for(i=0;i<80;i++)
		 cout<<"-";
		cout<<"\n";

		cout<<"\t\t *Selectionner et Entrer Votre Choix*:";
		cout<<"\n\n";
		cout<<"\n========================================";
		cout<<" \n Entrer 1 ->> Gestion des voitures";
		cout<<"\n========================================";
		cout<<" \n Entrer 2 ->> Gestion des emplacements";
		cout<<"\n========================================";
		cout<<" \n Entrer 3 ->> Gestion des chauffeurs";
		cout<<"\n========================================";
		cout<<" \n Entrer 4 ->> Gestion des fonctionnaires";
		cout<<"\n========================================";
		cout<<" \n Entrer 5 ->> Voir un 'feedback' des donnees du centre de reservation";
		cout<<"\n========================================";
		cout<<" \n Entrer 6 ->> Quitter programme";
		cout<<"\n========================================";
		cout<<"\n \n";
		for(i=0;i<80;i++)
		  cout<<">";
        cout<<"\nDate et temps :"<<ctime(&t);
	      for(i=0;i<80;i++)
		   cout<<"<";
		cin>>choice;
		switch(choice)           // SWITCH STATEMENT
		{
			case 1:

			    v.creerfile(fv);
                system("cls");

                 for(i=0;i<80;i++)
                    cout<<"-";
                cout<<"\n";
			    cout<< "GESTION DES VOITURES ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisir le service desir :";
                cout<<"\n\n";
                cout<<"\n============================================";
                cout<<" \n Entrer 1 ->> Ajouter  voitures";
                cout<<"\n============================================";
                cout<<" \n Entrer 2 ->> Supprimer une voiture";
                cout<<"\n============================================";
                cout<<" \n Entrer 3 ->> Modifier une voiture";
                cout<<"\n============================================";
                cout<<" \n Entrer 4 ->> Afficher l'etat des voitures";
                cout<<"\n============================================";
                cout<<" \n Entrer 5 ->> Afficher  emplacement d une voiture";
                cout<<"\n============================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                    v.remplirv(fv);
                    break;
                case 2:
                    v.supprimerv(fv);
                    break;
                case 3:
                     v.modifierv(fv);
                    break;
                case 4:
                   v.afficherv(fv);
                    break;
                case 5 :
                   cout<<"affichage d emplacement du voiture "<<endl;
                   int a;
                   cout<<"donner une voiture"<<endl;
                   cin>>v;
                   a=v.afficheEmplacement(fc);
                   cout<<a;
                   break;
                default:
				system("cls");
				cout<<"Entr Incorrecte";
				cout<<"\n Appuyer pour continuer";
			    }
				break;

			case 2:
                system("cls");
                e.creerfile(femp);
                 for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------- GESTION DES EMPLACEMENTS ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n==================================================";
                cout<<" \n Entrez 1 ->> ajouter une voiture a l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Enter 2 ->> modifier une voiture a l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Enter 3 ->> supprimer une voiture de l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Enter 4 ->> chercher une voiture dans l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n entrez 5 ->> afficher la liste des voitures";
                cout<<"\n==================================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                    e.remplire(femp);

                    break;
                case 2:
                    e.modifiere(femp);

                    break;
                case 3:
                    e.supprimere(femp);

                    break;
                case 4:
                     e.recherchere(femp);

                    break;
                case 5:
                    e.affichere(femp);

                    break;
                default:
				  system("cls");
				  cout<<"choix incorrecte";
				  cout<<"\n taper pour continuer!!";
			    }
				break;

			case 3 :
                c.creerfile(fc);
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------GESTION DES CHAUFFEURS----------------\n";
                for(i=0;i<80;i++)
                 cout<<"-";
                cout<<"\n";
                cout<<"\t\t choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n========================================================================";
                cout<< "\n Entrer 1 -> Ajouter Chauffeurs";
                cout<<"\n========================================================================";
                cout<<" \n Enter 2 ->> Afficher Chauffeurs";
                cout<<"\n========================================================================";
                cout<<" \n Enter 3 ->> Modifier Chauffeur";
                cout<<"\n========================================================================";
                cout<<" \n Enter 4 ->> Supprimer Chauffeur";
                cout<<"\n========================================================================";
                cout<<" \n Enter 5 ->> affichier la disponibilitee du chauffeur a une date donnee";
                cout<<"\n========================================================================";
                cout<<"\n \n";
                cout<<" \n Enter 6 ->> Supprimer Chauffeur";
                cout<<"\n========================================================================";
                cout<<"\n \n";
                cout<<"\n \n";
			    switch(x)
			    {
                 case 1:
                    c.remplirc(fc);
                    break;
                 case 2:
                    c.afficherc(fc);
                    break;
                 case 3:
                    c.modifierc(fc);
                    break;
                 case 4 :
                   c.supprimerc(fc);
                    break;
                 case 5 :
                    {int a,d,p,k;
                    date b;
                    cout<<"donner une date"<<endl;
                    cin>>d>>p>>k;
                    b.setjour(d);
                    b.setmois(p);
                    b.setannee(k);
                    if (c.disponible(b))
                        cout<<"disponible"<<endl;
                    else
                        cout<<"n est pas disponible"<<endl;
                    break;
                    }
                 default:
				  cout<<"cls";
				  cout<<"Choix incorrecte";
				  cout<<"\n tapper pour continuer!!";
			       break;
			       }
            case 4:


                system("cls");
                f.creerfilefonc(ff);
                 for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------- GESTION DES FONCTIONNAIRES ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n==================================================";
                cout<<" \n Entrez 1 ->> ajouter fonctionnaires";
                cout<<"\n==================================================";
                cout<<" \n Enter 2 ->> modifier un fonctionnaire";
                cout<<"\n==================================================";
                cout<<" \n Enter 3 ->> supprimer un fonctionnaire";
                cout<<"\n==================================================";
                cout<<" \n Enter 4 ->> chercher une fonctionnaire";
                cout<<"\n==================================================";
                cout<<" \n entrez 5 ->> afficher la liste des fonctionnaires";
                cout<<"\n==================================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                   f.remplirfonc(ff);
                    break;
                case 2:
                    f.modifierf(ff);
                    break;
                case 3:
                    f.supprimerfonc(ff);
                    break;
                case 4:
                    f.rechercherfonc(ff);
                    break;
                case 5:
                    f.afficherfonc(ff);
                    break;
                default:
				  system("cls");
				  cout<<"choix incorrecte";
				  cout<<"\n taper pour continuer!!";
			    }

				break;

            case 5:
                system("cls");
                 for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------- GESTION DU CENTRE DU RESERVATION ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n==================================================";
                cout<<" \n Entrez 1 ->> afficher nombre de voitures courantes";
                cout<<"\n==================================================";
                cout<<" \n Enter 2 ->> afficher nombre de chauffeurs courantes";
                cout<<"\n==================================================";
                cout<<" \n Enter 3 ->> afficher nombre de  emplacements courantes";
                cout<<"\n==================================================";
                cout<<" \n Enter 4 ->> afficher nombre de  fonctionnaires courantes";
                cout<<"\n==================================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                   cout<<cen.nbre_voitures(fv);
                    break;
                case 2:
                    cout<<cen.nbre_chauffeurs(fc);
                    break;
                case 3:
                    cout<<cen.nbre_emplacements(femp);
                    break;
                case 4:
                    cout<<cen. nbre_fonctionnaires(ff);
                    break;
                default:
				system("cls");
				cout<<"choix incorrecte";
				cout<<"\n taper pour continuer!!";
			    }

				break;


			case 6:
				system("cls");
				cout<<"\n\n\t >>>>> MERCI <<<<<";
				cout<<"\n\t POUR AVOIR UTILISER NOTRE SERVICE";

				exit(0);
				break;
			default:
				system("cls");
				cout<<"CHOIX INCORRECTE";
				cout<<"\n taper pour continuer";
		}
		break;
  }


return 0;

}


