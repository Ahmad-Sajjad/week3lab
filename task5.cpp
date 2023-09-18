#include <iostream>
using namespace std;
main(){
	string name;
	int marks1,marks2,marks3;
	double aggregate;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>marks1;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>marks2;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>marks3;
	aggregate = ((marks1/1100.0)*0.10+(marks2/550.0)*0.40	+(marks3/400.0)*0.50)*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}