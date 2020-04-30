#include "registrationInterface.h"

registrationInterface::registrationInterface( string name,string famiy,string snn,string job,string gender,string marriage,string date) : ptr(new registration(name,famiy,snn,job,gender,marriage,date)){
} 
int registrationInterface::getNumber(){
	return ptr->getNumber();
}
registrationInterface::~registrationInterface(){
	delete ptr;
}
