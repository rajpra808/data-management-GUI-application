/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : For perform  Input Output Operation

**************************************************************************************************

*/




#pragma once

#include<iostream>
#include<sstream>
#include "oper.h"
#include<fstream>
#include<vector>
#include "people.h"
//#include "oper.h"


using namespace std;
using namespace Operation;


void WriteTOFile(vector<person> &vect, string filename)
{

	filename=FilePath+filename;
	/*
	Name
	FName
	Mobile
	Address
	DOB
	Occupation


	*/
	fstream file;
	file.open(filename, ios::out | ios::trunc);  //open file.txt
	for (unsigned int i = 0; i < vect.size(); i++)  //write all objects to file
	{
		file << vect[i].GId() << endl;   //occupation
		file << vect[i].GName() << endl;  //first name
		file << vect[i].Gfname() << endl;    // middile name
		file << vect[i].Gmob() << endl;   //  mobile number
		file << vect[i].Gadd() << endl;  //last name
		file << vect[i].Gdob() << endl;   //Date of DateOfBirth
		file << vect[i].Gocc() << endl; //city name
	}
	file.close(); //close the file
}

void WriteTOFileSec(vector<UserClass> &vect)
{

	/*
	name
	pass
	dob
	email
	*/
	fstream file;
	file.open(FilePath+"usr.txt", ios::out | ios::trunc);  //open file.txt
	for (unsigned int i = 0; i < vect.size(); i++)  //write all objects to file
	{
		file << vect[i].Gadm() << endl;   //occupation
		file << vect[i].Gpass() << endl;  //first name
		file << vect[i].Gudob() << endl;    // middile name
		file << vect[i].Gmail() << endl;   //  mobile number
	}
	file.close(); //close the file
}



int LoadData(vector<person> &vect, string filename)
{
	filename = FilePath + filename;

	fstream file;
	file.open(filename, ios::in); //open file in read mode
	if (!file)
	{
		return 123;
	}
	while (file)
	{
		person A; //
		string a, b, c, d, e, f, g;

		getline(file, a); //id
		getline(file, b); //first name
		getline(file, c); //first name
		getline(file, d); //first name
		getline(file, e); //first name
		getline(file, f); //first name
		getline(file, g); //first name




		//enter(std::string i,std::string n, std::string f, std::string mob, std::string ci, std::string str, std::string oc)

		A.enter(a, b, c, d, e, f, g);
		SortAndInsert(A); //Sort and Insert it to vecor of objects using insertion sort
	}
	vect.erase(vect.begin());
	file.close(); //close the file
	return 1;
}

int LoadDataSec(vector<UserClass> &vect)
{
	fstream file;
	file.open(FilePath+"usr.txt", ios::in); //open file in read mode
	if (!file)
	{
		return 123;
	}
	while (file)
	{
		UserClass A; //
		string a, b, c, d;

		getline(file, a); //id
		getline(file, b); //first name
		getline(file, c); //first name
		getline(file, d); //first name
		//enter(std::string i,std::string n, std::string f, std::string mob, std::string ci, std::string str, std::string oc)

		A.registeration(a, b, c, d);
		vect.push_back(A);
	}

	file.close(); //close the file
	return 1;
}
