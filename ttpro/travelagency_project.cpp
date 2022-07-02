#include<ctype.h>
#include<string.h>
#include <bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<cwchar>
#include<stdio.h>
#include<iomanip>
#include<iostream>
#include<dos.h>
#include<fstream>
#include<time.h>
#include<ctype.h>
#include<cstdio>
using namespace std;
int atr1,atr2,rtr1,rtr2,ttr1,ttr2;
int fst1,fst2,tst1,tst2,nst1,nst2;
COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
class place
{
    public:
    int places()
{

    int toasspri;
  cout<<"PLEASE CHOOSE YOUR DESTINATION.."<<endl<<endl;
  cout<<"1:Kashmir or Jammu "<<endl;
  cout<<"2:Chandigarh or Gurgaon"<<endl;
  cout<<"3:Amritsar or Ludhiana "<<endl;
  cout<<"4: Shimla or Manali"<<endl;
  cout<<"5:Trivandrum or Kochi "<<endl;
  cout<<"6: Chennai or Bangalore"<<endl;
  cout<<"7:Hyderabad or Nagpur"<<endl;
  cout<<"8: Mumbai or Pune "<<endl;
  cout<<"9:Port blair or Rangat"<<endl;
  cout<<"10: Guwahati"<<endl;
  cout<<"11:Itanagar or Bomdila"<<endl;
  cout<<"12: Patna or Gaya      "<<endl;
  cout<<"13:Calcutta or Darjiling "<<endl;
  cout<<"14: Lucknow or Kanpur   "<<endl;
  cout<<"15:Ahmedabad or Gandhinagar"<<endl;
  cout<<"16: Jaipur or Jodhpur  "<<endl;
  cout<<"17:Bhubneshwar or Cuttack"<<endl;
  cout<<"18: Bhopal or Gwalior "<<endl;
  cout<<"Enter (1-18) to Reserve ..."<<endl;
  cin>>toasspri;
  return toasspri;
}
};
class pricing
{
    public:
  void assignprice()
{
    place p1;
   system("cls");
   int price1=0;
   price1=p1.places();
   switch(price1)
   {
   case 1:
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	break;
 case 2:
     atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 3:
     atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 4:
      atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 5:
     atr1=15000;atr2=12000;ttr1=3500;ttr2=2000;rtr1=1200;rtr2=700;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 6:
     atr1=15000;atr2=12000;ttr1=3500;ttr2=2000;rtr1=1200;rtr2=700;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 7:
      atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 8:
     atr1=11000;atr2=9000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	fst1=5000;fst2=4000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 9:
     atr1=15000;atr2=12000;ttr1=2000;ttr2=1000;rtr1=0;rtr2=0;
	fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 10:
      atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 11:
      atr1=11000;atr2=9000;ttr1=4500;ttr2=2000;rtr1=800;rtr2=600;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 12:
     atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 13:
     atr1=12000;atr2=10000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	 fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	 break;
 case 14:
     atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	 fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	 break;
 case 15:
     atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=4000;fst2=2000;tst1=2000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 16:
     atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 17:
     atr1=13000;atr2=10000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 18:
     atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
   }
}
};
class customer
{
protected:
     int customer_id;
      char customer_name[30],customer_mobile[10],customer_email[20],customer_address[50];

};
class hotel:public customer
{
  private:
   int not1,not2,nor,top,nod,noc,kor1=0,kor2=0,top2; //DATA MEMBERS IN PRIVATE AREA
 friend class pricing;
 //payment *p1;
 char destination[30];
 char ho[30];
 char trans[30];
 char flag1;
 char flag2;
 float price=14000;
  public:
      hotel(){kor1=0;kor2=0;price=14000;}
      pricing pr;
  void getdata();
  void write();
  void showdata();
  void showhotelrec();
  void delhotelrec();
  void searchhotrec();
  void edithoteldata();
  void transferhoteldata1();
};

