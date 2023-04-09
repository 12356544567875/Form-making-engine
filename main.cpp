// Copyright (c) ghgltggamer
// Written by ghgltggamer
#include "lib.h"

// main function this function will contain all the main source code
int main(){
	
	// version 
	float version = 0.1;
	
	// write the basic info in console
	cout<<"Form maker a simple form making app build in C++ by ghgltggamer . Copyright (c) 2023 ghgltggamer";
	
	// create 2 new lines
	cout<<endl<<endl;
	
	// set text color to lime
	system("color A");
	
	// ask for basic info of form
	cout<<"Create a form with your compainy logo and etc"<<endl<<endl;
	
	// get form name
	cout<<"Enter your form name : ";
	string form_Name;
	cin>>form_Name;
	ofstream form(form_Name + ".html");
	
	
	// ask for form coloms 
	cout<<endl<<endl;
	cout<<"Enter your form coloms quantity(max should be 6 and min should be 1): ";
	
	
	// input for form coloms
	int form_colom;
	cin>>form_colom;
	
	
	// if form input = 1 then
	
	if (form_colom == 1){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" : <input type='email' name='email'>"<<endl<<endl<<"<body></html>";
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}
	
	
	
	
	
	
	
	
	
	
	// if lines are 2
		else if (form_colom == 2){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		cout<<endl<<"colom 2 text : ";
		cin>>colom_2;

		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" : <input><br><br>"<<endl<<colom_2<<" : <input>"<<endl<<endl<<"<body></html>";
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}


// if lines = 3

		else if (form_colom == 3){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		cout<<endl<<"colom 2 text : ";
		cin>>colom_2;
		
		cout<<endl<<"colom 3 text : ";
		cin>>colom_3;

		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" :  <input><br><br>"<<endl<<colom_2<<" : <input><br><br>"<<endl<<colom_3<<" : <input>"<<endl<<endl<<"<body></html>";
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}
	
	
	// if lines = 4
	
		else if (form_colom == 4){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		cout<<endl<<"colom 2 text : ";
		cin>>colom_2;
		
		cout<<endl<<"colom 3 text : ";
		cin>>colom_3;
		
		cout<<endl<<"colom 4 text : ";
		cin>>colom_4;

		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" :  <input><br><br>"<<endl<<colom_2<<" : <input><br><br>"<<endl<<colom_3<<" : <input><br><br>"<<colom_4<<" : <input>"<<endl<<endl<<"<body></html>";
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}
	
	
	
	// if lines = 5
		
		else if (form_colom == 5){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		cout<<endl<<"colom 2 text : ";
		cin>>colom_2;
		
		cout<<endl<<"colom 3 text : ";
		cin>>colom_3;
		
		cout<<endl<<"colom 4 text : ";
		cin>>colom_4;
		
		cout<<endl<<"colom 5 text : ";
		
		cin>>colom_5;

		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" :  <input><br><br>"<<endl<<colom_2<<" : <input><br><br>"<<endl<<colom_3<<" : <input><br><br>"<<colom_4<<" : <input><br><br>"<<endl<<colom_5<<" : <input>"<<endl<<endl<<"<body></html>";
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}
	
	
	
	// if lines = 6
			else if (form_colom == 6){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		cout<<endl<<"colom 2 text : ";
		cin>>colom_2;
		
		cout<<endl<<"colom 3 text : ";
		cin>>colom_3;
		
		cout<<endl<<"colom 4 text : ";
		cin>>colom_4;
		
		cout<<endl<<"colom 5 text : ";
		
		cin>>colom_5;
		
		cout<<endl<<"colom 6 text : ";
		
		cin>>colom_6;

		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" :  <input><br><br>"<<endl<<colom_2<<" : <input><br><br>"<<endl<<colom_3<<" : <input><br><br>"<<colom_4<<" : <input><br><br>"<<endl<<colom_5<<" : <input><br><br>"<<colom_6<<" : <input>"<<endl<<endl<<"<body></html>";
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}
	
	
	// if lines = 7
				else if (form_colom == 7){
		cout<<"colom 1 text : ";
		cin>>colom_1;
		cout<<endl<<"colom 2 text : ";
		cin>>colom_2;
		
		cout<<endl<<"colom 3 text : ";
		cin>>colom_3;
		
		cout<<endl<<"colom 4 text : ";
		cin>>colom_4;
		
		cout<<endl<<"colom 5 text : ";
		
		cin>>colom_5;
		
		cout<<endl<<"colom 6 text : ";
		
		cin>>colom_6;
		
		cout<<endl<<"colom 7 text : ";
		cin>>colom_7;

		form<<"<!-- Copyright (c) "<<form_Name<<" -->"<<endl<<endl;
		form<<"<html>"<<endl<<"<head><title>"<<form_Name<<"</title>"<<endl<<endl<<"<style>";
		form<<endl<<"input{"<<endl<<"border: 0px;border-bottom: 5px dotted black;}"<<endl<<"</style>"<<endl<<endl;
		
		form<<"<body>"<<endl<<endl<<"<div><h1><center> <b> "<<form_Name<<"</b></center></div>";
		form<<endl<<endl<<"<br><hr><br>"<<colom_1<<" :  <input><br><br>"<<endl<<colom_2<<" : <input><br><br>"<<endl<<colom_3<<" : <input><br><br>"<<colom_4<<" : <input><br><br>"<<endl<<colom_5<<" : <input><br><br>"<<colom_6<<" : <input><br><br>"<<colom_7<<"<input>"<<endl<<endl<<"<body></html>";
		
		
		
		cout<<endl<<endl<<endl<<"Thanks for choosing our app! Your form has been builded successfully file name : "<<form_Name<<".html ";
	}
}



// Thanks for Reading the source code!
