#include <bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<iostream>
#include<dos.h>
#include<fstream>
#include<time.h>
#include<ctype.h>
#include<string>
using namespace std;
class base
{
public:
    string name;
    string destination;
    string address;
    int toggle;
public:
    virtual void res();
 virtual void show();                         // transport class
 virtual void viewrec();
 virtual void showrec();                     //MEMBER FUNTIONS FOR TRANSPORT RESER.
 virtual void delrec();
 virtual void searchrec();
 virtual void transferdata();
 virtual void editdata();
 virtual void transferdata1();
}user,user1;


//**********************************************************************************
//*********************TRANSPORT CLASS**********************************************
//****************************************************************************8*88888
class payment
{
	private:
		int fst1,fst2,tst1,tst2,nst1,nst2;
 		int atr1,atr2,ttr1,ttr2,rtr1,rtr2;
	public:
		void assignprice();
};
void payment::assignprice()
{
system("cls");
int toasspri;
  cout<<"PLEASE CHOOSE YOUR DESTINATION..";
  cout<<"1:Kashmir or Jammu                        2:Chandigarh or Gurgaon";
  cout<<"3:Amritsar or Ludhiana                    4: Shimla or Manali";
  cout<<"5:Trivandrum or Kochi                    6: Chennai or Bangalore";
  cout<<"7:Hyderabad or Nagpur                    8: Mumbai or Pune ";
  cout<<"9:Port blair or Rangat                   10: Guwahati";
  cout<<"11:Itanagar or Bomdila                   12: Patna or Gaya      ";
  cout<<"13:Calcutta or Darjiling                 14: Lucknow or Kanpur   ";
  cout<<"15:Ahmedabad or Gandhinagar              16: Jaipur or Jodhpur  ";
  cout<<"17:Bhubneshwar or Cuttack                18: Bhopal or Gwalior ";
  cout<<"Enter (1-18) to Reserve ...";
  cin>>toasspri;
switch(toasspri)
{
 case 1:atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 2:atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 3:atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 4:atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 5:atr1=15000;atr2=12000;ttr1=3500;ttr2=2000;rtr1=1200;rtr2=700;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 6:atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 7:atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 8:atr1=11000;atr2=9000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	fst1=5000;fst2=4000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 9:atr1=15000;atr2=12000;ttr1=2000;ttr2=1000;rtr1=0;rtr2=0;
	fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 10:atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 11:atr1=11000;atr2=9000;ttr1=4500;ttr2=2000;rtr1=800;rtr2=600;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 12:atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 13:atr1=12000;atr2=10000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	 fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	 break;
 case 14:atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	 fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	 break;
 case 15:atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=4000;fst2=2000;tst1=2000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 16:atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 17:atr1=13000;atr2=10000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 18:atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
}
}

class transport:public base
{
    int not1,not2,flag2,top2;
    string trans;
    payment *p;
public:


    void calpayment(payment *p1)
    {
        p1->assignprice();//a function of payment class for transport//********************************************************************************
        p=p1;
    }
    void res()
    {
        system("cls");
        flag2='N';
        while(flag2!='Y')
            {
                system("cls");
        cout<<"Please Enter Information For Transport Reservation \n -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- \n";
        cout<<"Please enter the choice of your mode of transportaion......\n\n";
        cout<<"\t\t1: by Air\n";
        cout<<"\t\t2: by Train\n";
        cout<<"\t\t3: by Road\n"<<endl;
        cout<<"......";cin>>top2;
        system("cls");

        calpayment(p);

        system("cls");
        cout<<"\n\nPLEASE FILL IN THE DETAILS ..."<<"\n-----------------------------------------------------------------\n";
        cout<<"\n\n\n\tTRANSPORT RESERVATION FORM\n\n";
        cout<<"\n\tName: ";
        cin>>name;
        cout<<"\n\tAddress: ";
        cin>>address;
        cout<<"\n\tDestination: ";
        cin>>destination;
        cout<<"\n\tMode of Transport: ";
        cin>>trans;
        cout<<"\n\tType of Tickets to be Reserved(1/0)" ;
        cout<<"\n\tExecutive: "; cin>>not1;
        cout<<"\n\tEconomy: ";cin>>not2;
        cout<<"\n\tIs the information correct(y/n)?? "; cin>>flag2;
        flag2=toupper(flag2);
    }
        show();
    }
void show()
{
    if(toggle==1)
        {
            system("cls");
    for(int h=25;h<50;h++)
        {
            cout<<"Please wait while we make the Reservation";
    cout<<"Û";
    Sleep(250);
    }
    toggle=0;
    }
    system("cls");
    cout<<"\nTransport   Reservation \n ";
    cout<<"-----------------------";
    cout<<"\nName:"<<strupr(name);
    cout<<"\nAddress:"<<strupr(address);
    cout<<"\nMode of transportation:    "<<trans<<"   Destination:"<<destination;
    cout<<"\nNo. of EXECUTIVE class tickets reserved: "<<not1;
    cout<<"\nNo. of ECONOMY   class tickets reserved: "<<not2;
    cout<<"\nYour Reservations have been done Please pay the Amount!!!";
    cout<<"\nAmount: Rs."<<setprecision(2)<<price2;
}
void viewtrrec()
{
int option;
 while(option!=5)
 {
  system("cls");
  cout<<"\nTRANSPORT RESERVATION INFORMATION...\n";
  cout<<"\nchoose.....";
  cout<<"\n1: View transport reservation records";
  cout<<"\n2: Delete a particular record";
  cout<<"\n3: Search for a record";
  cout<<"\n4: Edit a record ";
  cout<<"\n5: Exit...     ";
  cin>>option;
  switch(option)
   {
   case 1:showrec();
	  break;
   case 2:delrec();
	  break;
   case 3:searchrec();
	  break;
   case 4:editdata();
	  break;
   }
 }
}
void showrec()
{
fstream file1;
file1.open("transport.dat",ios::binary|ios::in);
 while(file1.read((char*)&user,sizeof (user)))
 user.show();
file1.close();
}
void delrec()
{
system("cls");
  char delname[20];
  cout<<"Enter name to delete record for...";
  gets(delname);
  strupr(delname);
    fstream  file2,file3;
    int dele=0;
    file2.open("transport.dat",ios::binary | ios::in);
    file3.open("temp3.dat",ios::binary | ios::out );
       while(file2.read ((char*)&user,sizeof (user)))
       {
       if ((strcmp(name,delname))!=0)
       file3.write((char*)&user,sizeof (user));
       else
       dele++;
       }
       if(dele!=0)
       cout<<endl<<"                    ...Deleted...";
       else
       cout<<endl<<"                  Record not found..";
       getch();
       file2.close();
       file3.close();
       transferdata();
}
void transferdata()
{
fstream oldfile1,newfile1;
oldfile1.open("temp3.dat",ios::binary | ios::in);
newfile1.open("transport.dat",ios::binary | ios::out);
     while(oldfile1.read((char*)&user,sizeof(user)))
     newfile1.write((char*)&user,sizeof (user));
oldfile1.close();
newfile1.close();
}
void searchrec()
{
system("cls");
 char sename[20];
 cout<<"Enter Name to search for..";
 gets(sename);
 strupr(sename);
    fstream file4;
    file4.open("transport.dat",ios::binary | ios::in);
    int serch=0;
       while(file4.read((char*)&user,sizeof (user)))
       {
	if(strcmp(name,sename)==0)
	{
	serch++;
	user.show();
	}
       }
       if(serch==0)
       cout<<"                       No Record Exists";
       file4.close();
       getch();
}
void editdata()
{
system("cls");
  char edname[30];
  int ede1=0;
  cout<<"Enter Name to Edit Record for...";
  gets(edname);
  strupr(edname);
  fstream file5,file6;
  file5.open("transport.dat",ios::binary | ios::in) ;
  file6.open("temp2.dat",ios::binary | ios::out ) ;
   while(file5.read((char*)&user,sizeof(user)))
  {
   if (strcmp (edname,name)==0)
   {
    res();
    ede1++;
   }
   file6.write((char*)&user,sizeof (user));
  }
if(ede1==0)
{
gotoxy(25,17);cout<<"RECORD DOESNT EXIST!!!!";
}
getch();
file5.close();
file6.close();

transferdata1();                       //TO TRANSFER EDITED TRANSPORT RECORD
}
void transferdata1()
{
fstream oldfile3,newfile3;
oldfile3.open("temp2.dat",ios::binary | ios::in);
newfile3.open("transport.dat",ios::binary | ios::out);
  while(oldfile3.read((char*)&user,sizeof(user)))
  newfile3.write((char*)&user,sizeof (user));
oldfile3.close();
newfile3.close();
}
};




