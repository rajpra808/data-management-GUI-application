/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : To create a form for view option click to show details of a person


**************************************************************************************************

*/

#pragma once

//#include<iostream>
#include <string.h>
#include <vector>

class person
{
	std::string ID;
	std::string Name;
	std::string FName;
	std::string DOB;
	std::string mobile;
	std::string addr;
	std::string  occ; //occupation
public:
	// set data to variables
		/*
	Name
	FName
	Mobile
	Address
	DOB
	Occupation
	*/
	void enter(std::string i, std::string n, std::string f, std::string mob, std::string ci, std::string str, std::string oc)
	{
		ID = i;
		Name = n;
		FName = f;
		addr = ci;
		occ = oc;
		mobile = mob;
		DOB = str;
	}
	//all getters
	std::string GId() { return ID; }
	std::string GName() { return Name; }
	std::string Gfname() { return FName; }
	std::string Gadd() { return addr; }
	std::string Gocc() { return occ; }
	std::string Gmob() { return mobile; }
	std::string Gdob() { return DOB; }

};


class UserClass :public person
{
	std::string AdminName;
	std::string PassWord;
	std::string DOB;
	std::string Email;
public:

	void registeration(std::string a, std::string P, std::string d, std::string e)
	{
		AdminName = a;
		PassWord = P;
		DOB = d;
		Email = e;
	}
	std::string Gadm() { return AdminName; }
	std::string Gpass() { return PassWord; }
	std::string Gudob() { return DOB; }
	std::string Gmail() { return Email; }
	bool verifyPass(std::string p) {
		if (PassWord == p)
		{
			return true;
		}
		else return false;
	}

};
