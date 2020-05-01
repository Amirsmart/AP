//part 4 work
#ifndef WORK_H
#define WORK_H
#include "bag.h"
#include "registration.h"
#include <exception>
void handleWork(bag &backpack){
	int numberOfWorks,workType,workTime;
	try{
		cin>>numberOfWorks;	
	}catch(exception &e){
		cout<<"you can not work.\n";
		return;
	}
	
	for(int i=0;i<numberOfWorks;i++){
		try{
			cin>>workType>>workTime;	
		}catch(exception &e){
			cout<<"you can not work.\n";
			continue;
		}
		
		int energy=0,money=0;
		switch(workType){
			case 1:
				for(int i=0;i<workTime;i++){
					money+=100000;
					energy+=1000;
				}
				break;
			case 2:
				for(int i=0;i<workTime;i++){
					if(i%4==3){
						money+=200000;
					}
					energy+=500;
				}
				break;
			case 3:
				for(int i=0;i<workTime;i++){
					if(i==0){
						energy=100;
						money=10000;
					}	
					else{
						energy+= energy*2;
						money+= money*2;
					}
				}
				break;
		}
		if(backpack.energy<energy || workTime>12){
			cout<<"you died.\n";
		}
		else{
			cout<<"you worked for "<<workTime<<" and you earned "<<money<<" toman.\n";
		}
	}
}
#endif