//***********************************
// places class*************************
//*************************************





class places
{
public:
    void nindia();//north india
    void sindia();// south india
    void eindia();// east india
    void windia();// west india
    void cindia();//central india
    places()
    {
        int des;
       system("cls");
       cout<<"Choose Destination";
       cout<<"ษอออออออออออออออออออออออออออออออป "<<endl;
       cout<<"บ      1.NORTH INDIA            บ "<<endl;
       cout<<"บ      2.SOUTH INDIA            บ "<<endl;
       cout<<"บ      3.EAST INDIA             บ "<<endl;
       cout<<"บ      4.WEST INDIA             บ "<<endl;
       cout<<"บ      5.CENTRAL INDIA          บ "<<endl;
       cout<<"บ      6.EXIT                   บ "<<endl;
       cout<<"บ  ??ENTER CHOICE>>.....?       บ "<<endl;
       cout<<"ศอออออออออออออออออออออออออออออออะ "<<endl;
    }
       cin>>des;
int des1;
if (des!=6)
{
 switch(des)
 {
  case 1:
	  system("cls");
	  cout<<"Where do you want go......";
	  cout<<"ษอออออออออออออออออออออออออออออออป "<<endl;
	  cout<<"บ      1.JAMMU & KASHMIR        บ "<<endl;
	  cout<<"บ      2.HARYANA                บ "<<endl;
	  cout<<"บ      3.PUNJAB                 บ "<<endl;
	  cout<<"บ      4.HIMACHAL PRADESH       บ "<<endl;
	  cout<<"บ      5.EXIT                   บ "<<endl;
	  cout<<"บ                               บ "<<endl;
	  cout<<"บ  ??ENTER CHOICE>>......       บ "<<endl;
	  cout<<"ศอออออออออออออออออออออออออออออออะ "<<endl;


	  cin>>des1;
	  if(des1!=5)
	  nindia(des1);
	  break;

case 2:  system("cls");
	  cout<<"Where do you want go......";
	  cout<<"ษอออออออออออออออออออออออออออออออป "<<endl;
	  cout<<"บ      1.KERELA                 บ "<<endl;
	  cout<<"บ      2.TAMIL NADU             บ"<<endl;
	  cout<<"บ      3.ANDHRA PRADESH         บ "<<endl;
	  cout<<"บ      4.MAHARASHTRA            บ "<<endl;
	  cout<<"บ      5.ANDAMAN AND NICOBAR    บ "<<endl;
	  cout<<"บ      6.EXIT                   บ "<<endl;
	  cout<<"บ  ??ENTER CHOICE>>......       บ "<<endl;
	  cout<<"ศอออออออออออออออออออออออออออออออะ "<<endl;


	 cin>>des1;
	if(des1!=6)
	sindia(des1);
	break;

case 3: system("cls");
	cout<<"Where do you want go......";
	cout<<"ษอออออออออออออออออออออออออออออออป "<<endl;
	cout<<"บ      1.ASSAM                  บ "<<endl;
	cout<<"บ      2.ARUNACHAL PRADESH      บ"<<endl;
	cout<<"บ      3.BIHAR                  บ "<<endl;
	cout<<"บ      4.WEST BENGAL            บ "<<endl;
	cout<<"บ      5.UTTAR PRADESH          บ "<<endl;
	cout<<"บ      6.EXIT                   บ "<<endl;
	cout<<"บ  ??ENTER CHOICE>>......       บ "<<endl;
	cout<<"ศอออออออออออออออออออออออออออออออะ "<<endl;


	cin>>des1;
	if(des1!=6)
	eindia(des1);
	break;

case 4:

	system("cls");
	cout<<"Where do you want go......";
	cout<<"ษอออออออออออออออออออออออออออออออป "<<endl;
	cout<<"บ                               บ "<<endl;
	cout<<"บ          1.GUJARAT            บ"<<endl;
	cout<<"บ          2.RAJASTHAN          บ "<<endl;
	cout<<"บ          3.EXIT               บ "<<endl;
	cout<<"บ                               บ "<<endl;
	cout<<"บ                               บ "<<endl;
	cout<<"บ  ??ENTER CHOICE>>......       บ "<<endl;
	cout<<"ศอออออออออออออออออออออออออออออออะ "<<endl;


	cin>>des1;
	if(des1!=3)
	windia(des1);
	break;

case 5:
	system("cls");
	cout<<"Where do you want go......";
	cout<<"ษอออออออออออออออออออออออออออออออป "<<endl;
	cout<<"บ                               บ "<<endl;
	cout<<"บ                               บ"<<endl;
	cout<<"บ         1.ORISSA              บ "<<endl;
	cout<<"บ         2.MADHYA PRADESH      บ "<<endl;
	cout<<"บ         3.EXIT                บ "<<endl;
	cout<<"บ                               บ "<<endl;
	cout<<"บ  ??ENTER CHOICE>>......       บ "<<endl;
	cout<<"ศอออออออออออออออออออออออออออออออะ "<<endl;

	}
	cin>>des1;
	if(des1!=3)
	cindia(des1);
	break;

 }
}
    }
};
void places::nindia(int ndes)
{
switch(ndes)
{
 case 1:system("cls");
	textcolor(RED);
       textbackground(YELLOW);
cout<<"Jammu and Kashmir ";
cout<<"------------------";
cout<<"Places To Visit::        -Kashmir-    -Jammu- "<<"\n";
cout<<"Transportation Available::(from delhi)"<<"\n";
cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings         "<<"\n";
cout<<"  BY Air   kash.      041 I.A.     12000Rs.       9000Rs.  13:50(d)-15:30(a)"<<"\n";
cout<<"  BY Air   jam.       042 I.A.     12000Rs.       9000Rs.   8:00(d)- 9:40(a)"<<"\n";	cout<<"  BY Train kash.   Kashmir Express  2500Rs.       2000Rs.  13:00(d)-18:00(a)"<<endl;
cout<<"  By Train jam.    Jammu Mail       2500Rs.       2000Rs.  15:00(d)-16:30(a)"<<"\n";
cout<<"  By Road  kash.      Bus            700Rs.        500Rs.  12:00(d)-20:00(a)"<<"\n";
cout<<"  By Road  jam.       Bus            700Rs.        500Rs.  14:00(d)-15:00(a)"<<"\n";
cout<<"Accomodation Available::"<<endl;
cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<"\n";
cout<<"    5      kash        Kashmir                     5000Rs      3000Rs      "<<"\n";
cout<<"    5      jam         holiday                     5000Rs.     3000Rs.     "<<"\n";	cout<<"    3      kash         queen                      3000Rs.     1500Rs.     "<<endl;
cout<<"    3      jam          passenger                  3000Rs.     1500Rs.     "<<"\n";
cout<<"   normal  kash         rest                       1000Rs.     500Rs.      "<<endl;
cout<<"   normal  jam          guest                      1000Rs.     500Rs.      "<<endl;
cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";

    atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
    fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
    opening2();
    break;

case 2:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
cout<<"     HARYANA";
cout<<"------------------";
cout<<"Places To Visit::         -Chandigarh-    -Gurgaon- "<<endl;
cout<<"Transportation Available::(from delhi)"<<endl;
cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
cout<<"  BY Air   chan.      051 I.A.     10000Rs.       8000Rs.  12:50(d)-13:30(a)"<<endl;
cout<<"  BY Air   chan.      052 I.A.     10000Rs.       8000Rs.   7:00(d)- 7:40(a)"<<endl;
cout<<"  BY Train chan.   Haryana Express  1500Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
cout<<"  By Train gur.    Punjab Mail      1500Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
cout<<"  By Road  chan.      Bus            300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
cout<<"  By Road  gur.       Bus            300Rs.        200Rs.  14:00(d)-15:00(a)"<<endl;
cout<<"Accomodation Available::"<<endl;
cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
cout<<"    5      chan         taj                        5000Rs      3000Rs      "<<endl;
cout<<"    5      gur         broadway                    5000Rs.     3000Rs.     "<<endl;
cout<<"    3      chan         king                       3000Rs.     1500Rs.     "<<endl;
cout<<"    3      gur          resort                     3000Rs.     1500Rs.     "<<endl;
cout<<"   normal  chan         sarai                      1000Rs.     500Rs.      "<<endl;
cout<<"   normal  gur          star                       1000Rs.     500Rs.      "<<endl;
cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
    atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
    fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
    opening2();
    break;

case 3:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
cout<<"     PUNJAB";
cout<<"------------------";
cout<<"Places To Visit::         -Amritsar-    -Ludhiana- "<<endl;
cout<<"Transportation Available::(from delhi)"<<endl;
cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
cout<<"  BY Air   amr.      051 I.A.       8000Rs.       6000Rs.  12:50(d)-13:30(a)"<<endl;
cout<<"  BY Air   lud.      052 I.A.       8000Rs.       6000Rs.   5:00(d)- 5:40(a)"<<endl;
cout<<"  BY Train amr.   Haryana Express   1200Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
cout<<"  By Train lud.    Punjab Mail      1200Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
cout<<"  By Road  amr.      Bus            300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
cout<<"  By Road  lud.      Bus            300Rs.        200Rs.  14:00(d)-15:00(a)"<<endl;
cout<<"Accomodation Available::"<<endl;
cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
cout<<"    5      amr             Nanda                   5000Rs      3000Rs      "<<endl;
cout<<"    5      lud            Shiraz                   5000Rs.     3000Rs.     "<<endl;
cout<<"    3      amr            Amaitas                  3000Rs.     1500Rs.     "<<endl;
cout<<"    3      lud            Gulmor                   3000Rs.     1500Rs.     "<<endl;
cout<<"   normal  amr            salam                    1000Rs.     500Rs.      "<<endl;
cout<<"   normal  lud            stars                    1000Rs.     500Rs.      "<<endl;
cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 4:system("cls");
       textcolor(YELLOW);
       textbackground(BLUE);
       gotoxy(25,1);cout<<" HIMACHAL PRADESH";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Shimla-    -Manali- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   shi.      151 I.A.     10000Rs.       8000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   man.      152 I.A.     10000Rs.       8000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train shi.   Himachal Express  2000Rs.       1000Rs.  13:00(d)-19:00(a)"<<endl;
       cout<<"  By Train man.    kalka Mail       2000Rs.       1000Rs.  14:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  shi.      Bus            800Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  man.      Bus            800Rs.        500Rs.  14:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      shi            chamba                   4000Rs      3000Rs      "<<endl;
       cout<<"    5      man           chanakya                  4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      shi           geetanjali                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      man           parkview                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  shi           guesthouse                 800Rs.     500Rs.      "<<endl;
       cout<<"   normal  man           mountview                  800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;
}
}