void hotel::getdata()
{
system("cls");
  flag2='N';

   system("cls");
   cout<<"\t\t\tPlease Enter Information For Hotel Reservation\n\n";
   cout<<"\t\t\tPlease enter the choice of your hotel......\n\n";
   cout<<"\t\t\t1: 5 Star\n";
   cout<<"\t\t\t2: 3 Star\n";
   cout<<"\t\t\t3: Normal\n"<<endl;
   cout<<"......";
   cin>>top;

   //calpayment1(p1);

   system("cls");
   cout<<"PLEASE FILL IN THE DETAILS ...";
   cout<<endl;
   cout<<"HOTEL RESERVATION FORM";
   cout<<endl;
   cout<<"Guestid:";
   cin>>customer_id;
   cout<<"Name: ";
   cin>>customer_name;
   cout<<"Address: ";
   cin>>customer_address;
   cout<<endl;
   pr.assignprice();
   cout<<"Name of Hotel: ";
   cin>>ho;
   cout<<"No. of days to stay: ";
   cout<<endl;
   cin>>nod;
   cout<<endl;
   cout<<"type of rooms u want to reserve";
   cout<<endl;
   cout<<"1.DELUXE";
   cout<<"2.NON DELUXE";
   int a;
   cin>>a;
   switch(a)
   {
      case 1:
          cout<<"NUMBERS OF DELUX ROOMS REQUIRED:\n";
          cin>>kor1;
          break;
      case 2:
          cout<<"NUMBERS OF NON DELUX ROOMS REQUIRED:\n";
          cin>>kor2;
          break;
   }

   if(top==1)
    price=(fst1*kor1*nod)+(fst2*kor2*nod);
  else
    if(top==2)
      price=(tst1*kor1*nod)+(tst2*kor2*nod);
    else
      if(top==3)
	 price=(nst1*kor1*nod)+(nst2*kor2*nod);

}


void hotel::write()
{


   fstream file1;
    file1.open("hotel.dat",ios::binary|ios::out|ios::app);
    file1.write((char*)this,sizeof(*this));
    file1.close();
}

void hotel::showdata()
{
system("cls");
 system("color 90");
   cout<<"\t\t\t\t\t   Hotel     Reservation\t\t\t\t\t  ";
   cout<<endl<<endl;
   cout<<"\t\t\t\t\t-----------------------\t\t\t\t\t\t";
   cout<<customer_id;
   cout<<endl<<endl;
   cout<<"Name:"<<customer_name;
   cout<<endl<<endl;
   cout<<"Address:"<<customer_address;
   cout<<endl<<endl;
   cout<<"Name of the hotel:  "<<ho;
   cout<<endl<<endl;
   cout<<"No. of Days to stay: "<<nod;
   cout<<endl<<endl;
   cout<<"No. of DELUXE rooms reserved: "<<kor1;
   cout<<endl<<endl;
   cout<<"No. of NON-DELUXE rooms reserved: "<<kor2;
   cout<<endl<<endl;
   cout<<"Your Reservations have been done"<<endl<<endl;
   cout<<"Please pay the Amount!!!"<<endl<<endl;
   cout<<"Amount: Rs."<<price;

}
void hotel::delhotelrec()
{
system("cls");
system("color F5");

    int gid;
    cout<<"Enter id of person whose record you want  to delete"<<endl;
    cin>>gid;

    fstream  file1,file2;
    int del=0;

    file1.open("hotel.dat",ios::binary | ios::in);
    file2.open("temp.dat",ios::binary | ios::out);

     while(file1.read ((char*)this,sizeof (*this)))
     {
       if (gid!=customer_id)
       file2.write((char*)this,sizeof (*this));
       else
       del++;
     }
       if(del!=0)
       {
          cout<<endl<<" Record Deleted......................................................";
          flag2='Y';
       }
       else
       cout<<endl<<"Record not found..";
       file1.close();
       file2.close();
       remove("hotel.dat");
       rename("temp.dat","hotel.dat");

}


void hotel::searchhotrec()
{
  system("cls");
system("color B0");
   char sname[20];
     cout<<"enter the Name to search for..";
     cout<<endl<<endl;
     cin>>sname;

   fstream file1;
   file1.open("hotel.dat",ios::binary | ios::in);

   int srch=0;

     while(!file1.eof())
     {
       file1.read((char*)this,sizeof(*this));
       if(!strcmp(customer_name,sname))
       {
         srch++;
         showdata();
       }
     }

       if(srch==0)
       cout<<"No Record Exists";

    file1.close();

}
void hotel::edithoteldata()
{

  system("cls");
  system("color C7");
  char ename[30];int ede=0;
  cout<<"Enter Name to Edit Record for...";
  cout<<endl<<endl;
  cin>>ename;

fstream file1,fout;
file1.open("hotel.dat",ios::binary | ios::in) ;
fout.open("temp1.dat",ios::binary | ios::out ) ;

 while(file1.read((char*)this,sizeof(*this)))
  {
   if (strcmp (ename,customer_name)==0)
   {
    getdata();
    ede++;
   }
   fout.write((char*)this,sizeof (*this));
  }
  if(ede==0)
  {
     cout<<"RECORD DOESNT EXIST!!!!";
  }
file1.close();
fout.close();

transferhoteldata1();                             //TO TRANSFER EDITED HOTEL RECORD
}

