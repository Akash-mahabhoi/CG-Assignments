//Header file
#include<iostream>
#include<fstream>
#include<string>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

using namespace std;
class Employee
{
	protected:
		int empid;
		string name;
		string Role;

   public:
		Employee(){}
		Employee(int e,string n,string r)
		{
			empid =e;
			name =n;
			role= r;
		}

