#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <fstream>
#include <cmath>

using namespace std;

//varriables
string oplist [4]   = {
    "Codage / Decodage / Transcodage",
    "Fonctions mathematiques",
    "Gestion d'information sur un etudiant",
    "Calculatrice ( * , + , / , - , % )"
};
string retry = "0";
string op = "0";

//helpers
void _divider(){
    cout << "***********************************" <<endl;
}

//helpers transcode
string dec_bin(int a){
    int x=a,y=a;

    string res,text;
    do
    {
        y=x%2;
        if(y==0)
            text="0";
        else
            text="1";
        res+=text;
        x=x/2;
    }while(x>=1);

    if(x==0)
        text="0";
    else
        text="1";
    res+=text;

    string res_reversed(res);

    reverse(res_reversed.begin(),res_reversed.end());

    return res_reversed;
}

string dec_oct (int a)
{
    int x=a,y=a;

    string res,text;
    do
    {
        y=x%8;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        res+=text;
        x=x/8;
    }while(x>=7);
        if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    return res_reversed;
}
string dec_hex (int a)
{
    int x=a,y=a;

    string res,text;
    do
    {
        y=x%16;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        else if(y==8)
            text="8";
        else if(y==9)
            text="9";
        else if(y==10)
            text="A";
        else if(y==11)
            text="B";
        else if(y==12)
            text="C";
        else if(y==13)
            text="D";
        else if(y==14)
            text="E";
        else if(y==15)
            text="F";
        res+=text;
        x=x/16;
    }while(x>=15);
    if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        else if(x==8)
            text="8";
        else if(x==9)
            text="9";
        else if(x==10)
            text="A";
        else if(x==11)
            text="B";
        else if(x==12)
            text="C";
        else if(x==13)
            text="D";
        else if(x==14)
            text="E";
        else if(x==15)
            text="F";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    return res_reversed;
}


string bin_dec (string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
        {
            valeur += pow(2,index);
        }

        index++;

    }

    return to_string(valeur);
}
string bin_oct (string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
        {
            valeur += pow(2,index);
        }

        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%8;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        res+=text;
        x=x/8;
    }while(x>=7);
    if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    return res_reversed;
}
string bin_hex(string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
        {
            valeur += pow(2,index);
        }

        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%16;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        else if(y==8)
            text="8";
        else if(y==9)
            text="9";
        else if(y==10)
            text="A";
        else if(y==11)
            text="B";
        else if(y==12)
            text="C";
        else if(y==13)
            text="D";
        else if(y==14)
            text="E";
        else if(y==15)
            text="F";
        res+=text;
        x=x/16;
    }while(x>=7);
    if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        else if(x==8)
            text="8";
        else if(x==9)
            text="9";
        else if(x==10)
            text="A";
        else if(x==11)
            text="B";
        else if(x==12)
            text="C";
        else if(x==13)
            text="D";
        else if(x==14)
            text="E";
        else if(x==15)
            text="F";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    return res_reversed;
}