void hotel::transferhoteldata1()
{
fstream fout,file1;

fout.open("temp1.dat",ios::binary | ios::in);
file1.open("hotel.dat",ios::binary | ios::out);

  while(fout.read((char*)this,sizeof(*this)))
  file1.write((char*)this,sizeof (*this));

fout.close();
file1.close();
}



void hotel::showhotelrec()
{
    system("cls");
    system("color 06");
    cout<<"\t\t\t\t\t\t\t SHOWING THE RESERVATION \t\t\t\t\t";
    cout<<endl<<endl;
    if(flag2=='Y')
     cout<<"RECORD WITH GUESTID:"<<customer_id << " HAS BEEN DELETED"<<endl;
    ifstream file1;
    file1.open("hotel.dat",ios::in|ios::binary);
    file1.read((char*)this,sizeof(*this));
    while(!file1.eof()){
        showdata();
        file1.read((char*)this,sizeof(*this));
    }

    file1.close();
}




//////////// transport class/////////////





class transport:public customer
{
    char destination[100];
    char trans[10];
    int not1,not2,flag2,top2,price2=12000;
    friend class pricing;
    pricing pr1;
public:
  void res();
  void write1();
  void show();
  void del();
  void searchrec();
  void editdata();
  void showrec();
  void transferdata();

};








   void transport::res()
    {

          system("cls");
          system("color 60");
        cout<<"\t\t\t\tPlease Enter Information For Transport Reservation \n -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- \n";
        cout<<"\t\t\t\tPlease enter the choice of your mode of transportaion......\n\n";
        cout<<"\t\t1: by Air\n";
        cout<<"\t\t2: by Train\n";
        cout<<"\t\t3: by Road\n"<<endl;
        cout<<"......"<<endl;
        cin>>top2;
        if(top2==1)
        strcpy(trans,"By Air");
        if(top2==2)
        strcpy(trans,"By Train");
         if (top2==3)
         strcpy(trans,"By Road");
         system("cls");

        cout<<"\n\nPLEASE FILL IN THE DETAILS ..."<<"\n-----------------------------------------------------------------\n";
        cout<<"\n\n\n\tTRANSPORT RESERVATION FORM\n\n";
        cout<<"\n\tCUSTOMER ID:";
        cin>>customer_id;
        cout<<"\n\tName: ";
        cin>>customer_name;
        cout<<"\n\tAddress: ";
        cin>>customer_address;
        pr1.assignprice();

        cout<<"\n\tType of Tickets to be Reserved(1/0)" ;
        cout<<"\n\tExecutive: "; cin>>not1;
        cout<<"\n\tEconomy: ";cin>>not2;

        if(top2==1)
        price2=(atr1*not1)+(atr2*not2);
       else
       if(top2==2)
       price2=(ttr1*not1)+(ttr2*not2);
      else
        if(top2==3)
         price2=(rtr1*not1)+(rtr2*not2);
    }
    void transport::write1()
    {

        fstream file3;
        file3.open("trfile.dat",ios::out|ios::app|ios::binary);
        file3.write((char*)this,sizeof(*this));
        file3.close();
    }
void transport::show()
{

    system("cls");
    system("color 90");
    cout<<"\nTransport   Reservation \n "<<endl;
    cout<<"-----------------------";
    cout<<"\nCUSTOMER ID:"<<customer_id<<endl;
    cout<<"\nName:"<<customer_name<<endl;
    cout<<"\nAddress:"<<customer_address<<endl;
    cout<<"\nMode of transportation:    "<<trans<<endl;
    cout<<"\nNo. of EXECUTIVE class tickets reserved: "<<not1<<endl;
    cout<<"\nNo. of ECONOMY   class tickets reserved: "<<not2<<endl;
    cout<<"\nYour Reservations have been done Please pay the Amount!!!"<<endl;
    cout<<"\nAmount: Rs."<<price2<<endl;

}
void transport::del()
{
system("cls");
system("color F5");
  int tid;
  cout<<"\n\t\tEnter id of person whose record you want to delete"<<endl;
  cin>>tid;

  fstream file3,file4;
  int dele=0;
  file3.open("trfile.dat",ios::binary|ios::in);
  file4.open("tempe.dat",ios::binary|ios::out);
  while(file3.read((char*)this,sizeof(*this)))
  {
      if(tid!=customer_id)
        file4.write((char*)this,sizeof(*this));
      else
        dele++;

  }
       if(dele!=0)\
       {
          cout<<endl<<"Record Deleted...";
          flag2='Y';
       }
       else
       cout<<endl<<"Record not found..";
       file3.close();
       file4.close();
       remove("trfile.dat");
       rename("tempe.dat","trfile.dat");

}


