#include<iostream>
using namespace std;
int main(){
	int quantity,choice;
	int Qroom=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
	int Sroom=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
	int total_room=0, total_pasta=0, total_burger=0, total_noodle=0, total_shake=0, total_chicken=0;
	cout<<"\n\t\t\tQuantity of items :"<<endl;
	cout<<"Rooms :";
	cin>>Qroom;
	cout<<"Pasta :";
	cin>>Qpasta;
	cout<<"Burger :";
	cin>>Qburger;
	cout<<"Noodle :";
	cin>>Qnoodle;
	cout<<"Shake :";
	cin>>Qshake;
	cout<<"Chicken :";
	cin>>Qchicken;
	cout<<"\tElease Enter the choice from the menu option :"<<endl;
	label2:
	m:
	cout<<"1. Room "<<endl;
	cout<<"2. Pasta"<<endl;
	cout<<"3. Burger"<<endl;
	cout<<"4. Noodle"<<endl;
	cout<<"5. Shake"<<endl;
	cout<<"6. Chicken"<<endl;
	cout<<"7. Information regarding sale and collection"<<endl;
	cout<<"8. Exit";
	cout<<endl;
	cout<<"Please Enter the choice :";
	cin>>choice;
	switch(choice){
		case 1:
			label1:
			cout<<"Enter the number of room you want :";
			cin>>quantity;
			if(Qroom-Sroom>=quantity){
				Sroom+=quantity;
				total_room+=quantity*1200;
				cout<<quantity<<"rooms have been alloted to you ";
				goto label2;
			}
			else{
				cout<<"Only "<<Qroom-Sroom<<"Room remaining in the hotel"<<endl;
				break;
			}
		case 2:
			cout<<"Enter the number of pasta you want :";
			cin>>quantity;
			if(Qpasta-Spasta>=quantity){
				Spasta+=quantity;
				total_pasta+=quantity*200;
				cout<<quantity<<"pasta have been delivered to you";
			}
			else{
				cout<<"only "<<Qpasta-Spasta<<"Pasta remaining in the hotel";
				break;
			}
		case 3:
			cout<<"Enter the number of burger you want :";
			cin>>quantity;
			if(Qburger-Sburger>=quantity){
				Sburger+=quantity;
				total_burger+=quantity*200;
				cout<<quantity<<"burger have been delivered to you";
			}
			else{
				cout<<"only "<<Qburger-Sburger<<"burger remaining in the hotel";
				break;
			}
		case 4:
			cout<<"Enter the number of Noodle you want :";
			cin>>quantity;
			if(Qnoodle-Snoodle>=quantity){
				Snoodle+=quantity;
				total_noodle+=quantity*200;
				cout<<quantity<<"noodle have been delivered to you";
			}
			else{
				cout<<"only "<<Qnoodle-Snoodle<<"noodle remaining in the hotel";
				break;
			}
		case 5:
			cout<<"Enter the number of Shake you want :";
			cin>>quantity;
			if(Qshake-Sshake>=quantity){
				Sshake+=quantity;
				total_shake+=quantity*200;
				cout<<quantity<<"shake have been delivered to you";
			}
			else{
				cout<<"only "<<Qshake-Sshake<<"shake remaining in the hotel";
				break;
			}
			case 6:
			cout<<"Enter the number of chicken you want :";
			cin>>quantity;
			if(Qchicken-Schicken>=quantity){
				Schicken+=quantity;
				total_chicken+=quantity*200;
				cout<<quantity<<"chicken have been delivered to you";
			}
			else{
				cout<<"only "<<Qchicken-Schicken<<"chicken remaining in the hotel";
				break;
			}
			case 7:
				cout<<"\t\t Detail of sale and collection "<<endl;
				cout<<"\n\t Number of room we had :"<<Qroom;
				cout<<"\n\t Number gave for rent :"<<Sroom;
				cout<<"\n\t Remaining Room :"<<Qroom-Sroom;
				cout<<"\n\t Total collection of room :"<<total_room;
				cout<<endl;
				cout<<"\n\t Number of pasta we had :"<<Qpasta;
				cout<<"\n\t Number of pasta gave for for sold :"<<Spasta;
				cout<<"\n\t Remaining pasta :"<<Qpasta-Spasta;
				cout<<"\n\t Total collection of pasta :"<<total_pasta;
				cout<<endl;
				cout<<"\n\t Number of burger we had :"<<Qburger;
				cout<<"\n\t Number of burger gave for sold :"<<Sburger;
				cout<<"\n\t Remaining burger :"<<Qburger-Sburger;
				cout<<"\n\t Total collection of burger :"<<total_burger;
				cout<<endl;
				cout<<"\n\t Number of noodle we had :"<<Qnoodle;
				cout<<"\n\t Number of noodlegave for rent sold:"<<Snoodle;
				cout<<"\n\t Remaining noodle :"<<Qnoodle-Snoodle;
				cout<<"\n\t Total collection of noodle :"<<total_noodle;
				cout<<endl;
				cout<<"\n\t Number of shake we had :"<<Qshake;
				cout<<"\n\t Number of shake  gave for shake :"<<Sshake;
				cout<<"\n\t Remaining shake :"<<Qshake-Sshake;
				cout<<"\n\t Total collection of shake :"<<total_shake;
				cout<<endl;
				cout<<"\n\t Number of chicken we had :"<<Qchicken;
				cout<<"\n\t Number of chicken gave for sold :"<<Schicken;
				cout<<"\n\t Remaining chicken:"<<Qchicken-Schicken;
				cout<<"\n\t Total collection of chicken :"<<total_chicken;
				cout<<endl;
				break;
			case 8:
				exit(0);
				default: cout<<"invalid input.Please enter between 1-8 :";
				goto m;
				
	
	}
}
