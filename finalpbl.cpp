#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
class part1
{
public:
      int age;
       string name;
      char gen;
      int ott;
    int h;
    int num;
    part1()
    {
        cout<< " ------------------------------------------------------------------------------------------------------------------------"<<endl;
    }

void advertisement()
{

    cout<<"\n"<<"\n"<<"\n"<<"\n"<<  "WELCOME"<<endl<<endl<< "\t\tTO"<<endl<<endl<< "\t\t\tTHE"<<endl<<endl<< "\t\t\t\tKAVA"<<endl<<endl<< "\t\t\t\t\tTRAVEL"<<endl<<endl<< "\t\t\t\t\t\tMANAGEMENT" <<endl<<endl<<"\t\t\t\t\t\t\t\tSERVICE"<<endl;
cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;
 system("pause") ;


cout<< " ----------------------------------------------------------------------------------------------------------------"<<endl;

}

void introduction()

{


 system("cls");
 cout<< "************************************************************************************************************************"<<endl;
    cout<< " SO THAT WE COULD HELP YOU GET TO YOUR DREAM DESTINATION LET US KNOW EACH OTHER"<<endl;
     cout<<"************************************************************************************************************************"<<endl;

    cout<< " WE WOULD LIKE TO KNOW YOUR NAME"<<endl;
    cin>>name;

cout<< " ---------------------------------------------------------------------------------------------------------------"<<endl;

    cout<< " PLEASE SPECIFY YOUR AGE"<<endl;
    cin>> age;

    cout<< " -----------------------------------------------------------------------------------------------------------"<<endl;


    cout<< "TELL US YOUR GENDER "<<endl;
    cin>>gen;

    cout<< " -----------------------------------------------------------------------------------------------------------------"<<endl;


    cout<< " ENTER YOUR PHONE NUMBER "<<endl;
    cin>>num;

    cout<< " ------------------------------------------------------------------------------------------------------------------"<<endl;


}
 ~part1()
    {
        cout<< " -------------------------------------------------------------------------------------------------"<<endl;
    }

   virtual void otp()
   {
        cout<< "*************************************************************************************************************************"<<endl;

       cout<< " THE OTP IS 1245"<<endl;
       cout<< " ENTER OTP"<<endl;


       cin>>ott;
        cout<< "***************************************************************************************************************************"<<endl;


       cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

   }
  friend class part4;

};


class part2:public part1
{
public:
    int m,n,o,ottp;
    string indstate;
    string as,no,so,eu,af;

    part2()
    {
        system("cls");
        cout<<"CHOOSE ONE "<<endl;
        cout<< " 1. INDIAN TOUR PACKAGE"<<endl;
        cout<< " 2. INTERNATIONAL TOUR PACKAGE"<<endl;
        cin>>m;

        cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


    }
    void moreinfo()
    {
       if(m==1)
       {
           cout<< " TELL US WHERE YOU WANT TO TRAVEL"<<endl;
           cout<< " 1. NORTH"<<endl;
           cout<< " 2. SOUTH"<<endl;
           cout<< " 3. WEST"<<endl;
           cout<< " 4. EAST"<<endl;
           cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           cin>>n;
           if(n==1)
           {
               cout<< " YOU CAN VISIT THE FOLLOWING STATES IN NORTH"<< endl;
               cout<< " UP"<<endl;
               cout<< " PUNJAB"<<endl;
               cout<< " HIMACHAl_PRADESH"<<endl;
               cout<< " UTTARAKHAND"<<endl;
               cout<< " MANIPUR"<<endl;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


               cout<< " tell us about your area of interest"<<endl;
               cin>>indstate;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }


           if(n==2)
           {
               cout<< " YOU CAN VISIT THE FOLLOWING STATES IN SOUTH"<<endl;
               cout<< " TAMIL_NADU"<<endl;
               cout<< " ANDHRA_PRADESH"<<endl;
               cout<< " MAHARASHTRA"<<endl;
               cout<< " KERALA"<<endl;
               cout<< " KARNATAKA"<<endl;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


               cout<< " tell us about your area of interest"<<endl;
               cin>>indstate;

               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }

           if(n==3)
           {
               cout<< " YOU CAN VISIT THE FOLLOWING STATES IN WEST"<<endl;
               cout<< " GUJARAT"<<endl;
               cout<< " GOA"<<endl;
               cout<< " WEST_BENGAL"<<endl;
               cout<< " ASSAM"<<endl;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


               cout<< " tell us about your area of interest"<<endl;
               cin>>indstate;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


           }


           if(n==4)
           {
               cout<< " YOU CAN VISIT THE FOLLOWING STATES IN EAST"<<endl;
               cout<< " WEST_BENGAL"<<endl;
               cout<< " ODISHA"<<endl;
               cout<< " SIKKIM"<<endl;
               cout<< " MEGHALAYA"<<endl;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


               cout<< " tell us about your area of interest"<<endl;
               cin>>indstate;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;



           }

       }



       if(m==2)
       {
           cout<< " TELL US ABOUT THE CONTINENT YOU WOULD LIKE TO VISIT"<<endl;
           cout<< " 1. ASIA"<<endl;
           cout<< " 2. NORTH AMERICA"<<endl;
           cout<< " 3. SOUTH AMERICA"<<endl;
           cout<< " 4. EUROPE"<<endl;
           cout<< " 5. AFRICA"<<endl;
           cin>>o;
           cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


           if(o==1)
           {
               cout<< " THE COUNTRY OF YOUR INTEREST IS"<<endl;
             cin>>as;
             cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }

           if(o==2)
           {
               cout<< " THE COUNTRY OF YOUR INTEREST IS"<<endl;
             cin>>no;
             cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }

           if(o==3)
           {
               cout<< " THE COUNTRY OF YOUR INTEREST IS"<<endl;
             cin>>so;
             cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }

           if(o==4)
           {
               cout<< " THE COUNTRY OF YOUR INTEREST IS"<<endl;
             cin>>eu;
             cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }

           if(o==5)
           {
               cout<< " THE COUNTRY OF YOUR INTEREST IS"<<endl;
             cin>>af;
             cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

           }
       }

}

