#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    string alphabet {" -abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string klucz {" _baeicouydAEIOUfY0123g456h7JaeikouylAEIOUmY89!@n#$%p^"};
    string kod{};
    vector <int> temp2{};
    string encrypted  {} ;
    string decrypted {} ;
    cout<<"Code message: "<<endl;
    getline(cin,kod);    
        for (int i{0}; i<=kod.size()-1; i++){
                temp2.push_back(alphabet.find(kod.at(i)));
                encrypted.push_back(klucz.at(temp2.at(i)));
                decrypted.push_back(alphabet.at(temp2.at(i)));
        }
        
        cout<<"Encrypted message is: "<< encrypted<<endl;
        cout<<"Decrypted message is: "<< decrypted<<endl;
        cout<<"\n==========================="<<endl;

//    
        
    
    return 0;
}