string hex_dec (string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(16,index);
        else if(a[i] == '2')
            valeur += 2*pow(16,index);
        else if(a[i] == '3')
            valeur += 3*pow(16,index);
        else if(a[i] == '4')
            valeur += 4*pow(16,index);
        else if(a[i] == '5')
            valeur += 5*pow(16,index);
        else if(a[i] == '6')
            valeur += 6*pow(16,index);
        else if(a[i] == '7')
            valeur += 7*pow(16,index);
        else if(a[i] == '8')
            valeur += 8*pow(16,index);
        else if(a[i] == '9')
            valeur += 9*pow(16,index);
        else if(a[i] == 'a')
            valeur += 10*pow(16,index);
        else if(a[i] == 'b')
            valeur += 11*pow(16,index);
        else if(a[i] == 'c')
            valeur += 12*pow(16,index);
        else if(a[i] == 'd')
            valeur += 13*pow(16,index);
        else if(a[i] == 'e')
            valeur += 14*pow(16,index);
        else if(a[i] == 'f')
            valeur += 15*pow(16,index);
        index++;

    }

    return to_string(valeur);
}
string hex_bin(string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(16,index);
        else if(a[i] == '2')
            valeur += 2*pow(16,index);
        else if(a[i] == '3')
            valeur += 3*pow(16,index);
        else if(a[i] == '4')
            valeur += 4*pow(16,index);
        else if(a[i] == '5')
            valeur += 5*pow(16,index);
        else if(a[i] == '6')
            valeur += 6*pow(16,index);
        else if(a[i] == '7')
            valeur += 7*pow(16,index);
        else if(a[i] == '8')
            valeur += 8*pow(16,index);
        else if(a[i] == '9')
            valeur += 9*pow(16,index);
        else if(a[i] == 'a')
            valeur += 10*pow(16,index);
        else if(a[i] == 'b')
            valeur += 11*pow(16,index);
        else if(a[i] == 'c')
            valeur += 12*pow(16,index);
        else if(a[i] == 'd')
            valeur += 13*pow(16,index);
        else if(a[i] == 'e')
            valeur += 14*pow(16,index);
        else if(a[i] == 'f')
            valeur += 15*pow(16,index);
        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%2;
        if(y==0)
            text="0";
        else
            text="1";
        res+=text;
        x=x/2;
    }while(x>=1);
        if(x==0)
            text="0";
        else
            text="1";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    return res_reversed;

}
string hex_oct(string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(16,index);
        else if(a[i] == '2')
            valeur += 2*pow(16,index);
        else if(a[i] == '3')
            valeur += 3*pow(16,index);
        else if(a[i] == '4')
            valeur += 4*pow(16,index);
        else if(a[i] == '5')
            valeur += 5*pow(16,index);
        else if(a[i] == '6')
            valeur += 6*pow(16,index);
        else if(a[i] == '7')
            valeur += 7*pow(16,index);
        else if(a[i] == '8')
            valeur += 8*pow(16,index);
        else if(a[i] == '9')
            valeur += 9*pow(16,index);
        else if(a[i] == 'a')
            valeur += 10*pow(16,index);
        else if(a[i] == 'b')
            valeur += 11*pow(16,index);
        else if(a[i] == 'c')
            valeur += 12*pow(16,index);
        else if(a[i] == 'd')
            valeur += 13*pow(16,index);
        else if(a[i] == 'e')
            valeur += 14*pow(16,index);
        else if(a[i] == 'f')
            valeur += 15*pow(16,index);
        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%8;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        res+=text;
        x=x/8;
    }while(x>=7);
        if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    return res_reversed;
}


//helpers student manager
void add_student(){
    //structs
    struct Student
    {
        string id;
        string lastname;
        string firstname;
        string address;
    };

    //varriables
    string retry = "0";
    Student s;
    ofstream f("students.txt",ios::app);

    cout<<"Entrez un étudiant"<<endl;
    _divider();

    do{
        cout << "Code:" <<endl;
        cin >> s.id;

        cout << "Nom:" <<endl;
        cin >> s.lastname;

        cout << "Prenom:" <<endl;
        cin >> s.firstname;

        cout << "Addresse:" <<endl;
        cin >> s.address;

        _divider();

        f << s.id << ' ' << s.lastname << ' ' << s.firstname << ' ' << s.address <<endl;

        cout << "Voulez-vous entrer un autre etudiant? 1-oui ; autre-non." <<endl;
        cin >> retry;
        _divider();
    }
    while(retry == "1");

    f.close();
}
void display_student(bool az = false){
    //structs
    struct Student
    {
        string id;
        string lastname;
        string firstname;
        string address;
    };

    //varriables
    Student s,tmp_s;
    vector <Student> tab_s;
    ifstream f("students.txt",ios::in);
    string print;



    cout<<"Listes des étudiants"<<endl;
    _divider();

    if(az)
    {
        while(f >> s.id >> s.lastname >> s.firstname >> s.address){
            tab_s.push_back(s);
        }

        for(int i = 0; i < tab_s.size(); i++){
            s = tab_s[i];

            cout << "Code:";
            cout << s.id <<endl;

            cout << "Nom:";
            cout << s.lastname <<endl;

            cout << "Prenom:";
            cout << s.firstname <<endl;

            cout << "Addresse:";
            cout << s.address <<endl;

            _divider();
        }
    }
    else
    {

        while(f >> s.id >> s.lastname >> s.firstname >> s.address){

            cout << "Code:";
            cout << s.id <<endl;

            cout << "Nom:";
            cout << s.lastname <<endl;

            cout << "Prenom:";
            cout << s.firstname <<endl;

            cout << "Addresse:";
            cout << s.address <<endl;

            _divider();
        }

        cout << "Saisir p-imprimer; autres-quitter." <<endl;
        cin >> print;
        _divider();

        if(print == "p")
        {
            string f = ("libreoffice students.txt -p");
            system(f.c_str());
        }
    }

    f.close();
}