/**********************************************
FUNTION USED TO DISPLAY SOUTH-INDIA INFORMATION.
**********************************************/
void places::sindia(int sdes)
{
switch(sdes)
{
case 1:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"      KERELA ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Trivandram-    -Kochi- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   tri.       141 I.A.     15000Rs.       12000Rs.  13:50(d)-16:30(a)"<<endl;
       cout<<"  BY Air   koc.       142 I.A.     15000Rs.       12000Rs.   8:00(d)-11:40(a)"<<endl;
       cout<<"  BY Train tri.   Kerela Express    3500Rs.       2000Rs.  06:00(d)-18:00(a)"<<endl;
       cout<<"  By Train koc.    Jammu Mail       3500Rs.       2000Rs.  05:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  tri.      Bus           1200Rs.        700Rs.  05:00(d)-22:00(a)"<<endl;
       cout<<"  By Road  koc.      Bus           1200Rs.        700Rs.  05:00(d)-23:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      tri         Manor                       5000Rs      3000Rs      "<<endl;
       cout<<"    5      koc         holiday                     5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      tri          South park                 3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      koc          passenger                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  tri          nest                       1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  koc          Jas                        1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=15000;atr2=12000;ttr1=3500;ttr2=2000;rtr1=1200;rtr2=700;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"    TAMIL NADU";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Chennai-    -Bangalore- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Che.       181 I.A.     12000Rs.       10000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Ban.       182 I.A.     12000Rs.       10000Rs.   7:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Che.    Madras Express    2500Rs.       1500Rs.  08:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Ban.    Madurai Mail      2500Rs.       1500Rs.  09:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Che.       Bus            800Rs.        500Rs.  05:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Ban.       Bus            800Rs.        500Rs.  06:00(d)-22:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      che          taj                        5000Rs      3000Rs      "<<endl;
       cout<<"    5      ban         roadway                     5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      che          king                       2500Rs.     1500Rs.     "<<endl;
       cout<<"    3      ban          resort                     2500Rs.     1500Rs.     "<<endl;
       cout<<"   normal  che          salam                      1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  ban          hoshu                      1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=12000;atr2=10000;ttr1=2500;ttr2=1500;rtr1=800;rtr2=500;
       fst1=5000;fst2=3000;tst1=2500;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 3:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"  ANDHRA PRADESH";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Hyderabad-    -Nagpur- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Hyd.      081 I.A.       9000Rs.       7000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Nag.      082 I.A.       9000Rs.       7000Rs.   5:00(d)- 5:40(a)"<<endl;
       cout<<"  BY Train Hyd.   hyderabad Express 1200Rs.       1000Rs.  08:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Nag.    Andhra Mail      1200Rs.       1000Rs.  09:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Hyd.      Bus            700Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Nag.      Bus            700Rs.        500Rs.  06:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Hyd            Palace                   5000Rs      3000Rs      "<<endl;
       cout<<"    5      Nag            Lodge                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Hyd            Siddharth                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Nag            Yatri                    3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Hyd            salem                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Nag            Parklane                 1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 4:system("cls");
       textcolor(RED);
       textbackground(GREEN);
       gotoxy(25,1);cout<<"    MAHARASTRA";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Mumbai-    -Pune- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Mum.      351 I.A.     11000Rs.       9000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Pun.      352 I.A.     11000Rs.       9000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Mum.   Rajdhani Express 2000Rs.       1000Rs.  10:00(d)-19:00(a)"<<endl;
       cout<<"  By Train Pun.    Pune Mail       2000Rs.       1000Rs.  10:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  Mum.      Bus            800Rs.        500Rs.  09:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Pun.      Bus            800Rs.        500Rs.  09:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Mum            Centaur                  5000Rs      4000Rs      "<<endl;
       cout<<"    5      Pun           Holiday inn               5000Rs.     4000Rs.     "<<endl;
       cout<<"    3      Mum            Clarks                   3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Pun           seaview                   3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Mum           guesthouse                800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Pun           niceview                  800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=11000;atr2=9000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=5000;fst2=4000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;

case 5:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"ANDAMAN AND NICOBAR";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Port Blair-    -Rangat- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   P.b.      151 I.A.     15000Rs.       12000Rs.  12:30(d)-16:30(a)"<<endl;
       cout<<"  BY Air   Ran.      152 I.A.     15000Rs.       12000Rs.   6:50(d)- 9:40(a)"<<endl;
       cout<<"  BY Ship  P.b.      Ship         2000Rs.       1000Rs.  13:00(d)-19:00(a)"<<endl;
       cout<<"  By Ship  Ran.      Ship         2000Rs.       1000Rs.  14:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  P.b.      N.a.            "<<endl;
       cout<<"  By Road  Ran.      N.a.            "<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      P.b.            chamba                   4000Rs      3000Rs      "<<endl;
       cout<<"    5      Ran            chanakya                  4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      P.b.           geetanjali                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Ran            parkview                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  P.b.           guest                     800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Ran            nanny                     800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=15000;atr2=12000;ttr1=2000;ttr2=1000;rtr1=0;rtr2=0;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;
}
}


