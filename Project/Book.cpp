#include <cstring>
#include "Book.h"

Book::Book()
{
	book_id = -1;
	title[0] = '\0';
	category[0] = '\0';
	author[0] = '\0';
	publisher[0] = '\0';
	publish_year = -1;
	price = -1;
	stock = -1;
}

Book::Book(const char* _ti, const char* _ca, const char* _au, const char* _pub, int _year, float _pr)
{
	book_id = -1;
	strcpy_s(title, _ti);
	strcpy_s(category, _ca);
	strcpy_s(author, _au);
	strcpy_s(publisher, _pub);
	publish_year = _year;
	price = _pr;
	stock = 1;
}