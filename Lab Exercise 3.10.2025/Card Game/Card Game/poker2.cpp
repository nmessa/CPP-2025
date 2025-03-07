//Lab Exercise 3.10.2025
//Author: nmessa

#include <iostream>
#include <vector>
using namespace std;

#include "deck.h"
#include "card.h"
#include "hand.h"

//Function prototypes
void printDeck(const Deck& d);
void printHand(const vector<Card> &);

int main()
{
    const int HAND_SIZE = 5;
    
	//Create a deck
    Deck d;

    //printDeck(d);
    //cout << "\n---after shuffling---\n" << endl;

	//Shuffle the deck
    d.shuffle();
    
    //printDeck(d);
    
	//Create 4 Hand objects
	Hand player1;
	Hand player2;
	Hand player3;
	Hand player4;

	//Original deal
	//player1.dealFrom(d);
	//player2.dealFrom(d);
	//player3.dealFrom(d);
	//player4.dealFrom(d);

	//Deal cards by getting card from deck and adding it to player hand
	//More realistic deal
	for (int i = 0; i < HAND_SIZE; i++)
	{
		player1.addCard(d.getCard());
		player2.addCard(d.getCard());
		player3.addCard(d.getCard());
		player4.addCard(d.getCard());
	}
    
	//Print each player's hand
	cout << "Player 1 Hand" << endl;
	player1.print();
	cout << endl << endl;
	cout << "Player 2 Hand" << endl;
	player2.print();
	cout << endl << endl;
	cout << "Player 3 Hand" << endl;
	player3.print();
	cout << endl << endl;
	cout << "Player 4 Hand" << endl;
	player4.print();
    
    return 0;
    
}

//Prints the contents of the deck
void printDeck(const Deck& d)
// post: print all cards in the Deck d
//       (cards still in d when done)
{
    Deck copy(d);  // make a copy to get cards from
    int count = d.size();
    int k;
    for(k=0; k < count; k++)
    {
		cout << copy.getCard() << endl;
    }
}

//Prints the contents of a hand
void printHand(const vector<Card> & hand)
{
   int k;
   cout << "------------" << endl;
   for (k=0; k< hand.size(); k++)
   {
      cout << hand[k] << endl;
   }
   cout << "------------" << endl;
} 

//Sample Output
//Player 1 Hand
//two of spades
//nine of clubs
//ten of clubs
//queen of diamonds
//two of clubs
//
//
//Player 2 Hand
//eight of spades
//queen of spades
//four of hearts
//ace of spades
//nine of spades
//
//
//Player 3 Hand
//jack of spades
//king of diamonds
//ace of diamonds
//two of hearts
//queen of clubs
//
//
//Player 4 Hand
//nine of diamonds
//seven of hearts
//ten of spades
//six of diamonds
//ace of hearts