 void otp()
    {
         cout<< " THE OTP IS 1245"<<endl;
       cout<< " ENTER OTP FOR THE SECOND TIME"<<endl;
       cin>>ottp;
    }

 ~part2()
    {
        cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

        cout<< " THANK YOU FOR COMING THIS FAR WITH US"<<endl;

        cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

    }


};
class part3
{
protected:
    int in_date,out_date;

    string mon;

    public:
    part3()
    {
        system("cls");

               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

        cout<< " TELL US YOUR FIRST DATE OF TRIP"<<endl;
        cin>>in_date;

               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;



        cout<< " TELL US YOUR OUT DATE"<<endl;
        cin>>out_date;

               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;



        cout<< " TELL US YOUR MONTH IN WHICH YOU ARE PLANNING YOUR TRIP"<<endl;
        cin>>mon;

               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

    }

    void display()
    {
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;
           cout<< " YOUR DURATION OF THE TRIP IS"<<endl;
        cout<<in_date<< " "<<mon<< " 2023"<< " to"<<out_date<< " "<<mon;
               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

    }

    friend class part4;
};
class part4
{

   public:
    void display(part1 obj1, part3 obj2)
    {
         system("cls");
                cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;

        cout<< " The name of the person is "<<obj1.name<<endl;
        cout<< " The gender of the person is "<<obj1.gen<<endl;
        cout<< " The  phone number of the person is "<<obj1.num<<endl;
        cout<< " the person is willin to travel from "<<obj2.in_date<< " to "<< obj2.out_date<< " in the month of"<<obj2.mon;

               cout<< " ---------------------------------------------------------------------------------------------------------------------"<<endl;


    }


};


class Vehicle
{
public:
    virtual void displayInfo() = 0;  // virtual function to display information about the vehicle
    virtual void bookSeat() = 0;     // virtual function to book a seat on the vehicle
};

class Train : public Vehicle
{
private:
    string trainName;
    string departureLocation;
    string destinationLocation;
    int passengerCapacity;
    int bookedSeats;
    double price;
public:
    Train(string name, string depLoc, string destLoc, int capacity, int booked, double p)
    {

        trainName=name;
        departureLocation=depLoc;
        destinationLocation=destLoc;
        passengerCapacity=capacity;
        bookedSeats=booked;
        price=p;
    }
    void displayInfo()
    {
        cout<<"Train Name: "<<trainName<<endl;
        cout<<"Departure Location: "<<departureLocation<<endl;
        cout<<"Destination Location: "<<destinationLocation<<endl;
        cout<<"Booked Seats: "<<bookedSeats<<endl;
        cout<<"Price: "<<price<<endl;
         system("pause") ;

    }
    void bookSeat()
    {
        if (bookedSeats<passengerCapacity)
        {
            displayInfo();
            cout<<"Seat booked successfully!"<<endl;
        }
        else
        {
            cout<<"Sorry, the train is full."<<endl;
        }
    }
};


