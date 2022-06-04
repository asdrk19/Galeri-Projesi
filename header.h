#ifndef SOMETHING_H
#define SOMETHING_H
#include <iostream>
using namespace std;

class kayit{
	private:
		string name;
		long long number;
		
	public:
		
		string isim(string isim1){
			
			name=isim1;
		}
		
		string isimgirisi(){
			
			cout<<"Adiniz:"<<endl;
			cin>>name;
			return name;
		}
		
		int numara(int numara1){
			number=numara1;
		}
		
		int numaragirisi(){
			
			cout<<"Numaranizi giriniz:"<<endl;
			cin>>number;
			return number;
		}
		
		void kayityazdir(){
			
			
			cout<<""<<name<<" aracin geldiginde seni"<<" "<<number<<" numarasindan arayacagiz.Iyi gunler dileriz..."<<endl;
		}
	
};

#endif
