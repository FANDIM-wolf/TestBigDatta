// get data about students and proffessors 
// and find out  who is outstanding

#include <iostream>

using namespace std;

class person {
protected:
	char name[40];

public:
	void getName()
	{
		cout<<"Enter name ";
		cin>>name;
	}
	void putName(){
		cout<<"Name "<<name<<endl;
	}
	virtual void getData()=0;
	virtual bool isOutstanding()=0;

};
//Grade Point Average- gpa
class student:public person
{
private:
	float gpa;
public:
	void getData()
	{
		cout<<"Enter grade  ";
		cin>>gpa;
	}
	bool isOutstanding(){
		if (gpa>3.5){
			string gpa_value = "outstanding";
			bool outstanding = true;
		}
	}
   
};

class Professor: public person
{
private:
	int  NumPubs;
public: 
	void getData()
	{
		person::getName(); // take function from person  away 
	}
	bool isOutstanding()
	{
		if (gpa>3.5){
			string gpa_value = "outstanding";
			bool outstanding = true;
		}
	}

};

int main() {
    person* persPTR[100];//array of pointers to person
    int  n = 0;
    do {
      cout<<"student or proffesor"<<endl;
      cin>>choice;
      if(choice=="s"){
      	persPtr[n] = new student;

      }
      else{
      	persPtr[n] = new proffesor;
      	persPtr[n++]->getData();
      	cout<<"Enter one more (if yes , enter ""y"")?"endl;
      }
    }while(choice=="y");

    for(int  j=0; j<n; j++){
    	persPtr[j]->putName(); //output all names
    	if(persPtr[j]->isOutstanding()){
    		cout<<"outstanding one !!!!"<<endl; // output all outstanding students
    	}
    }
	return 0 ;
}