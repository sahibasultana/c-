#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int glob=0; //global variables
int global=10;

class d_booking //class  for domestic booking
{
protected:
    int pnr;
    char f_d[10],toa[7],tod[7];  
    long int  date;
    int choice,source,dest;
public: 
void d_pnr()
    {
        glob++; // increment variable
        pnr=glob;
    }
 int j_detail() // function declaration and definition for domestic journey
    {
        cout<< "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date."<<endl;
        cin >>date;
        cout << "\1. karachi(1) \t\2. lahore(2) \t\3. peshawar (3) \t\4. islambad(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> source;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((source==1 && dest==2) || (source==2 && dest==1))//condition
        {
 
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice\n";
            cout << "\1.Airblue (1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\2. Serene air(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\3 PIA(3)\t19:00\t\t22:05\t\tRs.6000\n";
        }
 else if((source==1 && dest==3) || (source==3 && dest==1)) 
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue (1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\2.Serene air (2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\3. PIA (3)\t19:00\t\t22:05\t\tRs.6000 \n";
        }
         else if((source==1 && dest==4) || (source==4 && dest==1)) 
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1 Airblue(1)\t08:00\t\t11:05\t\tRs.4000 \n";
            cout << "\2. Serene air(2)\t14:00\t\t17:05\t\tRs.4250\n";
            cout << "\3. PIA (3)\t19:00\t\t22:05\t\tRs.6100\n";
        }
        else if((source==2 && dest==3) || (source==3 && dest==2)) 
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue (1)\t08:00\t\t11:05\t\tRs.5400 \n";
            cout << "\2. Serene air(2)\t14:00\t\t17:05\t\tRs.2500 \n";
            cout << "\3.  PIA(3)\t19:00\t\t22:05\t\tRs.2890 \n";
        }
		 else if((source==2 && dest==4) || (source==4 && dest==2)) 
        {
            cout<< "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice: \n";
            cout << ".Airblue (1)\t08:00\t\t11:05\t\tRs.5000 \n";
            cout << "\2.Serene air (2)\t14:00\t\t17:05\t\tRs.4500 \n";
            cout << "\3.  PIA(3)\t19:00\t\t22:05\t\tRs.6000 \n";
        }
        else if((source==3 && dest==4) || (source==4 && dest==3)) 
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice: \n";
            cout << "\1.Airblue (1)\t08:00\t\t11:05\t\tRs.5800 \n";
            cout << "\2. Serene air(2)\t14:00\t\t17:05\t\tRs.5508 \n";
            cout << "\3  PIA(3)\t19:00\t\t22:05\t\tRs.6050 \n";
        }
        else if(source==dest) 
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
               }

    }
    int  select_flight() //function declaration and definition for selecting flight
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Airblue  "<<endl;
                strcpy(f_d," Airblue ");//copy to string
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy( tod,"8:00"); //copy to string
                strcpy( toa,"11:05");
     break;
     case 2: 
                cout << "\nFlight selected:"<<endl;
                cout << "serene air "<<endl;
                strcpy(f_d," serene air");//copy to string
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tod,"14:00");//copy to string
                strcpy(toa,"17:05");//copy to string
                break;
     case 3: 
                cout << "\nFlight selected:" << endl;
                cout << "PIA" << endl;
                strcpy(f_d,"PIA");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tod,"19:00");//copy to string
                strcpy(toa,"22:05");//copy to string
                break;
     default: 
                cout << "Wrong input entered !Try again" << endl;
                return select_flight();
        }
    } 
};
    
class i_booking//class for international booking
{
protected: 
    int pnri;
    char f_i[10],toai[7],todi[7];
    long int datei;
    int sourcei,desti,choicei;
public: 
     void i_pnr()
    {
        global++;//increment variable
        pnri=global;
    }
     int j_detaili()// function declaration and definition for journey details
    {
        cout << "Enter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >>datei ;
        cout << "\1.London(1) \2.Dubai(2) \3. Turkey(3) \4.Singapore(4) \5.NewYork(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> sourcei;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;
if((sourcei==1 && desti==3) || (sourcei==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue(1)\t10:00\t\t14:05\t\tRs.25000\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21500\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24000\n";
        }

        else if((sourcei==1 && desti==4) || (sourcei==4 && desti==1)) 
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice: n";
            cout << "\1.Airblue(1)\t10:00\t\t14:05\t\tRs.25500 \n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21300 \n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24650 \n";
        }

        else if((sourcei==1 && desti==5) || (sourcei==5 || desti==1)) 
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue(1)\t10:00\t\t14:05\t\tRs.52500\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.59420 \n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.64892 \n";
        }

