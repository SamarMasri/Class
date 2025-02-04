#include <iostream>
#include<cstring>
using namespace std;
//Lecture 6-1-2025

class Book{

   char *title;
   int isn;
   double price;
   public:
    //setter and getter:
    void settitle(char t[]){
       delete []title;
       title=new char[strlen(t)+1];
       strcpy(title,t);
       }
    char* gettitle(){


    return title;
    }
   void setisn(int n){
   isn=n;

   }
  int getisn(){
   return isn;

  }

  void setprice(double p){

    price=p;

  }
  double getprice(){
  return price;

  }
  Book(char* title,int isn, double price){
  this->title=new char[strlen(title)+1];
  strcpy(this->title,title);
  this->isn=isn;
  this->price=price;
  cout<<"object is created."<<endl;
  }



};
class Libray{//Library has a book

char name[20];
int bno;
Book b;//composition
Book *bb;
public:
 Libray(char* n,int bno,char* t,int i,double p):b(t,i,p){
strcpy(name,n);
this->bno=bno;
bb=new Book(t,i,p);
cout<<"object library is created.\n";
}
void setname(char *n){
   strcpy(name,n);
}
char* getname(){
return name;
}
void setbno(int n){
bno=n;

}
int getbno(){
return bno;
}
Book getbook(){
return b;
}
void setbook(char* title,int isn, double price){
b.settitle(title);
b.setisn(isn);
b.setprice(price);


}
void setbookPtr(char* t,int isn,double price){
delete []bb;
bb=new Book(t,isn,price);


}
Book*    getbookPtr(){
return bb;
}
};
int main()
{


   // Book book;:error
   Book* book;//object مسموح  لانه ما بخلق
  book=new Book("jenin",300,400);
    Libray l1("jenin",7,"C++",4321,100);

    cout<<l1.getbook().gettitle()<<endl;
    cout<<l1.getbookPtr()->gettitle()<<endl;

}

