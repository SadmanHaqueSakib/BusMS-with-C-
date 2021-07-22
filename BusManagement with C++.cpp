using namespace std;
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <ctime> 
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int greentext()
{	
	SetConsoleTextAttribute(hConsole, 2);  
}
int whitetext()
{
	SetConsoleTextAttribute(hConsole, 15);  
}
int redtext ()
{
	SetConsoleTextAttribute(hConsole,  4);  
}
int bluetext ()
{
	SetConsoleTextAttribute(hConsole, 11);  
}
int yellowtext ()
{
	SetConsoleTextAttribute(hConsole, 14);  
}
int darktext ()
{
	SetConsoleTextAttribute(hConsole, 8);  
} 
bool MenuLoop = true;
string name ("*****");
string surname ("*****");
string street ("*****");
string area ("*****");
string city ("*****");
string postcode ("*****");
string tel ("00");
string busName;
int house (00);
int startDate(00);
int startMonth (00);
int startYear(00);
int endDate(00);
int endMonth(00);
int endYear(00);
int passengerNumber(00);
int passengerSelection;
string passengerType("*****");
string bus ("*****");
string seat;
int busDate(00);
int busMonth(00);
int busYear(00);
double busPrice(0.00);
double satkhira = 450.00;
double ak = 400.00;
double royal = 900.00;
double desh = 450.00;
double ena = 550.00;
double shohag = 380.00;
double sakura = 400.00;
double sp = 500.00;
void resetpassengerDetails()
{ 
	name =     "*****";
     surname =  "*****";
     house = 00;
     street = "*****";
     area = "*****";
     city = "*****";
     postcode = "*****";
     startDate  = 00;
     startMonth = 00;
     startYear  = 00;
     endDate  = 00;
     endMonth = 00;
     endYear  = 00;
     tel = "00";
     passengerNumber = 00;
     passengerType   = "*****";
     bus = "*****";
     busDate = 00;
     busMonth = 00;
     busYear = 00;
     busPrice = 00;
};
void bookingForm()
{
	system ("cls");
	bluetext();
	cout << "\t\t\t      Booking Details\n";
	whitetext();
	cout << "\t________________________________________________________________\n\n";
	cout << "\tBooking Form   \t";
	cout << "\t  passenger: ";
	if (name != "*****")
	{
		greentext();
	}
	cout << name << " ";             
	whitetext();    
	if (surname != "*****")
	{
		greentext();
	}
	cout << surname << "\n";
	whitetext();
	cout << "\n\t\t         passenger Type: ";
	if (passengerType != "*****")
	{
		greentext();
	}
	cout << "Member";
	whitetext();
	cout << "\n\t\t                bus: ";
	if (bus != "*****")
	{
		greentext();
	}
    	cout << busName;
    	whitetext();
     cout << "\n\t\t           bus Date: ";
    	if (busDate != 00)
	{
		greentext();
	}
    	cout << busDate << "/" << busMonth << "/" << busYear;
	whitetext();
     cout << "\n\t\t          seat no: ";
    	if (busPrice != 00.00)
	{
		greentext();
	}
    	cout << seat;
    	whitetext();
    	cout << "\n\t________________________________________________________________\n\n";
    	cout << "\n";
};
void bookingScript()
{
	double discount;
	int busChoice;
	char confirmationSave;
    	if (passengerType == "Normal")
    	{
		discount = 0.50;
	}
    	if (passengerType == "Chair Coach")
	{
     	discount = 0.30;
    	}
    if (passengerType == "Air Conditioned")
    	{
     	discount = 0;
    	}
    	if (passengerType == "*****")
	{
     	discount = 1.0;
    	}
	bookingForm();
	cout << "Please select an coach:\n\n";
	cout << "1 - Satkhira Express\n";
	cout << "2 - AK Travels\n";
	cout << "3 - Royal Coach\n";
	cout << "4 - Desh Travels\n";
	cout << "5 - Ena Paribahan\n";
	cout << "6 - Shohag Paribahan\n";
	cout << "7 - Sakura Express\n";
	cout << "8 - SP Golden Line\n>";
	cin >> busChoice;
	if (busChoice == 1)
	{
		busName="Satkhira Express"; busPrice = satkhira * discount;
	}
	if (busChoice == 2)
	{
		busName="AK Travels"; busPrice = ak * discount;
	}
	if (busChoice == 3)
	{
		busName= "Royal Coach"; busPrice = royal * discount;
	}
	if (busChoice == 4)
	{
		busName ="Desh Travels"; busPrice = desh * discount;
	}
	if (busChoice == 5)
	{
		busName = "Ena Paribahan"; busPrice = ena * discount;
	}
	if (busChoice == 6)
	{
		busName = "Shohag Paribahan"; busPrice = shohag * discount;
	}
	if (busChoice == 7)
	{
		bus = "Sakura Express"; busPrice = sakura * discount;
	}
	if (busChoice == 8)
	{
		busName = "SP Golden Line"; busPrice = sp * discount;
	}
 	bookingForm();
	cout << "\tPlease enter Booking Date(DD): ";
	cin >> busDate;
	while (cin.fail() ||   busDate > 31 || busDate < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> busDate;
    	}
    	bookingForm();
    	cout << "\tPlease enter Booking Month(MM): ";
    	cin >> busMonth;
    	while (cin.fail() || busMonth > 12 || busMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> busMonth;
	}
    	bookingForm();
    	cout << "\tPlease enter Booking Year(YY): ";
    	cin >> busYear;
    	while (cin.fail() || busYear > 99 || busYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid Year (1-99): ";
     	cin >> busYear;
	}
	bookingForm();
	cout<<"Enter your favourite seat(W1/M1): ";
	cin>>seat;
    	bookingForm();
    	cout << "Is this information correct? <Y/N>";
    	cin >> confirmationSave;
    	if (confirmationSave == 'y' || confirmationSave == 'Y')
	{
    	string saveBookingName;
    	stringstream out;
    	cout << name << " " << surname << ".booking";
    	saveBookingName = out.str(); 
    	ofstream myfile;       
    	myfile.open (saveBookingName.c_str(), ios::out);
    	myfile << name << "\n";
    	myfile << surname << "\n";
    	myfile << passengerType << "\n";
    	myfile << bus << "\n";
    	myfile << busDate << "\n";
    	myfile << busMonth << "\n";
    	myfile << busYear << "\n";
    	myfile << seat;
    	myfile.close();
    	bookingForm();
    	greentext();
    	cout << "\tBooking have been saved\n\n\t";
    	whitetext();
    	};
    	system ("pause");
};
void passengerForm()
{ 
	system ("cls");
	bluetext();
	cout << "\t\t\t      passenger Details\n";
	whitetext();
	cout << "\t	________________________________________________________________\n\n";
	cout << "\tpassenger Form  ";
	cout << "\t  passenger: ";
	if (name != "*****")
	{
		greentext();
	} 
	cout << name << " ";              
	whitetext();    
	if (surname != "*****")
	{
		greentext();
	}
	cout << surname << "\n";
	whitetext();
	cout << "\t\t\t";
	cout << "\t Address: ";
	if (house != 00)
	{
		greentext();
	}
	cout << house << " ";
	whitetext();
	if (street != "*****")
	{
		greentext();
	}
	cout << street << "\n";
	whitetext();
	cout << "\t\t";
	cout << "\t\t          ";
	if (area != "*****")
	{
		greentext();
	}
	cout << area << "\n";
	whitetext();
	cout << "\t\t\t\t          ";
	if (city != "*****")
	{
		greentext();
	}
	cout << city << "\n";
	whitetext();
	cout << "\t\t\t\t          ";
	if (postcode != "*****")
	{
		greentext();
	}
	cout << postcode << "\n";
	whitetext();
	cout << "\t\t\t   Telephone: ";
	if (tel != "00")
	{
		greentext();
	}
	cout << tel;
	whitetext();
     cout << "\t\t\t      Start date: ";
	if (startDate != 00)
	{
		greentext();
	}
	cout << startDate << "/";
    	whitetext();
	if (startMonth != 00)
	{
		greentext();
	}	
	cout << startMonth << "/";
	whitetext();
	if (startYear != 00)
	{
		greentext();
	}
	cout << startYear;
	whitetext();
	cout << "\tEnd date: ";
	whitetext();
	if (endDate != 00)
	{
		greentext();
	}
	cout << endDate << "/";
	whitetext();
	if (endMonth != 00)
	{
		greentext();
	}
	cout << endMonth << "/";
	whitetext();
	if (endYear != 00)
	{
		greentext();
	}
	cout << endYear << "\n";
	whitetext();
	cout << "\t________________________________________________________________\n\n";
	cout << "\t\t       passenger number: ";
	if (passengerNumber != 00)
	{
		greentext();
	}
	cout << passengerNumber;
	whitetext();
	cout << "\n\t\t         passenger Type: ";
	if (passengerType != "*****")
	{
		greentext();
	}
	cout << passengerType;
	whitetext();
	cout << "\n\t________________________________________________________________\n\n";
	cout << "\n";
};
void savefile()
{
    string saveFileName;
    stringstream out;
    out << name << " " << surname;
    saveFileName = out.str();
    ofstream myfile;              
    myfile.open (saveFileName.c_str(), ios::out);
    myfile << name << "\n";
    myfile << surname << "\n";
    myfile << house << "\n";
    myfile << street << "\n";
    myfile << area << "\n";
    myfile << city << "\n";
    myfile << postcode << "\n";
    myfile << tel << "\n";
    myfile << startDate << "\n";
    myfile << startMonth << "\n";
    myfile << startYear << "\n";
    myfile << endDate << "\n";
    myfile << endMonth << "\n";
    myfile << endYear << "\n";
    myfile << passengerNumber << "\n";
    myfile << passengerType << "\n";
    myfile.close();
    passengerForm();
    greentext();
    cout << "\tDetails have been saved\n\n\t";
    whitetext();
    system ("pause");
    }
 
