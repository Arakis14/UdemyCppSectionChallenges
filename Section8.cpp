#include <iostream>
using namespace std;


/* Kantor Wiktora 
 * podaj kwotę od 0 do 100, a powiem Ci jakie monety otrzymasz.
  50 groszy, 20 groszy, 10 groszy, 5 groszy, 2 grosze i 1 grosz.
 * uzytkownik podaje ilczbe zlotch i liczbe groszy.
 * np 99
 * odejmij 8.66-5 
 * wynik >0 
 
 */
int main() {
    cout << boolalpha;
    bool bounds{false};
    int num{0};
    int  lower{0};
    int higher{100};
    cout  << "Wprowadz liczbe groszy od " << lower << " do " << higher << endl;
    cin >> num;
    bounds=(num>=lower && num<higher);
   // cout << "\n" << bounds;
   if (bounds==false)
   {cout << "Podales bledna wartosc"<<endl;
   };
      if (bounds==true){
     // cout << "Podales prawidlowa wartosc"<<endl;
     // cout<<"\n"<<kwota1;
     // Ile jest 50 groszowek???
     int kwota1{0};
     kwota1=num%50;
     int kwota2{0};
     kwota2=kwota1%20;
     int kwota3{0};
     kwota3=kwota2%10;
     int kwota4{0};
     kwota4=kwota3%5;
     int kwota5{0};
     kwota5=kwota4%2;
      
      int gr50{0};
      if ((num-50)>=0){
          gr50++;
          
      };
      int gr20{};
       if ((kwota1-20)>=0){
       gr20++;
       }
      if ((kwota1-20)>=20){
      gr20++;
      }
      int gr10{0};
      if ((kwota2-10>=0)){
          gr10++;
      }
      int gr5{0};
      if ((kwota3-5>=0)){
          gr5++;
      }
      int gr2{0};
      if ((kwota4-2>=0)){
          gr2++;
      }
      if ((kwota4-2)>=2){
      gr2++;
      }
          
      cout << "ilosc 50-groszowek: "<< gr50 << endl;
      cout<< "ilosc 20-groszowek: "<< gr20 <<endl;
      cout << "ilosc 10-groszowek: "<< gr10<< endl;
      cout <<  "ilosc 5-groszowek:" << gr5 <<endl;
      cout << "ilosc 2-groszowek:" << gr2 <<endl;
      cout << "ilosc 1-groszowek:" << kwota5 << endl;
      
     cout<<"\n"<< kwota1;
     cout<<"\n"<< kwota2;
     cout<<"\n"<< kwota3;
     cout<<"\n"<< kwota4;
     cout<<"\n"<< kwota5 <<endl;
      }  
    
  
    
 

    return 0;
    };