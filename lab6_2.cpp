#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
 string name;
cout <<"Fahsai: Sawadee ka...Can you tell me your name?"<<"\n";
cout<<"?????:"<< name ;
getline(cin,name);
cout<<"Fahsai: Wow!!! "<< name << " that is a really cool name."<<"\n";
int id;
cout<<"Fahsai: I think you are Engineering student. What is your student ID?"<<"\n";
cout<< name <<":";
cin >> id;
int gear;
gear = (id/pow(10,7))-12;
cin.ignore();
cout<<"Fahsai: I think you may be GEAR"<< gear <<" I have a free movie tickets for you."<<"\n"; 
cout<<"Fahsai: Let's go to cinema together!!!"<<"\n"; 
string movie;
cout<<"Fahsai: What movie do you want to watch?"<<"\n";
cout <<name <<":"<< movie ;
getline(cin,movie);
string day;
cout<<"Fahsai: So....which day are you free to go with me?"<<"\n";
cout<<name<<":"<<day;
getline(cin,day);
string x;
cout<<"Fahsai:" << day <<"....that is OK!!! I'm looking forward to watch " << movie <<" with you."<<"\n";
cout << name <<":"<< x ;
getline(cin,x);
cout<<"Fahsai: 555+ see you "<< day <<" Bye Bye" <<"\"(^ ^)/"<<"\n";
   return 0;
}