void transport::searchrec()
{
system("cls");
system("color B0");
 char sename[20];
 cout<<"\n\t\t\tEnter Name to search for..";
 cout<<endl<<endl;
 cin>>sename;
    fstream file3;
    file3.open("trfile.dat",ios::binary | ios::in);
    int serch=0;
    while( !file3.eof())
    {
	   file3.read((char*)this,sizeof(*this));
	   if(!strcmp(customer_name,sename))
       {
           serch++;
           show();

       }
    }
    if(serch==0)
        cout<<"No record exists";

    file3.close();
}
void transport ::editdata()
{
system("cls");
system("color C7");
  char edname[30];
  int ede1=0;
  cout<<"Enter Name to Edit Record for...";
  cout<<endl<<endl;
  cin>>edname;
  fstream file3,file5;
  file3.open("trfile.dat",ios::binary | ios::in) ;
  file5.open("tempnew.dat",ios::binary | ios::out ) ;
   while(file3.read((char*)this,sizeof(*this)))
  {
    if (strcmp (edname,customer_name)==0)
   {
    res();
    ede1++;
   }
   file5.write((char*)this,sizeof (*this));
  }
if(ede1==0)
{
    cout<<"RECORD DOESNT EXIST!!!!";
}

file3.close();
file5.close();
 transferdata();
}
void transport::transferdata()
{
fstream file3,file5;
file5.open("tempnew.dat",ios::binary | ios::in);
file3.open("trfile.dat",ios::binary | ios::out);
     while(file5.read((char*)this,sizeof(*this)))
     file3.write((char*)this,sizeof (*this));
file5.close();
file3.close();
}
void transport::showrec()
{
 system("cls");
 system("color 06");
    cout<<"\t\t\t\t\t\t\t SHOWING THE transport1 RESERVATION \t\t\t\t\t";
    cout<<endl<<endl;
    if(flag2=='Y')
        cout<<"RECORD WITH GUESTID:"<<customer_id<<"HAS BEEN DELETED"<<endl;
    ifstream file3;
    file3.open("trfile.dat",ios::in|ios::binary);
    file3.read((char*)this,sizeof(*this));
    while(!file3.eof())
    {
        show();
        file3.read((char*)this,sizeof(*this));
    }

    file3.close();
}





//calling class
class base
{
public:
    hotel ho;
    transport tr;
    int option;
public:
    void call();
};
void base::call()
{

    system("cls");
    int option=0;

    int no;
    int choice;
    while(option!=6)
         {
             CONSOLE_FONT_INFOEX cfi;
             cfi.cbSize = sizeof(cfi);
             cfi.nFont = 0;
             cfi.dwFontSize.X = 0;                   // Width of each character in the font
             cfi.dwFontSize.Y = 24;                  // Height
             cfi.FontFamily = FF_DONTCARE;
             cfi.FontWeight = FW_NORMAL;
             wcscpy(cfi.FaceName, L"Times new roman"); // Choose your font
             SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
         cout<<"\n\t\t\tH O W   C A N   I   H E L P   Y O U\n";
         cout<<"\n\t\t1.Make a reservation";
         cout<<"\n\t\t2.View a record";
         cout<<"\n\t\t3.Delete a record";
         cout<<"\n\t\t4.Search for a record";
         cout<<"\n\t\t5.Edit a  recor d";
         cout<<"\n\t\t6: Exit...     ";
         cin>>option;
        switch(option)
        {

            case 1 :
                 cout<<"\n\n\t\tEnter your choice\n";
                 cout<<"\n\t\t1.hotel reservation"<<endl;
                 cout<<"\n\t\t2.transport reservation"<<endl;
                 cin>>choice;
                 switch(choice)
                 {

                    case 1:
                       ho.getdata();
                       ho.write();
                       break;
                     case 2:
                        tr.res();
                        tr.write1();
                       break;

                 }
                 break;

          case 2:
                cout<<"\n\n\t\tEnter your choice\n";
                 cout<<"\n\t\t1.hotel reservation"<<endl;
                 cout<<"\n\t\t2.transport reservation"<<endl;
                 cin>>choice;
                 switch(choice)
                 {

                    case 1:
                       ho.showhotelrec();
                       break;
                    case 2:
                       tr.showrec();
                       break;
                  }
                    break;
            case 3:
                cout<<"\n\n\t\tEnter your choice\n";
                 cout<<"\n\t\t1.hotel reservation"<<endl;
                 cout<<"\n\t\t2.transport reservation"<<endl;
                 cin>>choice;
                 switch(choice)
                 {

                    case 1:
                       ho.delhotelrec();
                       break;
                    case 2:
                       tr.del();
                       break;
                  }
                    break;
            case 4:

                cout<<"\n\n\t\tEnter your choice\n";
                 cout<<"\n\t\t1.hotel reservation"<<endl;
                 cout<<"\n\t\t2.transport reservation"<<endl;
                 cin>>choice;
                 switch(choice)
                 {

                    case 1:
                       ho.searchhotrec();
                       break;
                    case 2:
                       tr.searchrec();
                       break;
                  }
                    break;
          case 5:
              cout<<"\n\n\t\tEnter your choice\n";
                 cout<<"\n\t\t1.hotel reservation"<<endl;
                 cout<<"\n\t\t2.transport reservation"<<endl;
                 cin>>choice;
                 switch(choice)
                 {

                    case 1:
                       ho.edithoteldata();
                       break;
                    case 2:
                       tr.editdata();
                       break;
                  }
                    break;
        case 6:
            exit(0);
            break;


        }
        cout<<"enter any number";
        cin>>no;
        system("cls");
         }
}

