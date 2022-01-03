#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
#include <cstring>


using namespace std;
class file{
public:
    file(){
        ofstream fout;
        fout.open(".txt");
        fout<<"Abc";
        fout.close();
    }
};
class earn{
        public:
        double profit;
        void show()
		{
		ifstream x("profitf.txt");
        if(!x)
        cout<<"PROFIT = 0 ";
        else{
        x>>profit;
        cout<<"\nTOTAL STARTING PROFIT:  "<<profit<<endl;
        x.close();
        }
        
        }

};
class product:public virtual earn{
public:
           int quan;
           char name[20];
           char id[20];
           double percost;
           double persell;
           double cost;
           double sell;
           void cal()
		   {
		    cost=percost*quan;
        	sell=persell*quan;
            profit=profit +(sell-cost)*365;
			}
           void file();
           void get();

};
void product::get()
{
system("cls");
int s;
cout<<"\n > number of products produced ? : ";
cin>>s;
for(int i=0;i<s;i++)
{
  cout<<"\n********************************";
  cout<<"\n > input product name : ";
  cin>>name;
  cout<<"\n > input product id : ";
  cin>>id;
  cout<<"\n > input cost price of product : ";
  cin>>percost;
  cout<<"\n > input selling price of product : ";
  cin>>persell;
  cout<<"\n > total product quantity : ";
  cin>>quan;
    cal();
    file();
    system("cls");
  }
cout<<"\nEntry is successful ! ! !\n";
}
void product::file()
{
char file[20];
strcpy(file,id);
strcat(file,".txt");
ofstream f(file);
f<< "\n\t\tDetails of Product "<<name<<"\n\n > product name: "<<name<< "\n > product id: "<<id<<"\n > cost price of product: " <<percost<<"\n > selling price of product: "<<persell<<"\n > quantity: "<<quan<<"\n > total cost: "<<cost<<"\n > sell: "<<sell;
f.close();
}

class staff:public virtual earn{
         protected:
         double salary;
         char post[12];
         char empid[10];
         int postquan;
         void cal()
         {
		 profit=(profit-salary*postquan)*12;
         }
         void getstaff();
         void file();
};
void staff::getstaff()
{
  cout<<"\n > input salary: ";
  cin>>salary;
  cout<<"\n > input number of employees: ";
  cin>>postquan;
  for(int i=0;i<postquan;i++)
  {
  	cout<<"\n > input employee name : ";
  	cin>>post;
  cout<<"\n > input employee ID : ";
  cin>>empid;
  cal();
  file();
  system("cls");
}
}
 void staff::file()
{  char file[20];
strcpy(file,empid);
strcat(file,".txt");
ofstream f(file);
f<< "\n > employee name :"<<post<<"\n > employee salary: "<<salary<< "\n > employee id: "<<empid;
f.close();
system("cls");
}

class amount:public staff, public product
{

 public:
    void add();

};
void amount::add()
{
	int ch;
	char name[20];
	while(1)
	{
		cout<<"\n\n1.)Input for product\n\n2.)Input for employee\n\n3.)Exit\n\n";
		cout<<"> Enter choice : ";
		cin>>ch;
		if(ch==1){
				get();
				ofstream x("profitf.txt");
 				x<<profit;
 				x.close();
			}
			else if(ch==2){
				getstaff();
				ofstream x("profitf.txt");
 				x<<profit;
 				x.close();
				}
			else if(ch==3)
				break;
			else
				cout<<" * Invaid Option. Please re-enter * \n";
			}
		}
