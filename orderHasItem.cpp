#include<iostream>
#include<cstring>
using namespace std;
//Lecture 6-1-2025
class Item{
int noItem;
char name[20];
double price;
public:
Item(int no,char n[],double p)
{
    noItem=no;
    strcpy(name,n);
    price=p;
    cout<<"object item is created.\n";
}
void setnoItem(int no){
  noItem=no;
}
int getnoItem(){
  return noItem;
}
void setname(char n[]){
   strcpy(name,n);

}
char* getname(){
  return name;
}
void setprice(double p){
  price=p;
}
double getprice(){
  return price;
}

};
class Order{
int noOrder;
Item i;
public:
 Order(int noOrder,int no,char n[],double p):i(no,n,p){
 this->noOrder=noOrder;
 cout<<"object order is created.\n";
 }
void setnoOrder(int noOrder){
this->noOrder=noOrder;

}
int getnoOrder(){
return noOrder;
}
void setItem(int no,char n[],double p){
i.setnoItem(no);
i.setname(n);
i.setprice(p);
}
Item getItem(){
  return i;
}
};


main(){
Order l(2,6,"COLA",50);
cout<<l.getItem().getname()<<endl;
cout<<l.getItem().getprice()<<endl;
}