int main()
{
    int a;
 for(a=50;a>30;a--)
  {
  system("cls");
  system("color 57");
  gotoxy(25,10);cout<<"Welcome to the TRAVEL AGENCY";
  Sleep(50);
  }
 for(a=42;a<52;a++)
  {
  gotoxy(27,18);cout<<"Please Wait";
  gotoxy(a,18);cout<<".";
  Sleep(400);
  }
system("cls");
system("color A0");
for(int j=0;j<10;j++)
{
system("cls");
gotoxy(j,6); cout<<"        ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
gotoxy(j,7); cout<<"            ÜÜÜÜÜÜÜ ÜÜÜÜÜÜ ÜÜÜÜÜÜ";
gotoxy(j,8); cout<<"               Û    Û    Û Û    Û";
gotoxy(j,9); cout<<"               Û    ÛÜÜÜÛ  ÛÜÜÜÜÛ";
gotoxy(j,10);cout<<"               Û    Û Û    Û    Û";
gotoxy(j,11);cout<<"               Û    Û  ÛÛ  Û    Û";

gotoxy(51-j,6); cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ \n\r";
gotoxy(51-j,7); cout<<" Ü    Ü ÜÜÜÜÜÜ Ü   \n\r";
gotoxy(51-j,8); cout<<" Û    Û Û      Û    \n\r";
gotoxy(51-j,9); cout<<" Û    Û ÛÜÜÜ   Û    \n\r";
gotoxy(51-j,10);cout<<"  Û  Û  Û      Û    \n\r";
gotoxy(51-j,11);cout<<"   ÛÛ   ÛÛÛÛÛÛ ÛÛÛÛ \n\r\n\n";

gotoxy(j,12);cout<<"                          ÜÜÜÜÜÜÜ Ü    Ü";
gotoxy(j,13);cout<<"                             Û    ÛÛ   Û";
gotoxy(j,14);cout<<"                             Û    Û Û  Û";
gotoxy(j,15);cout<<"                             Û    Û  Û Û";
gotoxy(j,16);cout<<"                          ÜÜÜÛÜÜÜ Û   ÛÛ";
gotoxy(j,17);cout<<"                     ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";

gotoxy(58-j,12);cout<<" ÜÜÜÜÜÜ ÜÜÜÜÜÜÜ ÜÜÜÜÜÜ \n\r";
gotoxy(58-j,13);cout<<" Û    Û    Û    Û    Û \n\r";
gotoxy(58-j,14);cout<<" Û    Û    Û    ÛÜÜÜÜÛ \n\r";
gotoxy(58-j,15);cout<<" Û    Û    Û    Û    Û \n\r";
gotoxy(58-j,16);cout<<" ÛÜÜÜÜÛ ÜÜÜÛÜÜÜ Û    Û \n\r";
gotoxy(58-j,17);cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ \n\r";
int x;


Sleep(80);
}
gotoxy(25,25);
cout<<"press any key to continue...";
getch();

    base b;
    b.call();
}