/**********************************************
FUNTION USED TO DISPLAY EAST-INDIA INFORMATION.
**********************************************/
void places::eindia(int edes)
{
switch(edes)
{
case 1:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"      ASSAM ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Guwahati-     "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Guw.        045 I.A.       12000Rs.    9000Rs.   11:50(d)-15:30(a)"<<endl;
       cout<<"  BY Air   Guw.        045 I.A.       12000Rs.    9000Rs.   6:00(d)- 9:40(a)"<<endl;
       cout<<"  BY Train Guw.      Assam Express    2500Rs.     2000Rs.   08:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Guw.      Guwahati Mail    2500Rs.     2000Rs.   09:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  Guw.         Bus            700Rs.      500Rs.   12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Guw.         Bus            700Rs.      500Rs.   14:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Guw          Ashoka                     5000Rs      3000Rs      "<<endl;
       cout<<"    5      Guw          Regency                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Guw          Kuber                      3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Guw          Nandan                     3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Guw          Home                       1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Guw          Corneto                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<" ARUNACHAL PRADESH";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Itanagar-    -Bomdila- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Ita .      751 I.A.        11000Rs.       9000Rs.  07:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Bom.       752 I.A.        11000Rs.       9000Rs.  07:00(d)-10:40(a)"<<endl;
       cout<<"  BY Train Ita.   Arunachal Express    4500Rs.       2000Rs.  05:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Bom.    Bomdila Mail        4500Rs.       2000Rs.  04:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Ita.         Bus             800Rs.        600Rs.  04:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Bom.         Bus             800Rs.        600Rs.  02:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Ita            Ganga                    5000Rs      3000Rs      "<<endl;
       cout<<"    5      Bom            Himalaya                 5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Ita            Hornbill                 3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Bom            resort                   3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Ita            sarai                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Bom            star                     1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=11000;atr2=9000;ttr1=4500;ttr2=2000;rtr1=800;rtr2=600;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 3:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"      BIHAR";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Patna-    -Gaya- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Pat.      091 I.A.       8000Rs.       6000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Gay.      092 I.A.       8000Rs.       6000Rs.   5:00(d)- 5:40(a)"<<endl;
       cout<<"  BY Train Pat.     Patna Express   1200Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Gay.     Gaya  Mail      1200Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Pat.      Bus            300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Gay.      Bus            300Rs.        200Rs.  14:00(d)-23:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Pat            Patliputra               5000Rs      3000Rs      "<<endl;
       cout<<"    5      Gay            Ashok                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Pat            Chaitanya                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Gay            Mayur                    3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Pat            satkar                   1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Gay            marwari                  1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 4:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"    WEST BENGAL";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Calcutta-    -Darjiling- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Cal.      451 I.A.     12000Rs.       10000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Dar.      452 I.A.     12000Rs.       10000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Cal.   Rajdhani Express  2000Rs.       1000Rs.  08:00(d)-19:00(a)"<<endl;
       cout<<"  By Train Dar.    kalka Mail       2000Rs.       1000Rs.  09:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  Cal.      Bus            800Rs.        500Rs.  05:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Dar.      Bus            800Rs.        500Rs.  06:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Cal            Continental              4000Rs      3000Rs      "<<endl;
       cout<<"    5      Dar            Diplomat                 4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Cal           geetanjali                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Dar           parkview                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Cal           guesthouse                 800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Dar           Paragon                    800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=12000;atr2=10000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;

case 5:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"   UTTAR PRADESH";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Lucknow-    -Kanpur- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Luc.      121 I.A.     10000Rs.       8000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Kan.      122 I.A.     10000Rs.       8000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Luc.   Shatabdi Express  2000Rs.       1000Rs.  13:00(d)-19:00(a)"<<endl;
       cout<<"  By Train Kan.   Frontier Mail     2000Rs.       1000Rs.  14:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  Luc.      Bus            800Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Kan.      Bus            800Rs.        500Rs.  14:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Luc            Shilton                  4000Rs      3000Rs      "<<endl;
       cout<<"    5      Kan            Plaza                    4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Luc            Lindsay                  3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Kan            Minerva                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Luc            Fairlawn                  800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Kan            Executive                 800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;
}
}


