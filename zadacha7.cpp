#include<iostream>
using namespace std;
struct Book {
  string title;
  string author;
  int year;
  string genre;
  bool isAvailable;
};
int main(){
const int MAX_BOOKS = 100;
  Book* books = new Book[MAX_BOOKS];
  Book book1;
  book1.title="Harry Potter";
  book1.author="J.K.Rowling";
  book1.year=2016;
  book1.genre="Fantasia";
  book1.isAvailable=true;
  books[0] = book1;

  Book book2;
  book2.title="1984";
  book2.author="George Orwell";
  book2.year=1949;
  book2.genre="Politic Fiction";
  book2.isAvailable=true;
  books[1] = book2;

  Book book3;
  book3.title="Pride and Prejudice";
  book3.author="Jane Austen";
  book3.year=1813;
  book3.genre="Romance";
  book3.isAvailable=true;
  books[2] = book3;

  string searchBook="1984";

  for(int i = 0; i < MAX_BOOKS; i++) {
    if(books[i].title == searchBook) {
      cout<<"Book #"<<i+1<<" is available"<<endl;
    }
  }
  return 0;















}