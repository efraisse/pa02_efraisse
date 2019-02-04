//header file, cards.h
//Erwan Fraisse, 02/03/2019

#include <iostream>

class LinkedList 
{
  public:
  //constructors, destructor, copy constructor
  LinkedList();
  LinkedList(const LinkedList& ll);
  ~LinkedList();
  //accessors and mutators
  card getHead() const;
  card getTail() const;
  void setHead(card& h);
  void setTail(card& t);
  //friend operators
  friend LinkedList operator =(const LinkedList& ll);
  friend &ostream operator <<(&ostream out, const LinkedList& ll);

  private:
	card* head;
	card* tail;

  class card
  {
  	public:
 	 //constructors, destructor, copy constructor
  	card();
  	card(char suit, int value);
  	card(char suit, char value);
  	~card();
  	card(const card& c);
  	//accessors and mutators
  	char getSuit() const;
 	int getValue() const;
  	void setSuit(char s);
  	void setValue(int v);
  	//friend operators
  	friend card operator =(const card& c)
  	friend &ostream operator <<(&ostream out, const card& c);

  	private:
  		char suit;
		int value;
  }
}