        else if((sourcei==2 && desti==3) || (sourcei==3 && desti==2)) 
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue(1)\t10:00\t\t14:05\t\tRs.17800\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.14900 \n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.18700 \n";
        }

        else if((sourcei==2 && desti==4) || (sourcei==4 && desti==2)) 
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue(1)\t10:00\t\t14:05\t\tRs.32000\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.38500\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs41259\n"; 
		}

        else if(sourcei==2 && desti==5 || (sourcei==5 && desti==2)) 
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
            cout << "\1.Airblue(1)\t10:00\t\t14:05\t\tRs.82500\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.87550\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs81478 \n";

        }
        else if(sourcei==desti) 
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else 
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

     int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nFlight selected:" <<endl;
            cout << "Airblue " << endl;
            strcpy(f_i,"Airblue");//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(todi,"10:00");//copy to string
            strcpy(toai,"14:05");//copy to string
            break;
        case 2: 
               cout << "\nFlight selected:" << endl;
               cout << "Fly Dubai" << endl;
               strcpy(f_i,"Fly Dubai");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(todi,"14:00");//copy to string
                strcpy(toai,"18:05");//copy to string
                break;
        case 3: 
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(todi,"18:00");//copy to string
            strcpy(toai,"22:05");//copy to string
            break;
        default: 
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};
class passenger: public d_booking, public i_booking
{
 
protected: 
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public: 
    void p_detail(int x) 
    {   if(x==1)//if else for domestic and international booking selection
        { 
		j_detail(); 
          select_flight(); 
        }
          else
          {
		    j_detaili(); 
             select_flighti();  
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check() 
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();//function call
        }
    }
       void more_details()//to take more details of the passenger
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      //displaying details
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
        
    }
     int getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int getpnri()//function to get pnr for international booking
     {
         return pnri;
     }

    void disp()//function to display details for domestic booking
     {
    
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"Date:" << date<< endl;
         cout<<"Departure Time:" << tod<< endl;
         cout<<"Arrival Time:" << toa;
     }

      void dispi()//function to display details for international booking
     {
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"Datei:" << datei << endl;
         cout<<"Departure Time:" << todi << endl;
         cout<<"Arrival Time:" << toai;
     }
};
class payment 
{
protected: 
    long
    int choice1,card,date ;
    char password[10];
public: 
    void pay_detail()//function declaration and definition for payment method
    {     cout << "\n\n\nHow would you like to pay?:\n";
           cout << "\n\1.Debit Card(1) \n\2.Credit Card(2)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nTransaction Successful\n";
            break;
        case 2: 
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default: 
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

      void createfile (passenger p)//file creation for domestic booking
{ 
        
      ofstream  fin ("domestic.txt",ios::binary|ios::app);
       fin.write((char*)&p,sizeof(p));//writing to file
       fin.close();//closing file
}
void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
 
int main() 
{

    class d_booking d1;//object for class d_booking
    class i_booking i1;//object for class i_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
    int ch,ch1,n; 
    char input; 
    do//do while loop
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Exit(2)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)//switch case
      {
          case 1://condition
          system("CLS");
              cout << "\n\n\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1) 
              {
                   case 1://for booking domestic ticket
                        p1.d_pnr();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);//call to create file
                        break;
                   case 2: //for booking international ticket
                           p1.p_detail(2);//function calls
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);//call to create file
                           break;
                   default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                }
              }
              cout<<"\n<><><><>Thank you for Reserving flight at our website Bookme.pk<><><>"<<endl;
          
           cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }
  while(input=='Y' || input=='y');//condition for do while loop
return 0;
}

