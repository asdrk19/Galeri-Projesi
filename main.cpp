#include <iostream>
#include "header.h"
#include <fstream>
using namespace std;

class galeri{
	
	private:
		int aracoz;
		
	public:
		string model;
		string marka;
		int uretimyili;
		string renk;
		string megane;
		
		void istekaracbilgiyazdir(){
			
			cout<<"\nMarkasi:"<<marka<<endl;
			cout<<"Modeli:"<<model<<endl;
			cout<<"Uretim yili:"<<uretimyili<<endl;
			cout<<"Rengi:"<<renk<<endl;	
		}

		int aracozz (int aracozz1){
			
			aracoz=aracozz1;
			
		}
		int aracozzal(){
			
			cout<<"Tum ozelliklerini goruntulemek istediginiz araci secin:"<<endl;
			cout<<"1-)Megane\n2-)Symbol\n3-)Focus\n4-)Mustang"<<endl;
			cin>> aracoz;
		
			
			if (aracoz==1){
				
				cout<<"-----MEGANE-----"<<endl;
				cout<<"Fiyati: 150.000"<<endl;
				cout<<"Ozellikleri:\n-1.6 motor\n-140 beygir\n-Siyah"<<endl;
				cout<<"Uretim yili:2019\n\n"<<endl;
			}
			else if(aracoz==2){
				
				cout<<"-----SYMBOL-----"<<endl;
				cout<<"Fiyati: 250.000"<<endl;
				cout<<"Ozellikleri:\n-1.5 motor\n-170 beygir\n-Beyaz";	
				cout<<"Uretim yili:2021\n\n"<<endl;
			}
			else if(aracoz==3){
				
				cout<<"-----FOCUS-----"<<endl;
				cout<<"Fiyati: 450.000"<<endl;
				cout<<"Ozellikleri:\n-1.3 motor\n-210 beygir\n-Ralli yesili"<<endl;	
				cout<<"Uretim yili:2022\n\n"<<endl;
			}
			else if(aracoz==4){
				
				cout<<"-----MUSTANG-----"<<endl;
				cout<<"Fiyati: 950.000"<<endl;
				cout<<"Ozellikleri:\n-5.2 motor\n-530 beygir\n-Yakut kirmizi"<<endl;
				cout<<"Uretim yili:2022\n\n"<<endl;
				
			}

			else{
				cout<<"Yanlis secim yaptiniz."<<endl;
			}
			
			return aracoz;
		}

};