class Flight : public Vehicle
{
private:
    string airlineName;
    string flightNumber;
    string departureLocation;
    string destinationLocation;
    int passengerCapacity;
    int bookedSeats;
    double price;
public:
    Flight(string name, string number, string depLoc, string destLoc, int capacity, int booked, double p)
    {
        airlineName=name;
        flightNumber=number;
        departureLocation=depLoc;
        destinationLocation=destLoc;
        passengerCapacity=capacity;
        bookedSeats=booked;
        price=p;
    }
    void displayInfo()
    {
        cout<<"Airline Name: "<<airlineName<<endl;
        cout<<"Flight Number: "<<flightNumber<<endl;
        cout<<"Departure Location: "<<departureLocation<<endl;
        cout<<"Destination Location: "<<destinationLocation<<endl;
        cout<<"Booked Seats: "<<bookedSeats<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void bookSeat()
    {
        if (bookedSeats<passengerCapacity)
            {
                displayInfo();
                cout<<"Seat booked successfully!"<<endl;
            }

        else
            {
                cout<<"Sorry, the flight is full."<<endl;
            }
    }
};


class Bus:public Vehicle
{
private:
    string busName;
    string departureLocation;
    string destinationLocation;
    int passengerCapacity;
    int bookedSeats;

public:
  double price;
    Bus(string name, string depLoc, string destLoc, int capacity, int booked, double p)
    {
        busName = name;
        departureLocation = depLoc;
        destinationLocation = destLoc;
        passengerCapacity = capacity;
        bookedSeats = booked;
        price = p;
    }
    void displayInfo()
    {
        cout<<"Bus Name: "<<busName<<endl;
        cout<<"Departure Location: "<<departureLocation<<endl;
        cout<<"Destination Location: "<<destinationLocation<<endl;
        cout<<"Booked Seats: "<<bookedSeats<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void bookSeat()
    {
        if (bookedSeats<passengerCapacity)
            {
                displayInfo();
                cout<<"Seat booked successfully!"<<endl;
            }
        else
            {
                cout << "Sorry, the bus is full." << endl;
            }
    }
};

class PersonalHelicopter : public Vehicle
{
private:
    string helicopterName;
    string departureLocation;
    string destinationLocation;
    int passengerCapacity;
    int bookedSeats;
    double price;
public:
    PersonalHelicopter(string name, string depLoc, string destLoc, int capacity, int booked, double p)
    {
        helicopterName = name;
        departureLocation = depLoc;
        destinationLocation = destLoc;
        passengerCapacity = capacity;
        bookedSeats = booked;
        price = p;
    }
    void displayInfo()
    {
        cout <<"Helicopter Name: "<< helicopterName << endl;
        cout <<"Departure Location: "<<departureLocation<<endl;
        cout <<"Destination Location: "<<destinationLocation<<endl;
        cout<<"Booked Seats: "<<bookedSeats<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void bookSeat()
    {
        if (bookedSeats<passengerCapacity)
            {
                displayInfo();
                cout << "Seat booked successfully!" << endl;
            }
        else
            {
                cout << "Sorry, the personal helicopter is full." << endl;
            }
    }
};

class hotel
{
    public:
    virtual void stay()=0;
   virtual  void choice()=0;
   virtual void contd()=0;
   virtual void book()=0;
};

  class starhotel{
       public:
    int a;
    int b,c,d,x;
    int y,z;
    int p,q,s;
    int i,r,f;
    double price2;

    void stay(){
    cout<<"\t\t!!WELCOME TO HOTEL SELECTION PART!!"<<endl;
    cout<<"                                             "<<endl;
    cout<<"\t\t----------------#kava------------------------"<<endl;
     cout<<"                                             "<<endl;
    cout<<"\t\t!!LEAVE EVERYTHING OVER US!!"<<endl;
     cout<<"                                             "<<endl;
    cout<<"\t\t----------------#kava------------------------"<<endl;
     cout<<"                                             "<<endl;
    cout<<"\t\t!!SELECT THE TYPE OF HOTEL YOU WANT TO STAY!!"<<endl;
     cout<<"                                             "<<endl;
    cout<<"\t\t----------------#kava-------------------------"<<endl;
     cout<<"                                             "<<endl;
    cout<<"CHOOSE ONE"<<endl;
    cout<<"                                                    "<<endl;
    }
    void choice(){
    cout<<"\t----------------ENTER 1 FOR HOTEL STAY"<<endl;
    cout<<"\t----------------ENTER 2 FOR APPARTMENT STAY"<<endl;
    cout<<"\t----------------ENTER 3 FOR VILLA STAY"<<endl;
    cout<<"\t----------------ENTER 4 FOR SUITE STAY"<<endl;
    cout<<"                                                    "<<endl;
    cout<<"                                                    "<<endl;
    cin>>a;
    }

    void contd()

