#include <iostream>
using namespace std;

int main() {
    const int small_room_price {25};
    const int large_room_price {35};
    const double tax_rate {0.06};
    const int expire_time {30};
    
    cout << "Welcome to Wi's Room Cleaning.""\nCharges are following: \nsmall room="<<small_room_price<<"$";
    cout  <<"\nlarge room="<<large_room_price<<"$"<<endl;
    cout << "Tax rate is: "<<tax_rate*100<<"%"<<endl;
    
    cout <<"Enter number of small rooms you would like to get cleaned:";
    int small_room_number {0};
    cin>>small_room_number;
    cout<<"You entered "<<small_room_number<<endl;
    int large_room_number {0};
     cout <<"Enter number of large rooms you would like to get cleaned:";
    cin>> large_room_number;
    cout<<"You entered "<<large_room_number<<endl;
    cout<<"=================================="<<endl;
    cout<<"Cleaning estimate: ";
    cout<<"\nNumber of small rooms: "<<small_room_number;
    cout<<"\nNumber of large rooms: "<<large_room_number;
    cout<< "\nSmall room price is "<<small_room_price<<"$";
    cout<< "\nLarge room price is "<<large_room_price<<"$";
    int cost{large_room_number*large_room_price+small_room_number*small_room_price};
    cout<<"\nCost: "<<cost <<"$";
    cout<<"\nTax: "<<cost*tax_rate<<"$";
    double total {cost*tax_rate+cost};
    cout<<"\nTotal: "<< total<<"$";
    cout<<"\nThis estimate is valid for "<<expire_time <<" days."<<endl;
    
    return 0;
}