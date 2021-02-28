#include <iostream>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <conio.h>



using namespace std;


class login
{

    long int p,u,result;
    int o;
    char pet[50];
public :
    void getdata()
    {
           //system("cls");
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
           cout<<setw(45)<<endl;
           cout << "AVAILABLE";
           cout<<setw(60)<<endl;
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<< "ENTER USERID(AS ABOVE): ";
        cin>>u;
        cout<<setw(57)<<endl;
        cout<< "ENTER PIN(AS ABOVE): ";
        cin>>p;
        cout<<setw(70)<<endl;
        cout<< "SECURITY QUESTION:WHAT IS YOUR PET NAME?: ";
        cin.ignore();
        cin.getline(pet,50);
    }

    void showdata()
    {
       system("cls");
       cout<<setw(60)<<endl<<endl;
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);


        cout<< "SUCESSFULLY LOGGED IN!";

        further();
    }


int store();

void searchdata();
void searchdata1();
void searchdata2();
void searchdata3();
void further();
void mainpage();
};


   int login::store()
{
       // system("cls");
       //cout<< "\nsucessfully stored";

    if(result==0)
    {
        cout<< "DATA NOT INITIALIZED"<<endl;
        return 0;

    }
    else
    {
        ofstream fout;
        fout.open("file7.txt",ios::app);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
    }
}

void login::searchdata()
{
   // system("cls");
   label:

     int a;
     int b;
    //char t[50];
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout <<"SELECT YOUR USERID (IT SHOULD BE NUMERIC VALUE): ";
     //cin.ignore();
//cin.getline(t,50);
    cin>>a;
    cout << "\nSELECT PIN (IT SHOULD BE NUMERIC VALUE): ";
    cin>>b;






    int counter=0;

    ifstream fin;
fin.open("file7.txt");
if(!fin)
{
    cout<< "file not found"<<endl;
}
else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {

        if(a==u || b==p){

           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
           cout<< "\n\nTHIS COMBINATION ALREADY EXIST";
           cout<< "  ,CHOSE ANOTHER COMBINATION"<<endl;
           //getch();
           //cin.ignore();
         // cout<< "sucessfully logged in!";
          //showdata();
            counter++;
            system("pause");
            goto label;
        }
        //else
         //getdata();

        fin.read((char*)this,sizeof(*this));
    }

    if(counter==0)
          //cout<< "available";
          //cin.get();
        //getch();
       // system("cls");
        {getdata();
          store();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout<< "\n\nSUCESSFULLY SAVED";

        }

    fin.close();
}
}

void login::searchdata3()
{
   // system("cls");
     int r;
     int t;
    //char t[50];
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout <<"ENTER USERID: ";
     //cin.ignore();
//cin.getline(t,50);
    cin>>r;
    cout << "\nENTER PIN: ";
    cin>>t;






    int counter=0;

    ifstream fin;
fin.open("file7.txt");
if(!fin)
{
    cout<< "file not found"<<endl;
}
else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {

        if(r==u && t==p){   //500
                            //500

                showdata();
           //cout<< "already exist";
           //getch();
           //cin.ignore();
         // cout<< "sucessfully logged in!";
          //showdata();
            counter++;
        }
        //else
         //getdata();

        fin.read((char*)this,sizeof(*this));
    }

    if(counter==0)
          cout<< "\nOOPS! RECORD NOT FOUND";
          //cin.get();
        //getch();
       // system("cls");
        //getdata();
        //store();
        //cout<< "\nsucessfully stored";
    fin.close();
}
}


void login::searchdata1()
{

    system("cls");
     int s;
     char v[50];
    // int t;
    //char t[50];
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout <<"ENTER USERID :";
     //jcin.ignore();
//cin.getline(t,50);
    cin>>s;
    cout << "\nENTER ANSWER OF YOUR SECURITY QUESTION (YOUR PET NAME): ";
    cin.ignore();
    cin.getline(v,50);






    int counter=0;

    ifstream fin;
fin.open("file7.txt");
if(!fin)
{
    cout<< "file not found"<<endl;
}
else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {

        if(!strcmp(v,pet) && s==u ){


        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);

        cout<<"\nCONGRATS! YOUR PIN IS FOUND: "<<p;
         // cout<< "sucessfully logged in!";
          //showdata();
            counter++;
        }

        fin.read((char*)this,sizeof(*this));
    }
    if(counter==0)
        cout << "OOPS! RECORD NOT FOUND"<<endl;
    fin.close();
}
}


void login::searchdata2()
{

    system("cls");
    int g;
     char a[50];
    // int t;
    //char t[50];
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout <<"ENTER ANSWER OF YOUR SECURITY QUESTION (YOUR PET NAME): ";
     cin.ignore();
//cin.getline(t,50);
    cin.getline(a,50);
   // cout << "\nenter password: ";
    //cin>>t;
    cout<< "\nENTER PIN: ";
    cin>>g;






    int counter=0;

    ifstream fin;
fin.open("file7.txt");
if(!fin)
{
    cout<< "file not found"<<endl;
}
else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {

        if(!strcmp(a,pet)&& g==p){   //500
                            //500

             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout<< "\n\nCONGRATS! YOUR USERID IS FOUND:"<<u;
         // cout<< "sucessfully logged in!";
          //showdata();
            counter++;
        }

        fin.read((char*)this,sizeof(*this));
    }
    if(counter==0)
        cout << "OOPS!RECORD NOT FOUND"<<endl;
    fin.close();
}
}

void login::further()
{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<< "\n\n\nFOR MAIN MENU:PRESS[1]"<<endl;
    cout<< "TO LOGIN:PRESS[2]";
    cout<< "\nENTER YOUR CHOICE: ";
    cin>>o;
    switch(o)
    {
    case 1:
        mainpage();
        break;
    case 2:
        searchdata3();
        break;
    default:
        cout<< "\nINVALID OPTION SELECTED";
    }

}

void login::mainpage()
{
    system("cls");
    cout<<setw(60)<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    cout<< "WELCOME TO DASHBOARD"<<endl;
    cout<< "                                       ----------------------";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    cout<<setw(50)<<endl;
    cout<< "1.REGISTER";
    cout<<setw(47)<<endl;
    cout<< "2.LOGIN";
    cout<<setw(57)<<endl;
    cout<< "3.FORGOT PASSWORD";
    cout<<setw(57)<<endl;
    cout<< "4.FORGOT USERNAME";
    cout<<setw(58)<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<< "ENTER YOUR OPTION: ";
    cin>>o;
    switch(o)
    {

   // case 1:

     //    l.getdata();
    //l.store();
    //break;
    case 1:
            searchdata();
            further();
            break;
    case 2:
        searchdata3();
        break;
    case 3:
        searchdata1();
        further();
        break;
    case 4:
        searchdata2();
        further();
        break;




    }


}























int main()
{

    int o;
    login l;
    l.store();
    l.mainpage();


}