    {
        if(a==1){
            cout<<"\tselect the type of hotel you want to stay"<<endl;
             cout<<"                                             "<<endl;
            cout<<"ENTER 1 FOR 3 STAR HOTEL"<<endl;
            cout<<"ENTER 2 FOR 4 STAR HOTEL"<<endl;
            cout<<"ENTER 3 FOR 5 STAR HOTEL"<<endl;
            cin>>b;
        }
        else if(a==2){
            cout<<"\tSELECT THE TYPE OF APPARTMENT YOU WANT TO STAY"<<endl;
             cout<<"                                             "<<endl;
            cout<<"ENTER 1 FOR 2 BHK"<<endl;
            cout<<"ENTER 2 FOR 3 BHK"<<endl;
            cin>>c;

        }
        else if (a==3){
            cout<<" \tLUXIRIOUS STAY "<<endl;
             cout<<"                                             "<<endl;
            cout<<"SELECTED STAY IN VILLA"<<endl;
            cout<<"ENTER 1 TO CONTINUE "<<endl;
            cin>>r;
        }
         else if (a==4){
            cout<<" \tLUXIRIOUS STAY "<<endl;
             cout<<"                                             "<<endl;
            cout<<"SELECTED STAY IN SUITE"<<endl;
            cout<<"ENTER 1 TO CONTINUE "<<endl;
            cin>>f;
        }
    }
    void contd2(){
         if(b==1)
        { cout << "\tYOU HAVE SELECTED 3 STAR HOTEL TO STAY\n";
            cout << "\tPLEASE SELECT FROM THE BELOW LISTED HOTELS:\n";
             cout<<"                                             "<<endl;
            cout << "1 - ACADIA INN __ PRICE: 12,194/- (INCLUDING BREAKFAST)\n";
            cout << "2 - TRADE WINDS INN __ PRICE: 8,502/- (INCLUDING BREAKFAST)\n";
            cout << "3 - MAINE EVERGREEN HOTEL __ PRICE: 14,816/- (INCLUDING BREAKFAST)\n";

            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                   { cout << "\tYEAH !! YOUR BOOKING FOR ACADIA INN @ 12,194 HAS BEEN CONFIRMED\n";

                       price2=12194;
                   }
                    break;
                case 2:
                   { cout << "\tYEAH !! YOUR BOOKING FOR TRADE WINDS INN @ 8,502 HAS BEEN CONFIRMED\n";
                       price2=8502;
                   }

                    break;
                case 3:
                    {cout << "\tYEAH !! YOUR BOOKING FOR MAINE EVERGREEN HOTEL @ 14,816 HAS BEEN CONFIRMED\n";
                        price2=14816;
                    }
                    break;
                default:
                    cout << "Invalid choice\n";
                    break;
            }

        }
    }

    void contd3()

    {
         if(b==2)
        {
            cout<<"\tYOU HAVE SELECTED 4 STAR HOTEL TO STAY"<<endl;
            cout<<"\tPLEASE SELECT FROM THE BELOW LISTED HOTEL"<<endl;
             cout<<"                                             "<<endl;
            cout<<"1-- MICROTEL INN __ PRICE: 18,194/- (INCLUDING BREAKFAST)"<<endl;
             cout<<"2-- LORD CAMDEN INN __ PRICE: 17,899/- (INCLUDING BREAKFAST)"<<endl;
              cout<<"3-- OGUNQUIT HOTEL __ PRICE: 20,816/- (INCLUDING BREAKFAST)"<<endl;
              cin>> y;

              if (y==1)
              {
                  cout<<"\t YEAH !! YOUR BOOKING FOR MICROTEL INN @ 18,194 HAS BEEN CONFIRMED"<<endl;
                  price2=18194;
              }
              else if (y==2)
              {
                  cout<<"\t YEAH !! YOUR BOOKING FOR LORD CAMDEN INN @ 12,899 HAS BEEN CONFIRMED"<<endl;
                  price2=12899;
              }
              else if (y==3)
              {
                  cout<<"\t YEAH !! YOUR BOOKING FOR OGUNQUIT HOTEL @ 20,816 HAS BEEN CONFIRMED"<<endl;
                  price2=20816;
              }
        }
    }

    void contd4()

    {
         if(b==3)
        {
            cout<<"\tYOU HAVE SELECTED 5 STAR HOTEL TO STAY"<<endl;
            cout<<"\tPLEASE SELECT FROM THE BELOW LISTED HOTEL"<<endl;
             cout<<"                                             "<<endl;
            cout<<"1-- ABBOT TRAILSIDE HOTEL __ PRICE: 33,194/- (INCLUDING BREAKFAST)"<<endl;
             cout<<"2-- HYATT PALACE __ PRICE: 28,502/- (INCLUDING BREAKFAST)"<<endl;
              cout<<"3-- SENATOR HOTEL __ PRICE: 34,816/- (INCLUDING BREAKFAST)"<<endl;
              cin>> z;

              if (z==1)
              {
                  cout<<"\t YEAH !! YOUR BOOKING FOR ABBOT TRAILSIDE HOTEL @ 33,194 HAS BEEN CONFIRMED"<<endl;
                  price2=33194;
              }
               if (z==2)
              {
                  cout<<"\t YEAH !! YOUR BOOKING FOR HYATT PALACE @ 28,502 HAS BEEN CONFIRMED"<<endl;
                  price2=28502;
              }
               if (z==3)
              {
                  cout<<"\t YEAH !! YOUR BOOKING FOR MAINE SENATOR HOTEL @ 34,816 HAS BEEN CONFIRMED"<<endl;
                  price2=34816;
              }
        }

    }
    void contd5()

