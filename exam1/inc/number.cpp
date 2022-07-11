#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/type.h>


using namespace std;

int main(int argc,char** argv[]
		{
		int N;
		N= fork();
		if(N%2! =0)
		{
		 for (int i=0;i<5;i++)
		    cout<<"odd numbrs:"<<endl;
		    cout<<"i="<<i<<endl;
		    exit(0);

		    }
		    else
		   {
		   if(N%2 == 0)
		   {

		   sleep(10);
		   for(int j=0;j<5;j++)
		   cout<<"even numbers"<<endl;
		   cout<"j="<j<<endl;
		   }
		   }
		    waiitpid(0);
		    return 0;
		}

