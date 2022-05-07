
#include "fonctionnaire.h"

fonctionnaire::fonctionnaire(int a,string b ,float c,int d,bool e):chaffeur(a,b,c,d)
{
    testchauffeur=e;
}

fonctionnaire::~fonctionnaire()
{
}
istream& operator>> (istream& in, fonctionnaire& v)
{
in>>v.identifiantChauffeur;
in>>v.nomChauffeur;
in>>v.dureeTravail;
in>>v.anneexperience;
in>>v.testchauffeur;
return in;
}
ostream& operator<< (ostream& out, fonctionnaire& v)
{
out<<v.identifiantChauffeur;
out<<v.nomChauffeur;
out<<v.dureeTravail;
out<<v.anneexperience;
out<<v.testchauffeur;
return out;
}
void fonctionnaire::remplirfonc(fstream& ff){
fonctionnaire a(0,"0",0,0,true);
 int n;
 cout<<"donner nombres de fonctionnaires à entrer"<<endl;
 cin>>n;
 for (int i=0;i<n;i++){
    cin>>a;
    ff<<a<<endl;}
}
void  fonctionnaire:: creerfilefonc (fstream& ff)
{
     ff.open("fonctionnaire.txt",ios::in | ios::out | ios::app);
    if (!ff) exit(-1);
}
void fonctionnaire::afficherfonc(fstream& ff)
{
 fonctionnaire a(0,"0",0,0,true);
 ff.seekg(0);
 while (1)
 {
     ff>>a;
     if(ff.eof()) break;
     cout<<a<<endl;
 }
 }

 void fonctionnaire::supprimerfonc(fstream& ff)
 {
     string deleteline;
      string line;
      ifstream fin;
     ff.open("fonctionnaire.txt");
    ofstream temp;
     temp.open("emp.txt");
cout << "ecrire le id de chauffeur en 2 nombres ";
cin >> deleteline;
while (getline(ff,line))
{
    if (line.substr(0,2) != deleteline)
    {
    temp << line << endl;
    }
}
temp.close();
ff.close();
remove("fonctionnaire.txt");
rename("emp.txt","fonctionnaire.txt");
 }
 void fonctionnaire::modifierf(fstream& f)
 {   string line;
     f.open("fonctionnaire.txt");
      ofstream temp;
     temp.open("modif.txt");
     cout<<"donner identifiant fonctionnaire";
     string name;
     cin>>name;
     if(f.fail())
{
     cout<<"File is empty.\n";
}
while ((getline(f,line)))
{
    fonctionnaire c(0,"",0,0,false);
    if (line.substr(0,2) != name)
    {
    temp << line << endl;
    }
    else
        cout<<"donner nouveaux valeurs";
        cin>>c;
        temp<<c;

{
       f>> name;
}
temp.close();
f.close();
remove("fonctionnaire.txt");
rename("modif.txt","fonctionnaire.txt");


 }
 }
void fonctionnaire::rechercherfonc(fstream& f)
{bool z;
    fonctionnaire v(0,"0",0,0,true);
    cin>>v;
    string deleteline;
    string line;
    f.open("fonctionnaire.txt");
cout << "ecrire ID chauffeur en 2 nombres ";
cin >> deleteline;
while (getline(f,line))
{
    if ((line.substr(0,2) != deleteline) ||(!f.eof()))
    {
      z==0;
    }
    else{
       z==1;}
}

if (z==0) cout<<"voiture n exsiste pas dans l emplacement"<<endl;
else cout<<"voiture exsiste"<<endl;
 }