    {
        if(c==1)
        { std::cout << "\tYOU HAVE SELECTED 2 BHK APARTMENT\n";
            std::cout << "\tPLEASE SELECT FROM THE BELOW LISTED APARTMENTS:\n";
             cout<<"                                             "<<endl;
            std::cout << "1 - PEACE APARTMENTS __ PRICE: 10,000/- (FURNISHED)\n";
            std::cout << "2 - ECO STAY APARTMENTS __ PRICE: 12,000/- (FURNISHED)\n";

            int choice;
            std::cin >> choice;

            switch (choice) {
                case 1:
                    {std::cout << "\tYEAH !! YOUR BOOKING FOR PEACE APARTMENT @ 10,000 HAS BEEN CONFIRMED\n";
                     price2=10000;
                    }
                    break;
                case 2:
                   { std::cout << "\tYEAH !! YOUR BOOKING FOR ECO STAY APARTMENT @ 12,000 HAS BEEN CONFIRMED\n";
                    price2=12000;
                   }
                    break;
                default:
                    std::cout << "\tInvalid choice\n";
                    break;

            }}
    }
    void contd6()

    {
        if(c==2)
        {
            cout<<"\tYOU HAVE SELECTED FOR 3 BHK "<<endl;
            cout<<"\tPLEASE SELECT FROM THE BELOW LISTED APPARTMENT"<<endl;
             cout<<"                                             "<<endl;
            cout<<"1-- JOLLY APPARTMENTS __ PRICE: 14,000/- (FURNISHED)"<<endl;
            cout<<"2-- IDEAL APPARTMENTS __ PRICE: 15,000/- (FURNISHED)"<<endl;
            cin>>s;
            if (s==1)
            {
                cout<<"\tYEAH !! YOUR BOOKING FOR JOLLY APPARTMENT @ 14,000 HAS BEEN CONFIRMED"<<endl;
                price2=14000;
            }
             if (s==2)
            {
                cout<<"\tYEAH !! YOUR BOOKING FOR IDEAL APPARTMENT @ 15,000 HAS BEEN CONFIRMED"<<endl;
                price2=15000;
            }
        }
    }
    void contd7()
    {
        if(r==1)

        cout<<"\tYOU HAVE SELECTED FOR STAY IN VILLA"<<endl;
        cout<<"\tPLEASE SELECT FOR THE VILLA BELLOW"<<endl;
         cout<<"                                             "<<endl;
        cout<<"1-- DOLCE VITA VILLA __ PRICE: 30,000/- (WELL FACILATED)"<<endl;
         cout<<"2-- DRIFTWOOD VILLA __ PRICE: 35,000/- (WELL FACILATED)"<<endl;
         cin>>q;
         if(q==1)
         {
             cout<<"\tYEAH !! YOUR BOOKING FOR DOLCE VITA VILLA @30,000 HAS BEEN CONFIRMED "<<endl;
             price2=30,000;
         }
          if(q==2)
          {
              cout<<"\tYEAH !! YOUR BOOKING FOR DRIFTWOOD VILLA @35,000 HAS BEEN CONFIRMED "<<endl;
              price2=35,000;
         }

    };
    void contd8()
    {
        if(f==1)
        cout<<"\tYOU HAVE SELECTED FOR STAY IN SUITE"<<endl;
        cout<<"\tPLEASE SELECT FOR THE SUITE BELLOW"<<endl;
         cout<<"                                             "<<endl;
        cout<<"1-- VESSEL OF LIGHT __ PRICE: 40,999/- (WELL FACILATED)"<<endl;
         cout<<"2-- LIVING THE STORY __ PRICE: 42,499/- (WELL FACILATED)"<<endl;
         cin>>i;
         if(i==1)
         {
             cout<<"\tYEAH !! YOUR BOOKING FOR VESSEL OF LIGHT @40,999 HAS BEEN CONFIRMED "<<endl;
             price2=40,999;
         }
          if(i==2)
         {
             cout<<"\tYEAH !! YOUR BOOKING FOR LIVING THE STORY @42,499 HAS BEEN CONFIRMED "<<endl;
             price2=42,499;
         }

    }


};


class Food {
public:
   int mealOption,dinnerOption;
   int mealType,lunchOption;
   int foodOption;
   double price3;

