// MovieTheater.cpp : Defines the entry point for the console application.
//
#include<string>
#include "stdafx.h"
#include<iostream>
#include "MovieTicketMaster.h"
#include "Movie.h"


int main()
{
	Movie m;
	m.getMovieName();
	m.display();
	MovieTicketMaster TM;
	TM.init(8);

	TM.viewMovies();
	//std::cout << "Enter Emlpoyee's Name:" << std::endl;
    return 0;
}

