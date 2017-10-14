#pragma once
#include <string>
#include<iostream>
#include<vector>
#include "Movie.h"
using namespace std;

class MovieTicketMaster {
private:
	std::string theater_name;
	std::string theater_location;
	std::vector<Movie> movies_entries;
public:
	//int a_size;
	MovieTicketMaster();
	MovieTicketMaster(std::string theater_name, std::string theater_location);
	~MovieTicketMaster();
	void viewMovies();
	void searchMovie();
	int findMovie(std::string movie_name);
	void init(int a_size);

};

MovieTicketMaster::MovieTicketMaster() {
	theater_name = "Default";
	theater_location = "Default";
	movies_entries[8] = {};

}

MovieTicketMaster::MovieTicketMaster(std::string theater_name, std::string theater_location) {
	theater_name = theater_name;
	theater_location = theater_location;
	std::vector<Movie> movies_entries[8];
}

MovieTicketMaster::~MovieTicketMaster() {
	cout << "Theater" << theater_name << "at" << theater_location << "has been closed" << endl;

}

void MovieTicketMaster::viewMovies() {
	//int k = movies_entries.size();
	//for (size_t i = 0; i < 8; i++) {
		movies_entries[0].display();
	//}
}

void MovieTicketMaster::searchMovie() {
	std::string movie_name_to_search;
	std::cout << "Please Enter Film's Name:" << std::endl;
	std::cin >> movie_name_to_search;
	//if (movie_name_to_search == NULL);

}

int MovieTicketMaster::findMovie(std::string movie_name) {
	//for (size_t i = 0; i < movies_entries.size(); i++) {
		//if (movies_entries[i].getMovieName == movie_name) {
		//}

	//}
	return 1;
}

void MovieTicketMaster::init(int a_size) {
	string movie_names[8] = { "Black Mass", "The Visit", "Mission: Impossible - Rogue Nation", "Straight Outta Compton", "No Escape", "Maze Runner: Scorch Trials", "Everest",  "War Room", };
	int seats_available[8] = { 5, 20, 13, 12, 50, 17, 34, 1 };
	double prices[8] = { 12.45, 17.30, 12.45, 17.30, 15.40, 12.45, 17.30, 15.40 };
	//vector<Movie> movies_entries[8];
	//MovieTicketMaster mt;
	//movies_entries[8];
	//int l = movies_entries.size();
	std::cout << "Size:" << std::endl;
	int l = movies_entries.size();
	std::cout << l << std::endl;
	Movie *pointer_to_movie_object = NULL;
	
	
	
	//pointer_to_movie_object = &movies_entries[0];
	string *pointer_to_movie_names = NULL;
	int *pointer_to_seats_available = NULL;
	double *pointer_to_prices = NULL;
	//pointer_to_movie_names = &movie_names[0];
	//pointer_to_seats_available = &seats_available[0];
	//pointer_to_prices = &prices[0];

	movies_entries[0].addMovie(movie_names[0], seats_available[0], prices[0]);
	std::cout << "Size:" << std::endl;
	int ll = movies_entries.size();
	std::cout << ll << std::endl;

	//for (size_t i = 0; i < 8; i++) {
		//movies_entries[i].addMovie(movie_names[i], seats_available[i], prices[i]);
	//}
}
	