    void askForMeal() {
        cout << "\tWOULD YOU LIKE TO ADD ON FOOD?" << endl;
         cout<<"                                             "<<endl;
        cout << "ENTER 1 TO CONTINUE" << endl;
        cout << "ENTER 2 TO DENY" << endl;
        cin >> mealOption;
    }

    void chooseMealType() {
        if (mealOption == 1) {
            cout << "\tYOU HAVE OPTED FOR FOOD" << endl;
             cout<<"                                             "<<endl;
            cout << "ENTER 1 FOR LUNCH" << endl;
            cout << "ENTER 2 FOR DINNER" << endl;
            cout << "ENTER 3 FOR BOTH" << endl;
            cin >> mealType;
        }
        else {
            cout << "\tYOU HAVE NOT OPTED FOR FOOD" << endl;
            cout << "\tYOU CAN ASK OUR STAFF IN CASE YOU CHANGE YOUR MIND" << endl;
             cout<<"                                             "<<endl;
        }
    }

    void bookMeal() {
        if (mealType == 1) {
            cout << "\tYOU HAVE OPTED FOR LUNCH" << endl;
             cout<<"                                             "<<endl;
            cout << "ENTER 1 FOR LUNCH IN HOTEL" << endl;
            cout << "ENTER 2 FOR SPECIAL LUNCH IN CITY'S BEST CAFE" << endl;
            cin >> lunchOption;
            if (lunchOption == 1) {
                cout<<"                                             "<<endl;
                {cout << "ADD ON PRICE FOR LUNCH IN HOTEL IS 2000/-" << endl;
                price3=2000;
                }
                cout << "YOUR LUNCH HAS BEEN BOOKED AND WILL BE ASSISTED BY OUR STAFF" << endl;
                cout << "\tFOR MORE INFO YOU CAN CONTACT US" << endl;
                 cout<<"                                             "<<endl;
            }
            else if (lunchOption == 2) {
                cout<<"                                             "<<endl;
               { cout << "ADD ON PRICE FOR LUNCH IN CAFE IS 2799/-" << endl;
                price3=2799;
               }
                cout << "YOUR LUNCH HAS BEEN BOOKED AND WILL BE ASSISTED BY OUR STAFF" << endl;
                cout << "FOR MORE INFO YOU CAN CONTACT US" << endl;
            }
        }
        else if (mealType == 2) {
            cout<<"                                             "<<endl;
            cout << "\tYOU HAVE OPTED FOR DINNER" << endl;
             cout<<"                                             "<<endl;
            cout << "ENTER 1 FOR DINNER IN HOTEL" << endl;
            cout << "ENTER 2 FOR SPECIAL DINNER IN CITY'S BEST CAFE" << endl;
            cin >> dinnerOption;
            if (dinnerOption == 1) {
                cout<<"                                             "<<endl;
               { cout << "ADD ON PRICE FOR DINNER IN HOTEL IS 2099/-" << endl;
                price3=2099;
               }
                cout << "YOUR DINNER HAS BEEN BOOKED AND WILL BE ASSISTED BY OUR STAFF" << endl;
                cout << "\tFOR MORE INFO YOU CAN CONTACT US" << endl;
                 cout<<"                                             "<<endl;
            }
            else if (dinnerOption == 2) {
                cout<<"                                             "<<endl;
                {cout << "ADD ON PRICE FOR DINNER IN CAFE IS 2999/-" << endl;
                price3=2999;
                }
                cout << "YOUR DINNER HAS BEEN BOOKED AND WILL BE ASSISTED BY OUR STAFF" << endl;
                cout << "\tFOR MORE INFO YOU CAN CONTACT US" << endl;
                 cout<<"                                             "<<endl;
            }
        }
        else if (mealType == 3) {
            cout<<"                                             "<<endl;
            cout << "\tYOU HAVE OPTED FOR BOTH LUNCH AND DINNER" << endl;
             cout<<"                                             "<<endl;
            cout << "ENTER 1 FOR FOOD IN HOTEL" << endl;
            cout << "ENTER 2 FOR SPECIAL CUISINE IN CITY'S BEST CAFE" << endl;
            cin >> foodOption;
            if (foodOption == 1) {
                cout<<"                                             "<<endl;
               { cout << "\tADD ON PRICE FOR FOOD IN HOTEL IS 5799/-"<<endl;
               price3=5799;
               }
                cout<<"                                             "<<endl;
            }
             else if (foodOption == 2) {
                 cout<<"                                             "<<endl;
               { cout << "\tADD ON PRICE FOR FOOD IN CAFE IS 6999/-" << endl;
               price3=6999;
               }
                cout << "\tYOUR FOOD HAS BEEN BOOKED AND WILL BE ASSISTED BY OUR STAFF" << endl;
                cout << "\tFOR MORE INFO YOU CAN CONTACT US" << endl;
                 cout<<"                                             "<<endl;
            }

        }
        cout<<"                                             "<<endl;
        cout<<"                                             "<<endl;
        cout<<"\t\tYOUR ALL THE BOOKINGS HAS BEEN CONFIRMED"<<endl;
        cout<<"\t\tFOR FURTHER ASSIST YOU CAN CONTACT US"<<endl;
        cout<<"\t\tID FOR FUTUTRE REFRENCE : 469"<<endl;

    }
};


int  main()
{
part1 m;

   m.advertisement();
   m.introduction();
   m.otp();

   part1*q;


   part2 n,l;
   n.moreinfo();

    q=&l;
    q->otp();

   part3 o;
   o.display();

   part4 p;
   p.display(m,o);




   vector<Vehicle*> vehicles;
    int choice;
       double price;


    cout<<"ENTER YOUR CHOICE FOR THE MODE OF CONVENCE YOU WANT TO TRAVEL"<<endl;
    cout<<"1.TRAIN"<<endl;
    cout<<"2.FLIGHT"<<endl;
    cout<<"3.BUS"<<endl;
    cout<<"4.PERSNOL HELICOPTER"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            string trainName;
            string departureLocation;
            string destinationLocation;
            int passengerCapacity=50;
            int bookedSeats;

            int train_choice;
            cout<<"SELECT THE TRAIN FROM FOLLOWING AVAILAIBLE TRAINS\n"<<"1.DURONTO\n"<<"2.SHATABDI\n"<<"3.RAJDHANI EXPRESS\n";
            cout<<"ENTER TRAIN YOU WANT TO TRAVEL WITH=";
            cin>>train_choice;
            switch(train_choice)
            {
            case(1):
                {
                    trainName="duronto";
                    price=1000;
                }
            case(2):
                {
                    trainName="shatabdi";
                    price=1300;
                }
            case(3):
                {
                    trainName="rajdhani express";
                    price=1700;
                }
            }
            cout<<"ENTER DEPARTURE LOCATION=";
            cin>>departureLocation;
            cout<<"ENTER DESTINATION LOCATION=";
            cin>>destinationLocation;
            cout<<"NUMBER OF SEATS AVAILAIBLE="<<passengerCapacity<<endl;
            cout<<"ENTER THE NUMBER OF PASSENGERS=";
            cin>>bookedSeats;
            price=price*bookedSeats;
            vehicles.push_back(new Train(trainName,departureLocation,destinationLocation,passengerCapacity,bookedSeats,price));
            cout<<"\nBooking a seat on the train..."<<endl;
            Train* train=dynamic_cast<Train*>(vehicles[0]);  // use dynamic_cast to cast the pointer to the derived class
            train->bookSeat();
            break;
        }

