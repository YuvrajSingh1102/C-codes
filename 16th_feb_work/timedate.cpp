/*Program to find out the current time and date and difference between them*/

#include <iostream>
#include <ctime>
using namespace std;
	
class Time		//class Time defination
{
	    private:
	        int hour,minute,seconds;
	    
	    public:
	        void setTime()		//function to set time in class variable.
	        {
	            time_t now = time(0);
	            tm *ltm = localtime(&now);
	            hour = ltm->tm_hour;
	            minute = ltm->tm_min;
	            seconds = ltm->tm_sec;
	        }
	        
	        void getTime()		//function to get values
	        {
	            cout << "Current time: "<< hour << ":"<< minute << ":" << seconds << endl;
	        }
	        
	        void sleepTime(int h, int min, int sec)		//functiom to find out difference
	        {
	            cout << "You slept for " << hour - h << " hours " << 60 + minute - min << " minutes and " << 60 + seconds - sec << " seconds" << endl;
	        }
};			//end of the class
	
class Date			//class date defination
{
	    private:
	    int day,month,year;
	    
	    public:
	    void setDate()		//function to set date
	    {
	        time_t now = time(0);
	        tm *ltm = localtime(&now);
	        day = ltm->tm_mday;
	        month = 1 + ltm->tm_mon;
	        year = 1900 + ltm->tm_year;
	    }
	    void getDate()		//function to get date
	    {
	        cout << "Current date: " << day << "/" << month << "/" << year << endl;
	    }
	    void setDOB(int bd, int bm, int by)		//function to det DOB
	    {
	        day = bd;
	        month = bm;
	        year = by;
	        cout << "Birthdate is " << day << "/" << month << "/" << year << endl;
	    }
	    void findAge(int birth_year)		
	    {
	        setDate();
	        cout << "Age of user is " << year - birth_year << endl;
	    }
	    
};			//end of the class
	
	
int main()
{
		//object declaration
		Time t1;
		Date d1;
	
		t1.setTime();
		t1.getTime();
		t1.sleepTime(10,30,0);
	
		d1.setDate();
		d1.getDate();
	
		d1.setDOB(30, 11, 2000);
		d1.findAge(2000);
	
		return 0;
	}