/**********************************************
FUNTION USED TO DISPLAY WEST-INDIA INFORMATION.
**********************************************/
void places::windia(int wdes)
{
switch(wdes)
{
case 1:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"     GUJARAT ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Ahmedabad-    -Gandhinagar- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Ahm.        045 I.A.       12000Rs.       9000Rs.  13:50(d)-15:30(a)"<<endl;
       cout<<"  BY Air   Gan.        045 I.A.       12000Rs.       9000Rs.   8:00(d)- 9:40(a)"<<endl;
       cout<<"  BY Train Ahm.   Ahmedabad Express    2500Rs.       2000Rs.  11:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Gan.   Gujarat Mail         2500Rs.       2000Rs.  12:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  Ahm.         Bus            700Rs.        500Rs.  09:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Gan.         Bus            700Rs.        500Rs.  10:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Ahm           Royal                     4000Rs      2000Rs      "<<endl;
       cout<<"    5      Gan          Kingfort                   4000Rs.     2000Rs.     "<<endl;
       cout<<"    3      Ahm          Kinshu                     2000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Gan          Rama                       2000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Ahm          best                       1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Gan          jesture                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=4000;fst2=2000;tst1=2000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"     RAJASTHAN";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Jaipur-    -Jodhpur- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Jai.      351 I.A.         10000Rs.       8000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Jod.      352 I.A.         10000Rs.       8000Rs.   7:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Jai.   Pinkcity Express    1500Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Jod.    Avadh Mail         1500Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Jai.      Bus               300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Jod.      Bus               300Rs.        200Rs.  14:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Jai          Clarks                     5000Rs      3000Rs      "<<endl;
       cout<<"    5      Jod          Rajputana                  5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Jai          copperchimney              3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Jod          resort                     3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Jai          dholamaru                  1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Jod          Rajstar                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;
}
}