    case 2:
        {
            string airlineName;
            string flightNumber;
            string departureLocation;
            string destinationLocation;
            int passengerCapacity=50;
            int bookedSeats;

            int flight_choice;
            cout<<"SELECT THE FLIGHT FROM FOLLOWING AVAILAIBLE FLIGHT\n"<<"1.INDIGO\n"<<"2.AIR INDIA\n"<<"3.SPICEJET\n";
            cout<<"ENTER FLIGHT YOU WANT TO TRAVVEEL WITH=";
            cin>>flight_choice;
            switch(flight_choice)
            {
            case(1):
                {
                    airlineName="INDIGO";
                    price=3500;
                }
            case(2):
                {
                    airlineName="AIR INDIA";
                    price=4500;
                }
            case(3):
                {
                    airlineName="SPICEJET";
                    price=5000;
                }
            }
            cout<<"ENTER FLIGHT NUMBER";
            cin>>flightNumber;
            cout<<"ENTER DEPARTURE LOCATION=";
            cin>>departureLocation;
            cout<<"ENTER DESTINATION LOCATION=";
            cin>>destinationLocation;
            cout<<"NUMBER OF SEATS AVAILAIBLE="<<passengerCapacity<<endl;
            cout<<"ENTER THE NUMBER OF PASSENGERS=";
            cin>>bookedSeats;
            price=price*bookedSeats;
            vehicles.push_back(new Flight(airlineName,flightNumber,departureLocation,destinationLocation,passengerCapacity,bookedSeats,price));
            // Book a seat on the flight
            cout<<"\nBooking a seat on the flight..."<<endl;
            Flight* flight=dynamic_cast<Flight*>(vehicles[0]);
            flight->bookSeat();
            break;
        }