void admin()
{
  system("color f1");
  system("cls");
  while(1)
  { 
    cout<<"\n\t\t\t\t\t\t\t\t\t+-------------------------+\n";
	cout<<"\t\t\t\t\t\t\t\t\t|                         | \n";
	cout<<"\t\t\t\t\t\t\t\t\t|* *ATHUGALA  FURNITURE* *| \n";
	cout<<"\t\t\t\t\t\t\t\t\t|                         | \n";
	cout<<"\t\t\t\t\t\t\t\t\t+-------------------------+\n";
	cout<<"\t\t\t\t\t\t\t\t\t|   K u r u n e g a l a   |";
	cout<<"\n\t\t\t\t\t\t\t\t+-------+-------------------------+-------+\n";
 	cout<<"\t\t\t\t\t\t\t\t|\t\t\t\t\t  |\n\t\t\t\t\t\t\t\t| 1. Add Entries\t\t\t  |\n\t\t\t\t\t\t\t\t|\t\t\t\t\t  |\n\t\t\t\t\t\t\t\t| 2. Show profit\t\t\t  |\n\t\t\t\t\t\t\t\t|\t\t\t\t\t  |\n\t\t\t\t\t\t\t\t| 3. Search Product Details\t\t  |\n\t\t\t\t\t\t\t\t|\t\t\t\t\t  |\n\t\t\t\t\t\t\t\t| 4. Search Employee Details\t\t  |\n\t\t\t\t\t\t\t\t|\t\t\t\t\t  |\n\t\t\t\t\t\t\t\t| 5. Exit\t\t\t\t  |\n";cout<<"\t\t\t\t\t\t\t\t+-----------------------------------------+\n";
  cout<<"\n\n\t\t\t\t\t\t\t\t> Select your choice : ";
  int u;
  cin>>u;
if(u==1)
  {
  amount a;
  a.show();
  a.add();
}
  else if(u==2)
  {
  system("cls");
  amount d;
  d.show();
}
  else if(u==3)
  {  
   system("cls");
   char id[20];
   char c;
    cout<<"\n > INPUT ID to search : ";
    cin>>id;
    char file[20];
    strcpy(file,id);
    strcat(file,".txt");
    ifstream x(file);
    if(!x)
    {
    	
    	cout<<"file couldn't be opened. product ID not found. \n";
	}
    while(x)
    {
	x.get(c);
     cout<<c;
    }
    

    x.close();
}
   else if(u==4)
   {
   	char eid[20];
   	char d;
   	cout<<"\nINPUT employee ID to search : ";
    cin>>eid;
   	char file[20];
   	strcpy(file,eid);
   	strcat(file,".txt");
   	ifstream y(file);
   	 if(!y)
    {
    	
    	cout<<"file couldn't be opened. employee ID not found. \n";
	}
   	while(y)
   	{
   	y.get(d);
   	cout<<d;
   }
 
   y.close();
}
  else if(u==5)
  {
  break;
}
  else cout<<" * Invalid option. Please select one of the available options * \n";
 }
}
int main(){
    int ch;
    while(1){
    	system("color fd");
    	system("cls");
        cout<<"\n\t\t\t\t\t\t\t\t\t+-------------------------+\n";
		cout<<"\t\t\t\t\t\t\t\t\t|                         | \n";
		cout<<"\t\t\t\t\t\t\t\t\t|* *ATHUGALA  FURNITURE* *| \n";
		cout<<"\t\t\t\t\t\t\t\t\t|                         | \n";
		cout<<"\t\t\t\t\t\t\t\t\t+-------------------------+\n";
		cout<<"\t\t\t\t\t\t\t\t\t|   K u r u n e g a l a   |";
		cout<<"\n\t\t\t\t\t\t\t\t+-------+-------------------------+-------+\n";
		cout<<"\t\t\t\t\t\t\t\t|                                         | ";
        cout<<"\n\t\t\t\t\t\t\t\t|  1. ENTER SYSTEM\t\t\t  |\n";
        cout<<"\t\t\t\t\t\t\t\t|                                         | ";
        cout<<"\n\t\t\t\t\t\t\t\t|  2. EXIT\t\t\t\t  |\n";
        cout<<"\t\t\t\t\t\t\t\t+-----------------------------------------+\n";
        cout<<"\n\n\t\t\t\t\t\t\t\t  > Enter Your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                admin();
                break;
            case 2:
            	system("color f4");
            	cout<<"\n\n\t\t\t\t\t\t\t\t+-----------------------------------------+\n";
            	cout<<"\t\t\t\t\t\t\t\t|                                         |";
            	cout<<"\n\t\t\t\t\t\t\t\t|  Thank You ! !\t\t\t  |";
            	cout<<"\n\t\t\t\t\t\t\t\t|  Desing by : NIBM 19.2F BATCH\t\t  | ";
            	cout<<"\n\t\t\t\t\t\t\t\t|  KUDSE192F-021 | KUDSE192F-021\t  | ";
            	cout<<"\n\t\t\t\t\t\t\t\t|  KUDSE192F-023 | KUDSE192F-024\t  | \n";
            	cout<<"\t\t\t\t\t\t\t\t|                                         | \n";
            	cout<<"\t\t\t\t\t\t\t\t+-----------------------------------------+\n";
            	
            	
                exit(0);
                break;
            default:
                cout<<"Enter valid choice\n";
                break;
        }
    }
    return 0;
}