void passengerDetails()
{
 
	char saveYN;
 	passengerForm();
	cout << "\tPlease enter customers first name: ";
	cin >> ws;
	getline (cin, name);
	passengerForm();
	cout << "\tPlease enter customers surname: ";
	cin >> surname;
	passengerForm();
	cout << "\tPlease enter customers house number: ";
	cin >> house;
     while (cin.fail()||  house < 1)
	{
		cin.clear(); 
		cin.ignore();
		cout << "\n\tPlease enter a valid house number: "; 
		cin >> house;
	}
	passengerForm();
	cout << "\tPlease enter customers street: ";
	cin >> ws;                   
	getline (cin, street); 
	passengerForm();
	cout << "\tPlease enter customer area: ";
	getline (cin, area);
	passengerForm();
	cout << "\tPlease enter customer city: ";
	getline (cin, city);
	passengerForm();
	cout << "\tPlease enter customer postcode: ";
	cin >> ws;
	getline (cin, postcode);
	passengerForm();
	cout << "\tPlease enter Telephone Number: ";
	getline (cin, tel);
	while (cin.fail())
	{
     	cin.clear();
     	cin.ignore();
     	cout << "\tPlease enter Telephone Number: ";
     	cin >> tel;
	}
	passengerForm();
	cout << "\tPlease enter passenger Start Date(DD): ";
	cin >> startDate;
	while (cin.fail() || startDate > 31 || startDate < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> startDate;
	}
	passengerForm();
	cout << "\tPlease enter passenger Start Month(MM): ";
	cin >> startMonth;
	while (cin.fail() || startMonth > 12 || startMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> startMonth;
	}
	passengerForm();
	cout << "\tPlease enter passenger Start Year(YY): ";
	cin >> startYear;
	while (cin.fail() || startYear > 99 || startYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid Year (1-99): ";
     	cin >> startYear;
	}
	passengerForm();
	cout << "\tPlease enter passenger End Date(DD): ";
	cin >> endDate;
	while (cin.fail() || endDate > 31 || endDate < 1){
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> endDate;
	}
	passengerForm();
	cout << "\tPlease enter passenger End Month(MM): ";
	cin >> endMonth;
	while (cin.fail() || endMonth > 12 || endMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> endMonth;
	}
	passengerForm();
	cout << "\tPlease enter passenger End Year(YY): ";
	cin >> endYear;
	while (cin.fail() || endYear > 99 || endYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid year (1-99): ";
     	cin >> endYear;
	}
	passengerForm();
	cout << "\tEnter 6 Digit passenger card number: ";
	cin >> passengerNumber;
	while (cin.fail() || passengerNumber < 100000 || passengerNumber > 999999)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid passenger card number (6 Digits): ";
     	cin >> passengerNumber;
	}
	passengerForm();
	cout << "\tPlease enter passenger type:\n\t1 - Normal\n\t2 - Chair Coach\n\t3 - Air Conditioned\n\t> : ";
	cin >> passengerSelection;
	while (cin.fail() || passengerSelection < 1 || passengerSelection >3)
	{
     	cin.clear();
     	cin.ignore();            
     	cout << "\n\tPlease enter a valid passenger type.\n\t1 - Normal - 10.00 Per month\n\t2 - Chair Coach - 15.00 Per month\n\t3 - Air Conditioned  - 20.00 Per month\n\t> : ";
     	cin >> passengerSelection;
	}
	switch (passengerSelection)
	{
		case 1 :
			passengerType = "Normal";
     		break;
		case 2 :
     		passengerType = "Chair Coach";
     		break;
		case 3 :
     		passengerType = "Air Conditioned";
     		break;
	};
	passengerForm();
	cout << "\tSave these details to a file? <Y/N> ";
	cin >> saveYN;
	if (saveYN == 'y' || saveYN == 'Y')
	{
     	savefile();
	}
};
void createBooking()
{
 
    char confirm;
    system ("cls");
    char filebooking [100];
    ifstream file_ptr;
    cout << "\n\t\t\t\tCreate a Booking\n\n";
    system ("dir/b *.");
    cout << "\n\n\tPlease type the name of the passenger OR ";
    cout << "type x to return to main menu: ";
    cin.ignore();
    gets (filebooking);
    if (filebooking[0]  != 'x')
    {
 		file_ptr.open(filebooking,ios::in);
    		while(!file_ptr)
        	{
        		cout << "passenger does not exist\n";
        		gets (filebooking);
        		file_ptr.open(filebooking,ios::in);
        	}
        	getline(file_ptr, name);
        	getline(file_ptr, surname);
        	file_ptr >> house;
        	getline(file_ptr, street);
        	getline(file_ptr, street);
        	getline(file_ptr, area);
        	getline(file_ptr, city);
        	getline(file_ptr, postcode);
        	getline(file_ptr, tel);
        	file_ptr >> startDate>>startMonth>>startYear>>endDate>>endMonth>>endYear>>passengerNumber;
     	getline(file_ptr, passengerType); 
     	getline(file_ptr, passengerType);
		passengerForm();
     	greentext();
     	whitetext();
     	file_ptr.close();
		cout << "\n\tCreate booking for this passenger? <Y/N>";
    		cin >> confirm;
    		if (confirm == 'y' || confirm == 'Y')
		{
 			bookingScript();
        	}
    	};
};
 
