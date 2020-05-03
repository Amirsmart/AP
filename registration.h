#include "date.h"
#include <fstream>
class registration{
	public:
		registration(string name,string famiy,string snn,string job,string gender,string marriage,string date):birthDate(date){
			this->number++;
			this->name=name;
			this->family=family;
			this->snn=snn;
			this->job=job;
			this->gender=gender;
			this->marriage=marriage;
			ofstream people("people.txt",ios::app);
			people<<name<<family<<snn<<job<<gender<<marriage<<date;
			people.close();
		}
		int getNumber(){
			return number;
		}
		static bool isValid(string name,string family,string snn,string job,string gender,string marriage,string date){
			if(!(isAlpha(name) && isAlpha(family) && isAlpha(job) && isAlpha(gender) && isAlpha(marriage)))
				return false;
			if(snn.length()!=6 || !isNum(snn))
				return false;
			if(job!="teacher" && job!="student")
				return false;
			if(gender!="male"  && gender!="female")
				return false;
			if(marriage!="single" && marriage!="married")
				return false;
			if(!isValidDate(date))
				return false;
			ifstream people("people.txt",ios::in);
			string n,f,s,j,g,m,d;
			while(people>>n>>f>>s>>j>>g>>m>>d){
				if(snn==s)
					return false;
			}
			people.close();
			return true;
		}
		static bool isValidDate(string s){
			if(s.length()!=10 || s[2]!='/' || s[5]!='/'){
				return false;
			}
			for(int i=0;i<s.length();i++){
				if(i==2 || i==5)
					continue;
				if(!(s[i]>='0' && s[i]<='9'))
					return false;
			}
			return true;
		}
		static bool isNum(string s){
			for(int i=0;i<s.length();i++)
				if(!(s[i]>='0' && s[i]<='9'))
					return false;
			return true;
		}
		static bool isAlpha(string s){
			for(int i=0;i<s.length();i++)
				if(!((s[i]>='A'&& s[i]<='Z') || (s[i]>='a'&& s[i]<='z')))
					return false;
			return true;
		}
	private:
		string name,family,snn,job,gender,marriage;
		date birthDate;
		int number;
};
