#include <iostream> 
#include <iomanip>
#include <string>
using namespace std; 

const double rService = 10.00; 
const double rPerMinute = 0.20;
const double pService = 25.00;
const double pPerMinuteDay = 0.10;
const double pPerMinuteNight = 0.05;


int main()

{
	
	int regMinutes;
	int dayMinutes;
	int nightMinutes; 
	int accountNum;
	char serviceType;
	double amountDue; 
	
	cout<<"------Welcome to the project------\n";
	cout<<"------on------\n";
	cout<<"------Mobile Billing------\n";
	cout<<"------Submitted by Khaudija Riaz------\n";
	cout<<"------Riphah International University Lahore------\n";
/*	cout << "Please enter your 6-digit account number: ";  
	cin >> accountNum;
	cout << endl;
*/
    do{
		cout << "\n\n\nPlease enter your 6-digit account number: "; 
		cin >> accountNum;
	  }while (accountNum >999999 || accountNum < 100000);
/*	 if (accountNum > 99999 && accountNum < 999999)
		{
		  cin >> accountNum; 
		  cout << endl;
		}
	 else 
	    {
		  cout << "Invalid entry, please re-enter a 6-digit account number: "; 
		  cin >> accountNum;
		  cout << endl; 
	    }
*/
	cout << "\nEnter a service code: R or r (Regular), P or p (Premium): ";
    cin >> serviceType;
	cout << endl; 
		
	switch (serviceType)
	 {
	 case 'r':
	 case 'R':
		 cout << "\nEnter the number of minutes used: ";
		 cin >> regMinutes; 
		 cout << endl; 

	  if (regMinutes > 50)
	     {
		   amountDue = rService + ((regMinutes - 50) * rPerMinute);
	     }
      else
        amountDue = rService;

     break;
	 
	 case 'p':
	 case 'P': 
		 cout << "Enter the minutes used for the day: ";
		 cin >> dayMinutes; 
		 cout << endl;     

      if (dayMinutes > 75) 
		  amountDue = pService + ((dayMinutes - 75) * pPerMinuteDay);
	  else
          amountDue = pService;

	     cout << "Enter the minutes used for the night: ";
     	 cin >> nightMinutes; 
		 cout << endl;
      
      if (nightMinutes > 100)
		  amountDue = pService + ((nightMinutes - 100) * pPerMinuteNight);
	  else 
		  amountDue = pService; 

	  break;

	 }

	 cout << "Account Number: " << accountNum << endl; 
	 cout << "Type of Service: " << serviceType << endl; 

	 switch (serviceType)
	     {
		 case 'R':
		 case 'r':
		 cout << "Number of minutes used (if regular): " << regMinutes << endl; 
		 break;
	 
		 case 'P':
		 case 'p':
	     cout << "Number of minutes used during the day (if premium): " << dayMinutes << endl; 
 	     cout << "Number of minutes used during the night (if premium): " << nightMinutes << endl; 
 
		 break;

	     }

	 cout << fixed << showpoint; 
	 cout << setprecision(2);
	 cout << "Amount Due = $ " << amountDue << endl;

	return 0;
	
}