void openFile()
{

	char confirm;
	system ("cls");
	char filebooking [100];
	ifstream file_ptr;
	cout << "\n\t\t\t\tCreate a Booking\n\n";
	system ("dir/b *.");
	cout << "\n\n\tPlease type the name of the passenger OR ";
	cout << "type x to return to main menu: ";
	cin.ignore();
	gets (filebooking);
    if (filebooking[0]  != 'x')
    {
 		file_ptr.open(filebooking,ios::in);
    		while(!file_ptr)
        	{
        		cout << "passenger does not exist\n";
        		gets (filebooking);
        		file_ptr.open(filebooking,ios::in);
        	}
     	getline(file_ptr, name);
     	getline(file_ptr, surname);
     	getline(file_ptr, passengerType);
     	getline(file_ptr, bus);
     	file_ptr >> busDate;
     	file_ptr >> busMonth;
     	file_ptr >> busYear;
     	file_ptr >> seat;
     	bookingForm();
     	greentext();
     	whitetext(); 
     	file_ptr.close();
     	system ("pause");
	}
}
void priceList()
{
	system ("cls");
	yellowtext();
	cout << "\t\tPrice List\n\n";
	cout << "\t\t\t\tBusess\n\t";
	cout << "\t\t\tNone Passenger  |  Normal  |  Chair Coach  |  Air Condition";
	cout << "\n\n\tSatkhira Express.......   \x9c" << satkhira << "\t          " << satkhira * 0.9 << "\t      " << satkhira * 0.85 << "   \t\t" << satkhira * 0.6;
	cout << "\n\n\tAK Travels.............   \x9c" << ak << "\t          " << ak * 0.9 << "\t      " << ak * 0.85 << "\t        " << ak * 0.6;
	cout << "\n\n\tRoyal Coach............   \x9c" << royal << "\t          " << royal * 0.9 << "\t      " << royal * 0.85 << "\t        " << royal * 0.6;
	cout << "\n\n\tDesh Travels...........   \x9c" << desh << "\t          " << desh  * 0.9 << "\t      " << desh * 0.85 << "\t        " << desh * 0.6;
	cout << "\n\n\tEna Paribahan..........   \x9c" << ena << "\t          " << ena * 0.9 << "\t      " << ena * 0.85  << "\t        " << ena * 0.6;
	cout << "\n\n\tShohag Paribahan.......   \x9c" << shohag << "\t          " << shohag * 0.9 << "\t      " << shohag * 0.85 << "   \t\t" << shohag * 0.6;
	cout << "\n\n\tSakura Express.........   \x9c" << sakura << "\t          " << sakura * 0.9 << "\t      " << sakura * 0.85 << "\t        " << sakura * 0.6;
	cout << "\n\n\tSP Golden Line.........   \x9c" << sp << "\t          " << sp * 0.9 << "\t      " << sp * 0.85 << "\t\t" << sp * 0.6;
	cout << "\n\n\n\t";
	whitetext();
system ("pause");
};
void exit()
{
	MenuLoop = false; 
}; 
void mainMenu()
{
	int menuchoice;
	system ("cls");
	
	
	cout << "\n\n\n\t\t\t\t*************************\n";
	cout <<       "\t\t\t\t**Bus Management System**\n";
	cout <<       "\t\t\t\t*******************-Sadman\n";
	cout <<       "\n\n\t\t\t\n";
	cout << "\t\t\t\t1 - Register passenger\n\n";
	cout << "\t\t\t\t2 - Create a new booking\n\n";
	cout << "\t\t\t\t3 - Show Bookings\n\n";
	cout << "\t\t\t\t4 - View price list\n\n";
	cout << "\t\t\t\t5 - Exit\n\n\n";
	cout << "\tPlease choose an option: ";
	cin >> menuchoice;
	while (cin.fail())
	{	cin.clear();
     	cin.ignore();
     	cout << "\n\t\tPlease enter a valid number:"; 
		cin >> menuchoice;
	};
	switch (menuchoice)
	{
     	case 1:
          	passengerDetails();
          	break;
     	case 2:
          	createBooking();
          	break;
     	case 3:
          	openFile();
          	break;
        case 4 :
            priceList();
            break;
		case 5:
          	exit();
         	break;
     	default:
     	cout << "\n\tPlease enter a correct menu choice\n\n\t";
     	system ("pause");
	};
};
void password(){
 
    string pass;
    int passCount = 0;
 
    cout << "\n\n\n\t\t\t\t******************\n";
    cout <<       "\t\t\t\t**Enter Password**\n";
    cout <<       "\t\t\t\t******************\n";
    cout <<       "\n\n\t\t\t\t>";
    cin  >> pass;           
 
    while (pass != "password")
    {
        passCount ++;
        redtext();
        cout << "\t\t\t\tPassword Incorrect!\n";
        if (passCount >= 3)             
        {
                redtext();
                cout << "\n\t\t\t\tLOGIN FAILED!";
                whitetext();
                exit(0);
        };
 
        whitetext();
        cout << "\t\t\t\tTry Again:\n\t\t\t\t>";
        cin >> pass;
 
        };
    greentext();
    cout << "\n\t\t\t\tPassword Accepted!\n\t\t\t\tPress any key to continue...";
    whitetext();
    cin.ignore();
    cin.get();
};
int main()
{
	password();                                
	while (MenuLoop == true)
	{
		mainMenu();
	}     
	return 0;
}

