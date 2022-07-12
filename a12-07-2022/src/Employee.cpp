#include "Employee.h"


using namespace std;
 int main()
{

	fstream f;
	Employee E(223344,"Akash" ,"Employee");
	 int pid;
	 pid =fork();
	  

	 if (pid == 0)
	 {
		 cout<<"Child starts"<<endl;
		 fstream f;
		 f.open("Employee.txt",ios::app);
		 f.write((char*)&E,sizeof(E));
		 f.close();
		 cout<<"Child terminates"<<endl;
	 }
	 else
	 {
		 wait(0);
		 cout<<"parrent starts"<<endl;
		 ifstream f1;
                 f1.open("Employee.txt",ios::in);
		 f1.seekg(0);
		 f1.read((char*)&E,sizeof(E));
		 cout<<"Employee name"<<E.name;
		 cout<<"Role"<<E.Role;
		 cout<<"emp id"<<E.empid;
		 F1.close();

		 cout<<"Parent terminates"<<endl;
	 }
	 return 0;
}

		
