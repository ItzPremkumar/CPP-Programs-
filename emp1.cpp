#include<iostream>
#include<string.h>
class Emp
{
  public:
         int eno,sal;
         char ename[20];
         void accept(int eno1,char ename1[20],int s)
         {
            eno=eno1;
            strcpy(ename,ename1);
            sal=s;
         }
         void disp()
         {

            std::cout<<"Emp no="<<eno<< std::endl;
            std::cout<<"Emp name="<<ename<<std::endl;
            std::cout<<"Emp sal="<<sal<<std::endl;
         }
};
  int main()
  {
   Emp ob;
   int no,sal;
   char name[20];
   std:: cout<< "Enter emp no name sal:";
   std:: cin>>no >> name >> sal;
   ob.accept(no,name,sal);
   ob.disp();
}