        case 3:
        {
            string busName;
            string departureLocation;
            string destinationLocation;
            int passengerCapacity=50;
            int bookedSeats;

            int bus_choice;
            cout<<"SELECT THE BUS FROM FOLLOWING AVAILAIBLE BUS\n"<<"1.SUNRISE AND SUNSET TRIPS\n"<<"2.GLOBAL TROTTER\n"<<"3.RHYTHM TRAVEL\n";
            cout<<"ENTER BUS YOU WANT TO TRAVVEEL WITH=";
            cin>>bus_choice;
            switch(bus_choice)
            {
            case(1):
                {
                    busName="SUNRISE AND SUNSET TRIPS";
                    price=2000;
                }
            case(2):
                {
                    busName="GLOBAL TROTTER";
                    price=2500;
                }
            case(3):
                {
                    busName="RHYTHM TRAVEL";
                    price=3100;
                }
            }
            cout<<"ENTER DEPARTURE LOCATION=";
            cin>>departureLocation;
            cout<<"ENTER DESTINATION LOCATION=";
            cin>>destinationLocation;
            cout<<"NUMBER OF SEATS AVAILAIBLE="<<passengerCapacity<<endl;
            cout<<"ENTER THE NUMBER OF PASSENGERS=";
            cin>>bookedSeats;
            price=price*bookedSeats;
            vehicles.push_back(new Bus(busName,departureLocation,destinationLocation,passengerCapacity,bookedSeats,price));
            // Book a seat on the bus
            cout<<"\nBooking a seat on the bus..."<<endl;
            Bus* bus=dynamic_cast<Bus*>(vehicles[0]);
            bus->bookSeat();
            break;
        }
        case 4:
        {
            string helicopterName;
            string departureLocation;
            string destinationLocation;
            int passengerCapacity=50;
            int bookedSeats;

            int heli_choice;
            cout<<"SELECT THE HELICOPTER FROM FOLLOWING AVAILAIBLE HELICOPTER\n"<<"1.AERO BLADE\n"<<"2.HOVER INDUSTRIES\n"<<"3.TURBO LIFT\n";
            cout<<"ENTER HELICOPTER YOU WANT TO TRAVVEEL WITH=";
            cin>>heli_choice;
            switch(heli_choice)
            {
            case(1):
                {
                    helicopterName="AERO BLADE";
                    price=6000;
                }
            case(2):
                {
                    helicopterName="HOVER INDUSTRIES";
                    price=6800;
                }
            case(3):
                {
                    helicopterName="TURBO LIFT";
                    price=7600;
                }
            }
            cout<<"ENTER DEPARTURE LOCATION=";
            cin>>departureLocation;
            cout<<"ENTER DESTINATION LOCATION=";
            cin>>destinationLocation;
            cout<<"NUMBER OF SEATS AVAILAIBLE="<<passengerCapacity<<endl;
            cout<<"ENTER THE NUMBER OF PASSENGERS=";
            cin>>bookedSeats;
            price=price*bookedSeats;
            vehicles.push_back(new PersonalHelicopter(helicopterName,departureLocation,destinationLocation,passengerCapacity,bookedSeats,price));
            // Book a seat on the personal helicopter
            cout<<"\nBooking a seat on the personal helicopter..." << endl;
            PersonalHelicopter* helicopter = dynamic_cast<PersonalHelicopter*>(vehicles[0]);
            helicopter->bookSeat();
            break;
        }


}
starhotel obj1;
    obj1.stay();
    obj1.choice();
    obj1.contd();
    obj1.contd2();
    obj1.contd3();
    obj1.contd4();
    obj1.contd5();
    obj1.contd6();
   // obj1.contd7();
   // obj1.contd8();
   Food f1;
    f1.askForMeal();
    f1.chooseMealType();
    f1.bookMeal();

    ofstream pbl;
    pbl.open("NEW.TXT", ios::app);
    pbl<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    pbl<<"\t\t\t\t\t\t\t\t\t\t\t*THANK YOU FOR CHOOSING KAVA*"<<endl;


    pbl<<"\t\t\t\t\t\t\tWE HOPE YOU HAVE THE BEST TIME OF YOUR LIFE"<<endl;

    pbl<<" HERE IS YOUR CONFIRMATION LETTER"<<endl;
    pbl<<"\n\nNAME:"<<m.name<<endl;

    pbl<<"AGE:"<<m.age<<endl;
    pbl<<"\n"<<endl;

    pbl<<"PHONE NUMBER:"<<m.num<<endl;
      pbl<<"\n"<<endl;
    pbl<<"TRANSPORTATION PRICE :"<<price<<endl;
      pbl<<"\n"<<endl;
     pbl<<"FOOD PRICE :"<<f1.price3<<endl;
       pbl<<"\n"<<endl;

      pbl<<"HOTEL PRICES:"<<obj1.price2<<endl;
        pbl<<"\n"<<endl;
      pbl<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

return 0;

}
