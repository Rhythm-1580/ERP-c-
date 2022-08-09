#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

vector<string> activities;

void Lib(){

    cout<<"You entered in lib"<<endl;
    activities.push_back("You entered in library");
    cout<<"Enter a for reading book"<<endl;
    cout<<"Enter b for self study"<<endl;
    cout<<"Enter c for exit from library"<<endl;

    char now;
    cin>>now;

    switch(now){
        case 'a': cout<<"You choose to Read book "<<endl;
        activities.push_back("You just Read book");
        cout<<"For come outside from library enter 0"<<endl;

        int exit;
        cin>>exit;

        if(exit==0){
        cout<<"Now you are redirecting to Listed Activities"<<endl;
        break;}

        case 'b':cout<<"You choose to self study"<<endl;
        activities.push_back("You have done self study");
        cout<<"For come outside from library enter 0"<<endl;

         int exit1;
         cin>>exit1;

         if(exit1==0){
        cout<<"Now you are redirecting to Listed Activities"<<endl;
        break;
        }

        case 'c':
            cout<<"Exited from lib and You are redirecting to Listed Activities"<<endl;
             activities.push_back("You exited from library");
            break;
        default:
            cout<<"Invalid input";
            break;
            }
}
void Hostel(){
    cout<<"You entered in Hostel"<<endl;
    activities.push_back("You entered in hostel");
    cout<<"Enter a for go into mess"<<endl;
    cout<<"Enter b for visit in room"<<endl;
    cout<<"Enter c for go to warden office"<<endl;
    cout<<"Enter d for exit from hostel and for redirecting to Listed Activities"<<endl;
     char now;
     cin>>now;
    switch(now){
        case 'a':cout<<"You choose to go to mess"<<endl;
        activities.push_back("You go to mess to take food");

        int exit;
        cout<<"for going outside from Hostel mess press 0"<<endl;
        cin>>exit;

        if(exit==0){
        cout<<"Now you are redirecting to Listed Activities";
        break;
        }

        case 'b':cout<<"You choose to visit room"<<endl;
        activities.push_back("You visited hostel room");

        int exit1;
        cout<<"You visited hostel room and For exit from hostel press 0"<<endl;
        cin>>exit1;

        if(exit1==0){
            cout<<"Now you are redirecting to Listed Activities"<<endl;
        break;}


        case 'c':cout<<"You choose to go to warden office"<<endl;
         activities.push_back("You visited warden office");

        int exit2;
        cout<<"You visited warden office and For exit from hostel press 0"<<endl;
        cin>>exit2;

        if(exit2==0){
            cout<<"Now you are redirecting to Listed Activities";
        break;}

        case 'd':
        cout<<"Exited from hostel and You are redirecting to Listed Activities"<<endl;
         activities.push_back("You Exited from hostel");
        break;

        default:
            cout<<"Invalid input";
            break;
            }
}

void Sq1(){
    cout<<"You entered in Sq1"<<endl;
    activities.push_back("You entered in sq1");
    cout<<"Enter a for go buy food"<<endl;
    cout<<"Enter b for go buy drink"<<endl;
    cout<<"Enter c for buy nothing"<<endl;

    char now;
    cin>>now;
    switch(now){
        case 'a': cout<<"You buy some food from sq1"<<endl;
        activities.push_back("You buy some food from sq1");

        int exit;
        cout<<"For going outside from sq1 press 0"<<endl;
        cin>>exit;

        if(exit==0){
        cout<<"Now you are redirecting to Listed Activities";
        break;
        }

        case 'b':cout<<"You buy some drinks from sq1"<<endl;
        activities.push_back("You buy some drinks from sq1");
        int exit1;
        cout<<"For going outside from sq1 press 0"<<endl;
        cin>>exit1;

        if(exit1==0){
        cout<<"Now you are redirecting to Listed Activities";
        break;
        }
        case 'c':cout<<"You are not buying anything"<<endl;
         activities.push_back("You not buy anything from sq1");
        int exit2;
        cout<<"For going outside from sq1 press 0"<<endl;

        activities.push_back("You not buy anything from sq1");

        cin>>exit2;

        if(exit2==0){
        cout<<"Now you are redirecting to Listed Activities";
        break;
        }

        default:
            cout<<"Invalid input";
            break;
            }
}
void Turing(){
    cout<<"You entered in Turing"<<endl;
    activities.push_back("You entered in Turing");

    cout<<"Enter a for Attend lecture"<<endl;
    cout<<"Enter b for meet with mentor"<<endl;
    cout<<"Enter c for exit from Turing and for redirecting to Listed Activities"<<endl;

    char now;
    cin>>now;
 switch(now){
        case 'a': cout<<"You attended the lecture in Turing"<<endl;
        activities.push_back("You attended the lecture in Turing");

        int exit;
        cout<<"For going outside from Turing press 0"<<endl;
        cin>>exit;

        if(exit==0){
        cout<<"Now you are redirecting to Listed Activities";
        break;
        }

        case 'b':cout<<"You done a meeting with mentor"<<endl;
        activities.push_back("You done a meeting with mentor");
        int exit1;
        cout<<"For going outside from Turing press 0"<<endl;
        cin>>exit1;

        if(exit1==0){
        cout<<"Now you are redirecting to Listed Activities";

        break;
        }
        case 'c':
            activities.push_back("You exited from Turing");
        break;

        default:
            cout<<"Invalid input";
            break;
            }
}


int main(){

int Value;
int Value2;
cout<<"Press '1' for enter in university"<<endl;
cout<<"Press '2' for not want to enter in university"<<endl;

cin>>Value;
if(Value==1){
    cout<< "You are in uni"<<endl;
while(true){
switch(Value){
case 1:
        cout<<"What you want to do now"<<endl;
        cout<<"Press '1' for go in library"<<endl;
        cout<<"Press '2' for go in hostel"<<endl;
        cout<<"Press '3' for go in Square one"<<endl;
        cout<<"Press '4' for go in Turing"<<endl;
        cout<<"Press '5' for do nothing"<<endl;
        cin>>Value2;

switch(Value2){
case 1:
    Lib();
       int exit2;
    break;
case 2:
    Hostel();
    break;
case 3:
    Sq1();
    break;
case 4:
    Turing();
    break;
case 5:
    cout<<"You are doing nothing and get out from here ;;"<<endl;

    if(activities.empty()){
    exit(0);
    break;
    }
    else{
    cout<<"Hence Your Activities are"<<"-->"<<endl;
    for(string activity : activities){
        cout<<activity<<endl;}
    }
    exit(0);
    break;


default:
    cout<<"Invalid input"<<endl;
    break;

 }
break;

case 2:
    exit;
    break;
default:
    cout<<"Invalid input"<<endl;
    break;
    }
}
}
return 0;
}