//helpers ops math
void ajout_valeur(int& val1,int& val2,int& val3,int& val4,int i,int j,int k,int L,int x,int n)
{
    if( (i==(L*2)-2 && j==n/2) || (i==(L*2)&& j!=n/2) )//cas de U
    {
        val1=k+3;
        val2=k+2;
        val3=k+1;
        val4=k;
    }
    else if(x-1!=0 && i>=(L*2)+2)//cas de X
    {
        val1=k+3;
        val2=k+1;
        val3=k+2;
        val4=k;
    }
    else//cas de L
    {
        val1=k;
        val2=k+2;
        val3=k+1;
        val4=k+3;
    }
}

void eqt_2(){
    //varriables
    float a,b,x,c,d,x1,x2;
    string retry = "0";


    do{

        cout<<"Entrer une valeur pour a (ax^2+bx+c=0):"<<endl;
        cin>> a;
        _divider();

        cout<<" Entrer une valeur pour b (ax^2+bx+c=0):"<<endl;
        cin>> b;
        _divider();

        cout<<" Entrer une valeur pour c (ax^2+bx+c=0):"<<endl;
        cin>> c;
        _divider();

        d=b*b-4*a*c;

        if(d==0){
            x1=-b/(2*a);
            cout<<"L'equation admet une racine double, de solution:"<<x1<<endl;
            _divider();
        }
        if ( d>0){

            x1=(-b+sqrt(d))/ (2*a);
            x2=(-b-sqrt(d))/(2*a);

           cout<< " L'equation admet deux racine:"<<endl;
           cout<<"x1 =" <<x1<<endl;
           cout<<"x2 ="<<x2<<endl;
           _divider();

        }
        if (d<0){

            cout<<"Pas de solution"<<endl;
            _divider();

        }

        cout << "Voulez-vous entrer un autre etudiant? 1-oui ; autre-non." <<endl;
        cin >> retry;
        _divider();
    }
    while(retry == "1");

}

void magic_square(){
    //varriables
    int r=1;

    while(r%2 != 0){
        cout << "Entrer un nombre pair:" <<endl;
        cin>>r;
        _divider();
    }


    int o=r;

    if (r%4 != 0)
    {
        //varriables
        int *p[o*o],n = r;
        int tab[n][n],i,j,k;
        int x=((n/2)-1)/2, L=x+1;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                tab[i][j]=0;
            }
        }
        i=0;
        j=n/2;
        ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,1,L,x,n);
        for(k=5;k<=n*n;k+=4)
        {
            i-=2;
            j+=2;
            if(i>=0 && j<n && tab[i][j]==0)//case ok
            {
                 ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
            }
            else if(i>=0 && j<n && tab[i][j]!=0)//case occupe
            {
                i+=4;
                j-=2;
                ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
            }
            else if(i<0 && j<n)//debordement en haut
            {
                i=n-2;
                ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
            }
            else if(i>=0 && j>=n)//debordement a droite
            {
                j=1;
                ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
            }
            else
            {
                i+=4;
                j-=2;
                ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
            }
        }

        int l = n, c = n;

        k=0;
        for(i=0;i<l;i++)
        {
            for(int j=0;j<c;j++)
            {
                p[k]=tab[k];
                k++;
            }
        }
        k=0;

        cout << "Carre magique est:" << endl;
        _divider();

        for(int i=0;i<l;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout <<tab[k]<<"|";
                k++;
            }
            cout << endl;
        }
        _divider();
    }
    else
    {
        //varriables
        int i ;
        int j ;
        int k= 1;
        int p[o][o] ;

        for(i=0;i<o;i++)
        {
            for(j=0;j<o;j++)
            {
                p[i][j]= k;

                if((((i%4==0)||((i+1)%4==0))&&((j%4==0)||((j+1)%4==0)))||((!(i%4==0)&&!((i+1)%4==0))&&(!(j%4==0)&&!((j+1)%4==0)))){
                    p[i][j]=(o*o +1)-p[i][j];
                }

                k++;
            }
        }

        cout << "Carre magique est:" << endl;
        _divider();

        for(i=0;i<o;i++)
        {
            for(j=0;j<o;j++)
            {
                cout << p[i][j] <<"|";
            }
            cout << endl;
        }
        _divider();
    }
}

