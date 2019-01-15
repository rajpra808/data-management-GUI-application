/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : This file contains All required variables and Global variables to use for across all the files


**************************************************************************************************

*/

#pragma once

#include<iostream>
#include<sstream>
#include "people.h"
#include <vector>
#include <time.h>
#include <string>
using namespace std;

namespace Operation {

	std::string FilePath = "C:\\Manager\\";   //data will store here
	std::vector<UserClass> usrs;						//Variable to store all the admins data
	std::vector<person> ppl;       //store the persons for a perticular admin
	int IdArrayGen[1000];      //To generate Id
	std::string adm;           //Store the admin name to show in main window
	std::string  globalID;     // Used in modify function
	bool Idselected = 0;
	person View_id;          //store the  person details


	void init()
	{
		for (unsigned int i = 0; i < 1000; i++)
		{
			IdArrayGen[i] = 0;
		}
	}

	//funciton to Search
	int findme(std::string x)
	{

		for (unsigned int i = 0; i < usrs.size(); i++)
		{
			if (usrs[i].Gadm() == x)
			{
				return i;
			}
		}
		return -12;
	}


	//functtion to generate unic id
	int GenId()
	{
		srand(time(NULL));
		int k = rand() % 1000;
		while (IdArrayGen[k] != 0)
		{
			k = rand() % 1000;
		}
		int j = k;
		IdArrayGen[k] = j;

		return j;
	}

	//function to update Id values from database when application starts
	void update_Id(std::string x) {

		stringstream IIDD(x);
		int l = 0;
		IIDD >> l;
		int z = l;
		if (z < 1000)
		{
			IdArrayGen[z] = l;
		}

	}
//Search for index of a person
	int findIndex(std::string x)
	{
		for (unsigned int i = 0; i < ppl.size(); i++)
		{
			if (ppl[i].GId() == x)
			{
				return i;
			}
		}
		return -124;
	}


 //TO  sort and insert in Database
	void SortAndInsert(person A)
	{
		update_Id(A.GId());
		ppl.push_back(A);
		int j = ppl.size() - 2;
		std::string key = A.GName();
		while (j >= 0 && ppl[j].GName() > key)
		{
			ppl[j + 1] = ppl[j];
			j = j - 1;
		}
		ppl[j + 1] = A;
	}
}
