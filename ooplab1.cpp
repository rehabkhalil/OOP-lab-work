#include<iostream>
#include<string>
using namespace std;
void KMtoM(){
	double km,distance;
	cout<<"Enter value to convert";
	cin>>km;
	distance=km*0.621;
	cout<<"The conversion km to miles = "<<distance<<endl;
}
void CtoF(){
	double c,f;
	cout<<"Enter value to convert";
	cin>>c;
	f=(c*9/5)+32;
	cout<<"The conversion Celcius to Fahrenheit = "<<f<<endl;
}
void time(){
	int sec,hour,min;
	cout<<"Enter the time in seconds: ";
	cin>>sec;
	hour=sec/3600;
	min=(sec%3600)/60;
	sec=sec%60;
	cout<<"Time is "<<hour<<"hour"<<min<< "minutes"<<sec<<"seconds";	
}
int main(){
	int choice;
	cout<<"Conversion you want to perform"<<endl;
	cout<<"1.kilometers to miles"<<endl;
	cout<<"2.celcius to fahrenheit"<<endl;
	cout<<"3.seconds into hours,minutes and seconds"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			KMtoM();
			break;
			case 2:
				CtoF();
				break;
				case 3:
					time();
					break;
					default:
					cout<<"Invalid"	;
	}
	
}