void m_x_m(){
    int choix1,choix2,choix3, choixDeRetour, m_lignes,m_colonnes,m_lignes1,m_colonnes1;
        cout<<"Entrer le nombre de lignes de votre matrice 1"<<endl;
        cin>>m_lignes;
        _divider();

        cout<<"Entrer le nombre de colonnes de votre matrice 1"<<endl;
        cin>>m_colonnes;
        _divider();

        cout<<"Entrer le nombre de lignes de votre matrice 2"<<endl;
        cin>>m_lignes1;
        _divider();

        cout<<"Entrer le nombre de colonnes de votre matrice 2"<<endl;
        cin>>m_colonnes1;
        _divider();

        if(m_colonnes!=m_lignes1)
        {
            cout <<"Le nombre de colonnes de matrice 1 doit egales au nombre de lignes de matrice 2." <<endl;
        }
        else{
            int a[m_lignes][m_colonnes];
            int b[m_lignes1][m_colonnes1];
            int p,h;
            p=0;
            h=0;

            cout<<"Entrer les valeurs de la matrice 1"<<endl;
            for(int k=0;k<m_lignes;k++)
            {
                for(int l=0;l<m_colonnes;l++)
                {
                    cin>>a[k][l];
                }
            }
            _divider();

            cout<<"Entrer les valeurs de la matrice 2"<<endl;
            for(int m=0;m<m_lignes1;m++)
            {
                for(int n=0;n<m_colonnes1;n++)
                {
                    cin>>b[m][n];
                }
            }
            _divider();

            cout<<"Resultat: "<<endl;
            _divider();

            int r[m_lignes][m_colonnes1];

                    for(int k=0;k<m_lignes;k++)
                    {
                           for(int l=0;l<m_colonnes1;l++)
                            {
                                for(int m=0;m<m_lignes1;m++)
                                {
                                    p= a[k][m]*b[m][l]+p;
                                }
                                r[k][l]=p;
                                p=0;
                            }
                    }

                    for(int k=0;k<m_lignes;k++)
                    {
                           for(int l=0;l<m_colonnes1;l++)
                            {
                                cout<<r[k][l]<<"|";
                            }
                            cout<<endl;
                    }
                    _divider();
        }
}

//options
void calculatrice()
{
    //varriables
    int op,a,b;
    string retry = "0";
    string oplist = "*+/-%";


    cout << "BIENVENUE DANS VOTRE CALCULATRICE!" <<endl;
    _divider();

    do
    {
        cout << "Voici la liste des operations possible:" << endl <<endl;

        for (int i=0;i < 5;i++)
        {

            cout << i <<"-(" << oplist[i]<<")"<< endl;
        }
        _divider();

        cout  << endl << "Entrer le numero de votre operateur:" <<endl;

        cin >> op;
        _divider();

        cout  << endl << "Entrer le premier nombre" <<endl;

        cin >> a;
        _divider();

        cout  << endl << "Entrer le deuxieme nombre" <<endl;

        cin >> b;
        _divider();

        switch(op)
        {
            case 0:
                cout <<"Resultat:"<< a*b <<endl;
                break;
            case 1:
                cout <<"Resultat:"<< a+b <<endl;
                break;
            case 2:
                cout <<"Resultat:"<< a/b <<endl;
                break;
            case 3:
                cout <<"Resultat:"<< a-b <<endl;
                break;
            case 4:
                cout <<"Resultat:"<< a%b <<endl;
                break;
            default:
                cout <<"Option pas dans la liste" <<endl;
                break;

        }
        _divider();

        cout << "Voulez-vous recomencer? 1-oui ; autre-non." <<endl;
        cin >> retry;
        _divider();
    }
    while(retry == "1");
}

