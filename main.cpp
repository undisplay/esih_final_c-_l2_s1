#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

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

        if("1"){
            transcode();
        }
        else if("2"){
            cout << "Fonctions mathematiques" <<endl;
        }
        else if("3"){
            cout << "Gestion d'information sur un etudiant" <<endl;
        }
        else if("4"){
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