/**********************************************
FUNTION USED TO DISPLAY CENTRAL-INDIA INFORMATION.
**********************************************/
void places::cindia(int cdes)
{
switch(cdes)
{
case 1:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"      ORISSA ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Bhubaneshwar-    -Cuttack- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Bhub.       091 I.A.     13000Rs.       10000Rs.  13:50(d)-17:30(a)"<<endl;
       cout<<"  BY Air   Cutt.       092 I.A.     13000Rs.       10000Rs.   8:00(d)-11:40(a)"<<endl;
       cout<<"  BY Train Bhub.     Puri Express    2500Rs.       2000Rs.  04:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Cutt.     Mundu Mail      2500Rs.       2000Rs.  07:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  Bhub .      Bus            700Rs.        500Rs.   03:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Cutt.       Bus            700Rs.        500Rs.   07:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Bhub         Janpath                    5000Rs      3000Rs      "<<endl;
       cout<<"    5      Cutt         Lingraj                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Bhub         Prachi                     3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Cutt         Keshari                    3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Bhub         Anarkali                   1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Cutt         Pushpak                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=13000;atr2=10000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:system("cls");
       textcolor(RED);
       textbackground(YELLOW);
       gotoxy(25,1);cout<<"   MADHYA PRADESH";
       gotoxy(24,2);cout<<"--------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Bhopal-    -Gwalior- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Bhop.       061 I.A.     10000Rs.       8000Rs.  11:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Gwal.       062 I.A.     10000Rs.       8000Rs.   6:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Bhop.   Deccan Express    1500Rs.       1000Rs.  11:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Gwal.    Gwalior Mail     1500Rs.       1000Rs.  07:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Bhop.       Bus            300Rs.        200Rs.  07:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Gwal.       Bus            300Rs.        200Rs.  08:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Bhop         taj                        5000Rs      3000Rs      "<<endl;
       cout<<"    5      Gwal         fortview                   5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Bhop         metro                      3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Gwal         president                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Bhop         shelter                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Gwal         safari                     1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;
}
}
int main()
{

void maketrfile()
{
       fstream fil;
       fil.open("transport.dat",ios::binary | ios::out |ios::app);
       user1[i].toggle=1;
       user1[i].restr();
       fil.write((char*)&user1[i],sizeof (user1[i]));
       fil.close();
}
}