void transcode()
{
    //varriables
    string opIn,opOut,retry="0";

    string resp,in;
    string oplist [4] = {
        "Decimal",
        "Binaire",
        "Hexadecimal",
        "Octal"
    };



    cout << "BIENVENUE DANS VOTRE APP DE TRANSCODAGE!" <<endl;
    _divider();

    do
    {
        cout << "Voici la liste des bases d'entrer:" <<endl;

        for (int i=1;i <= 3;i++)
        {

            cout << i <<" - " << oplist[i-1] << endl;
        }
        _divider();

        cout << "Entrer le numero de votre base d'entrer:" <<endl;

        cin >> opIn;
        _divider();

        cout << "Entrer le nombre" <<endl;

        cin >> in;
        _divider();

        cout << "Voici la liste des bases de sortie:" <<endl;

        for (int i=1;i <= 4;i++)
        {
            if(to_string(i) != opIn){
                cout << i <<" - " << oplist[i-1] << endl;
            }
        }
        _divider();

        cout << "Entrer le numero de votre base de sortie:" <<endl;

        cin >> opOut;
        _divider();

        //convert
        if(opIn == "1")
        {
            if(opOut == "2")
            {
                resp = dec_bin(stoi(in));
            }
            else if( opOut == "3")
            {
                resp = dec_hex(stoi(in));
            }
            else if( opOut == "4")
            {
                resp = dec_oct(stoi(in));
            }
            else{
                cout <<"Option pas dans la liste" <<endl;
            }
        }
        else if( opIn == "2")
        {
            if(opOut == "1")
            {
                resp = bin_dec(in);
            }
            else if( opOut == "3")
            {
                resp = bin_hex(in);
            }
            else if( opOut == "4")
            {
                resp = bin_oct(in);
            }
            else{
                cout <<"Option pas dans la liste" <<endl;
            }
        }
        else if( opIn == "3")
        {
            if(opOut == "1")
            {
                resp = hex_dec(in);
            }
            else if( opOut == "2")
            {
                resp = hex_bin(in);
            }
            else if( opOut == "4")
            {
                resp = hex_oct(in);
            }
            else{
                cout <<"Option pas dans la liste" <<endl;
            }
        }
        else{
            cout <<"Option pas dans la liste" <<endl;
        }


        cout << "valeur de sortie: " << resp <<endl;
        _divider();

        cout << "Voulez-vous recomencer? 1-oui ; autre-non." <<endl;
        cin >> retry;
        _divider();
    }
    while(retry == "1");
}

void student_manager()
{
    //varriables
    string retry = "0",op;
    string oplist [3] = {
        "Ajouter",
        "Afficher (posibilité impression)",
        "Afficher (ordre A-Z)"
    };

    cout << "BIENVENUE DANS VOTRE GESTIONNAIRE D'ETUDIANT!" <<endl;
    _divider();

    do
    {
        cout << "Voici la liste des operations:" <<endl;

        for (int i=1;i <= 3;i++)
        {
            cout << i <<" - " << oplist[i-1] << endl;
        }
        _divider();

        cout << "Entrer le numero de votre operation:" <<endl;

        cin >> op;
        _divider();

        if(op == "1"){
            add_student();
        }
        else if(op == "2"){
            display_student();
        }
        else if(op == "3"){
            display_student(true);
        }
        else{
            cout <<"Option pas dans la liste" <<endl;
        }

        cout << "Voulez-vous recomencer? 1-oui ; autre-non." <<endl;
        cin >> retry;
        _divider();
    }
    while(retry == "1");
}

void math_opts()
{
    //varriables
    string retry = "0",op;
    string oplist [4] = {
        "Carre magique",
        "Multiplication matrice",
        "Solution eqts 2 inconnus"
    };

    cout << "BIENVENUE DANS VOTRE GESTIONNAIRE D'OPERATIONS MATHS!" <<endl;
    _divider();

    do
    {
        cout << "Voici la liste des operations:" <<endl;

        for (int i=1;i <= 3;i++)
        {
            cout << i <<" - " << oplist[i-1] << endl;
        }
        _divider();

        cout << "Entrer le numero de votre operation:" <<endl;

        cin >> op;
        _divider();

        if(op == "1"){
            magic_square();
        }
        else if(op == "2"){
            m_x_m();
        }
        else if(op == "3"){
            eqt_2();
        }
        else{
            cout <<"Option pas dans la liste" <<endl;
        }

        cout << "Voulez-vous recomencer? 1-oui ; autre-non." <<endl;
        cin >> retry;
        _divider();
    }
    while(retry == "1");
}


int main()
{
    cout << "BIENVENUE !" <<endl;
    _divider();

    do
    {
        //affichage d'options
        cout << "Voici la liste des options possibles:" <<endl<<endl;

        for (int i=1; i <= 4; i++)
        {
            cout << i <<" - " << oplist[i-1] << endl;
        }
        _divider();

        //enregistrer choix option
        cout << "Entrer le numero de votre option:" <<endl;
        cin >> op;
        _divider();

        //executer option

        if(op == "1"){
            transcode();
        }
        else if(op == "2"){
            math_opts();
        }
        else if(op == "3"){
            student_manager();
        }
        else if(op == "4"){
            calculatrice();
        }
        else{
            cout <<"Option pas dans la liste" <<endl;
        }

        //recomencer?
        cout << "Choisir une autre options? 1-oui ; autre-non." <<endl;
        cin >> retry;
        cout << endl;
        _divider();
    }
    while(retry == "1");

    return 0;
}



