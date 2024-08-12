#include <iostream>
#include<string.h>
class book
{
  int bno,amt,price,quantity;
  char bname[20],author[20],publi[20];
    void accpet(int no,char name[20],char author1[20],char pub[20],int p,int q)
    {
     bno=no;
     strcpy(bname,name);
     strcpy(author,author1);
     strcpy(publi,pub);
     price=p;
     quantity=q;
    }  
    void calculate()
    {
        amt=price*quantity;
    }
    void disp()
    {
        std::cout<<"total amount of book="<<amt;
    }

};
int main()
{
book ob;
int no,p,q;
char name[20],author[20],pub[20];
std::cout<<"Enter book no";
std::cin>>no;
std::cout<<"Enter book name";
std::cin>>name;
std::cout<<"Enter author name";
std::cin>>author;
std::cout<<"Enter publish name";
std::cin>>pub;
ob.accept();
ob.calculate();
 ob.disp();


}