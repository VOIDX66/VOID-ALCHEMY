#include <ctime>
#include<iostream>
using namespace std;
int main()
{
    int x;
    int band=0;
    int band2=0;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if(x==1)
    {
    band2=1;
	}
if((x<1)||(x>1000000)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
{
    if(x==1000000)	{cout<<"UN MILLON " ;x=x-1000000;}
	else if(x>=900000) {cout<<"NOVECIENTOS " ;x=x-900000; if(x==0){cout<<"MIL ";}}
	else if(x>=800000) {cout<<"OCHOCIENTOS " ;x=x-800000; if(x==0){cout<<"MIL ";}}
	else if(x>=700000) {cout<<"SETECIENTOS " ;x=x-700000; if(x==0){cout<<"MIL ";}}
	else if(x>=600000) {cout<<"SEISCIENTOS " ;x=x-600000; if(x==0){cout<<"MIL ";}}
	else if(x>=500000) {cout<<"QUINIENTOS " ;x=x-500000; if(x==0){cout<<"MIL ";}}
	else if(x>=400000) {cout<<"CUATROCIENTOS " ;x=x-400000; if(x==0){cout<<"MIL ";}}
	else if(x>=300000) {cout<<"TRECIENTOS " ;x=x-300000; if(x==0){cout<<"MIL ";}}
	else if(x>=200000) {cout<<"DOSCIENTOS " ;x=x-200000; if(x==0){cout<<"MIL ";}}
	else if(x>=100000) {cout<<"CIENTO " ;x=x-100000;}
	else if(x==100000) {cout<<"CIEN MIL " ;x=x-100000;}
	     if(x>=90000) {cout<<"NOVENTA " ; x=x-90000; if(x==0){cout<<"MIL ";}}
		 else if(x>=80000) {cout<<"OCHENTA " ; x=x-80000; if(x==0){cout<<"MIL ";band=1;}else{cout<<"Y ";};}
		 else if(x>=70000) {cout<<"SETENTA " ; x=x-70000; if(x==0){cout<<"MIL ";band=1;}else{cout<<"Y ";};}
		 else if(x>=60000) {cout<<"SESENTA " ; x=x-60000; if(x==0){cout<<"MIL ";band=1;}else{cout<<"Y ";};}
		 else if(x>=50000) {cout<<"CINCUENTA " ; x=x-50000; if(x==0){cout<<"MIL ";band=1;}else{cout<<"Y ";};}
		 else if(x>=40000) {cout<<"CUARENTA " ; x=x-40000; if(x==0){cout<<"MIL ";band=1;}else{cout<<"Y ";};}
		 else if(x>=30000) {cout<<"TREINTA " ; x=x-30000; if(x==0){cout<<"MIL ";band=1;}else{cout<<"Y ";};}
		 else if(x==20000) {cout<<"VEINTE MIL" ; x=x-20000;band=1;}
		 else if(x>20000) {cout<<"VEINTI Y " ; x=x-20000;}
		 else if(x>=16000) {cout<<"DIECI" ; x=x-10000;}
		 else if(x>=15000) {cout<<"QUINCE MIL " ; x=x-15000;band=1;}
		 else if(x>=14000) {cout<<"CATORCE MIL " ; x=x-14000;band=1;}
		 else if(x>=13000) {cout<<"TRECE MIL " ; x=x-13000;band=1;}
		 else if(x>=12000) {cout<<"DOCE MIL " ; x=x-12000;band=1;}
		 else if(x>=11000) {cout<<"ONCE MIL " ; x=x-11000;band=1;}
		 else if(x>=10000) {cout<<"DIEZ MIL " ; x=x-10000;band=1;}
		 	if(x>=9000) {cout<<"NUEVE MIL " ; x=x-9000;band=1;}
			  else if(x>=8000) {cout<<"OCHO MIL "; x=x-8000;band=1;}
			  else if(x>=7000) {cout<<"SIETE MIL "; x=x-7000;band=1;}
			  else if(x>=6000) {cout<<"SEIS MIL "; x=x-6000;band=1;}
			  else if(x>=5000) {cout<<"CINCO MIL "; x=x-5000;band=1;}
			  else if(x>=4000) {cout<<"CUATRO MIL "; x=x-4000;band=1;}
			  else if(x>=3000) {cout<<"TRES MIL "; x=x-3000;band=1;}
			  else if(x>=2000) {cout<<"DOS MIL "; x=x-2000;band=1;}
			  else if(x>=1000) {cout<<"UN MIL "; x=x-1000;band=1;}
                   if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       			   else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
		           else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
		           else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
		           else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
		           else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
		           else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
		           else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
		           else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
		           else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
			            if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
			            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
			            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
			            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
			            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
			            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
			            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
			            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
			            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
			            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
			            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
			            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
			            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
			            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
			            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
			            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
	        			if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
				       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
				       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
				       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
				       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
				       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
				       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
					        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
					        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
					        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
					        if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
					        else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
					        else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
					        else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
					        else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
					        else if(x==1 && band==1)    {cout<<"UNO"      ;x=x-1;  }else{if(x==1 && band2==0){cout<<"UN MIL";}else{cout<<"UNO ";}}
					        
}
cout<<endl;
cin.ignore();
return 0;
}

void fecha()
{
	   time_t tSac = time(NULL);  // instante actual


   struct tm* pt1 = localtime(&tSac);
   
   cout << "dd-mm-aaaa: " << pt1->tm_mday << "-" << pt1->tm_mon+1 << "-"
                          << pt1->tm_year+1900 << endl;
}
