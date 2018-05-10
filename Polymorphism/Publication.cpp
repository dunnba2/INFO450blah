// Publication.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Publication.h"
#include <iostream>

Publication::Publication()
{
	//cout << "in Publication default constructor " << endl;
	title = "";
	author = "";
	ISBN = "";
	cost = 0;
}



Publication::Publication(string t, string a, string i, double c)
{
	//cout << "in Publication overloaded constructor " << endl;
	title = t;
	author = a;
	ISBN = i;
	cost = c;
}


void Publication::display()
{
	cout << "title: " << title << " author: " << author << " ISBN: " << ISBN << " cost: " << cost << endl;
}