/**
FIXME: Put names, teamwork number, and purpose here.
*/
#include <iostream>
using namespace std;

class DayOfYear
{
public:
	DayOfYear(int entermonth = 1, int enterday = 1){ //constructor
		month = entermonth;
		day = enterday;
		check_date();
	}
    void input(){
		cout << "Enter the month as a number: ";
		cin >> month;
		cout << "Enter the day of the month: ";
		cin >> day;
		check_date();
	}
    void set(int new_month, int new_day){
    //Precondition: new_month and new_day form a possible date.
    //Postcondition: The date is reset according to the arguments.
		month = new_month;
		day = new_day;
		check_date();
	}
    int get_month( ){//Returns the month, 1 for January, 2 for February, etc.
		return month;
	}
    int get_day( ){ //Returns the day of the month.
		return day;
	}
	void output() {
		cout << month << "/" << day << endl;
	}
private:
    void check_date( ) {
		if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
		{
			cout << "Illegal date. Aborting program.\n";
			exit(1); //exits program
		}
	}
    int month;
    int day;
};

int main( ){
	char hold;

    DayOfYear birthday, bach_birthday(3,21);
    cout << "Enter your birthday.\n";
    birthday.input( );
    cout << "You were born on: ";
    birthday.output( );

    cout << "J.S. Bach's birthday is ";
    bach_birthday.output();

    if ( birthday.get_month() == bach_birthday.get_month() &&
               birthday.get_day() == bach_birthday.get_day())
        cout << "You share a birthday with Johann Sebastian Bach!\n";
    else
        cout << "You and Johann Sebastian each have your own special days!\n";


	cin >> hold; //holds console open in some cases
    return 0;
}