int main(int argc, char** argv) {
	galeri galeri1;
	
	
	basadon:
	cout<<"\n---------------GALERIMIZE HOSGELDINIZ---------------\n"<<endl;

	int secenekler,secenekler2,secenekler3,secenekler4,go,tavsiyesec,go2;
		
		cout<<"1-)Renault \n1.1-)Megane\n1.2-)Symbol \n\n2-)Ford \n2.1-)Focus\n2.2-)Mustang" <<endl;
		cout<<"-Eger bir arabanin tum ozelliklerini yazdirmak istiyorsaniz 0'a basin.\n-Istediginiz arac listede yoksa siparis olusturmak icin 3'e basin.\n-Ozel aracimizi gormek icin -1'e basin\n-Siparisiniz listedeyse secenegi giriniz: "<<endl;
		cin>>secenekler;
	
		if(secenekler==0){
	
		galeri1.aracozzal();
		cout<<"Programi basa dondurmek icin 9'a,Sonlandirmak herhangi bir tusa basin"<<endl;
		cin>>go;
		if(go==9){
			goto basadon;
		}
		else{
			goto son;
		}
			
		}
		else if(secenekler==-1){
			ifstream tavsiye;
			string satir;
			tavsiye.open("ozel.txt");
			for(int i=0;i<12;i++){
				
			getline(tavsiye,satir);
			cout<<satir<<endl;
			}
			
			cin>>tavsiyesec;
			if(tavsiyesec==1){
				
				cout<<"Siparisinizi aldik"<<endl;
				cout<<"Araciniz hazir oldugunda size ulasabilmemiz icin kullanici girisi yapmalisiniz."<<endl;
				cout<<"Giris ekranina yonlendiriliyorsunuz...\n"<<endl;
	
					kayit kayit1;
					kayit1.isimgirisi();
					kayit1.numaragirisi();
		
					kayit1.kayityazdir();				
			}
			
			else{
			}
			
		}
	
		else if(secenekler<=2){
			
		cout<<"Istediginiz modeli seciniz:"<<endl;
		cin>>secenekler2;
		
		
	switch(secenekler){
		
		
		case 1:	
		
			switch(secenekler2){
				case 1:
					cout<<"Megane modelini sectiniz"<<endl;
					cout<<"Megane modeli hakkinda ne bilmek istersiniz?"<<endl;
					cout<<"1-)Fiyat\n2-)Ozellik\n3-)Uretim yili"<<endl;
					cin>>secenekler3;
					
					switch(secenekler3){
							
						
						case 1:
							cout<<"Fiyati: 150.000"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 2:
							cout<<"Ozellikleri:\n-1.6 motor\n-140 beygir\n-Siyah"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}	
							break;
						case 3:
							cout<<"Uretim yili:2019"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						default:
							cout<<"Hatali secim yaptiniz, tekrar deneyin."<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}		
					}
					break;
				
				
				case 2:
					cout<<"Symbol modelini sectiniz"<<endl;
					cout<<"Symbol modeli hakkinda ne bilmek istersiniz?"<<endl;
					cout<<"1-)Fiyat\n2-)Ozellik\n3-)Uretim yili"<<endl;
					cin>>secenekler3;
				
						
					switch(secenekler3){
						case 1:
							cout<<"Fiyati: 250.000"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 2:
							cout<<"Ozellikleri:\n-1.5 motor\n-170 beygir\n-Beyaz";	
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 3:
							cout<<"Uretim yili:2021"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
							
						}
						break;			
						
				default:
					cout<<"Hatali secim yaptiniz, tekrar deneyin."<<endl;
					cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}	
			}
		break;
		
		case 2:
			switch(secenekler2){
				
				case 1:
					cout<<"Focus modelini sectiniz"<<endl;
					cout<<"Focus modeli hakkinda ne bilmek istersiniz?"<<endl;
					cout<<"1-)Fiyat\n2-)Ozellik\n3-)Uretim yili"<<endl;
					cin>>secenekler3;
				
						
					switch(secenekler3){
						case 1:
							cout<<"Fiyati: 450.000"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 2:
							cout<<"Ozellikleri:\n-1.3 motor\n-210 beygir\n-Ralli yesili";	
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 3:
							cout<<"Uretim yili:2022"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
							
							default:
								cout<<"Hatali secim yaptiniz."<<endl;
								cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
								break;
					}
					break;
					
				case 2:
					cout<<"Mustang modelini sectiniz"<<endl;
					cout<<"Mustang modeli hakkinda ne bilmek istersiniz?"<<endl;
					cout<<"1-)Fiyat\n2-)Ozellik\n3-)Uretim yili"<<endl;
					cin>>secenekler3;
			
						
					switch(secenekler3){
						case 1:
							cout<<"Fiyati: 950.000"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 2:
							cout<<"Ozellikleri:\n-5.2 motor\n-530 beygir\n-Yakut kirmizi";	
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						case 3:
							cout<<"Uretim yili:2022"<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak icin herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
						
						default:
							cout<<"Hatali secim yaptiniz."<<endl;
							cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak icin herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
							break;
					}
					
					break;	 
				default:
					cout<<"Hatali secim yaptiniz, tekrar deneyin."<<endl;
					cout<<"\nProgrami tekrar baslatmak icin 9'a, Sonlandirmak herhangi bir tusa basin"<<endl;
							cin>>go2;
							if(go2==9){
								
								goto basadon;
							}
					break;
			}
			break;
		
		default:
			break;
	} }
	else{
	
		cout<<"Eger istediginiz bu seceneklerden biri degilse istediginiz araci tanimlayin.Arac gelince size haber verilecektir."<<endl;
		
		galeri istekarac;
		
		
		cout<<"\nIstediginiz aracin markasini giriniz:"<<endl;
		cin>>istekarac.marka;
		
		cout<<"\nIstediginiz aracin modelini giriniz:"<<endl;
		cin>>istekarac.model;

		cout<<"\nIstediginiz aracin uretim yilini giriniz:"<<endl;
		cin>>istekarac.uretimyili;

	
		cout<<"\nIstediginiz aracin rengini giriniz:"<<endl;
		cin>>istekarac.renk;

		
		
		cout<<"Istediginiz aracin bilgileri:"<<endl;
		istekarac.istekaracbilgiyazdir();
		
		
		cout<<"Araciniz bayiye ulastiginda size ulasabilmemiz icin kullanici girisi yapmalisiniz."<<endl;
		cout<<"Giris ekranina yonlendiriliyorsunuz...\n"<<endl;
	
		kayit kayit1;
		kayit1.isimgirisi();
		kayit1.numaragirisi();
		
		kayit1.kayityazdir();
			}
	
		son: /*Goto komutuyla programý bitirir.*/
		
		cout<<"Bizi ziyaret ettiginiz icin tesekkur ederiz..."<<endl;
	return 0;
}
