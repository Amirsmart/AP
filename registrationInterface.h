#include "registration.h"
#include <iostream>
using namespace std;
class registration;
class registrationInterface{
public:
    registrationInterface(string name,string family,string snn,string job,string gender,string marriage,string date ); 
	bool isValid(string name,string family,string snn,string job,string gender,string marriage,string date){
		return ptr->isValid(name,family,snn,job,gender,marriage,date);
	}
	bool isNum(string s){
		return ptr->isNum(s);
	}
	bool isAlpha(string s){
		return ptr->isAlpha(s);
	}
	int getNumber();
   ~registrationInterface(); 
private:
   registration *ptr;   
}; 
