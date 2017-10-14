#pragma once
#include <string>
#include<iostream>
using namespace std;

class Movie {
public:
	Movie();
	Movie(std::string movie_name, int seats_available, float ticket_price);
	string getMovieName();
	int getMovieSeats();
	float getMoviePrice();

	void addMovie(std::string movie_name, int seats_available, float ticket_price);
	int purchaseTicket(int number_of_tickets);
	void display();
private:
	std::string movie_name;
	int seats_available;
	float ticket_price;
};

Movie::Movie() {
	movie_name = "Default";
	seats_available = 0;
	ticket_price = 0;
}

Movie::Movie(std::string movie_name, int seats_available, float ticket_price) {
	movie_name = movie_name;
	seats_available = seats_available;
	ticket_price = ticket_price;
}

void Movie::addMovie(std::string movie_name, int seats_available, float ticket_price) {
	Movie m;
	m.movie_name = movie_name;
	m.seats_available = seats_available;
	m.ticket_price = ticket_price;
}

void Movie::display() {
	std::cout << "Movie records: \n";
	std::cout << movie_name << ", " << seats_available << ", " << ticket_price << "\n";
	std::cout << "End of records \n";
}

int Movie::purchaseTicket(int number_of_tickets) {

	if (seats_available < number_of_tickets) {
		return -1;
	}
	else
	seats_available = seats_available - number_of_tickets;
	return number_of_tickets * ticket_price;
}

string Movie::getMovieName() {
	return movie_name;
}

int Movie::getMovieSeats() {
	return seats_available;
}

float Movie::getMoviePrice() {
	return ticket_price;
}

