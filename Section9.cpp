#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<<"Baza danych temperaturowych z Wroclawia, srednie temperatury z roku 2019."<<endl;
    char selection{};
    int element{};
    double sum{};
    double mean{};
    int mini{}; 
    int maxi{};
    vector<int>vec{10,5,8,12,4,15,21,26,};
    do{ 
    cout<<"\n============="<<endl;
    cout<<"P - Pokaz dane"<<endl;
    cout<<"A - Dodaj dane"<<endl;
    cout<<"M - Pokaz srednia"<<endl;
    cout<<"S - Pokaz najmniejsza"<<endl;
    cout<<"L - Pokaz najwieksza"<<endl;
    cout<<"Q - Wyjdz z bazy"<<endl;
    cout<<"\n============="<<endl;
    cin>>selection;
    
        if(selection=='p' || selection=='P'){
            for (int i {0};i<vec.size();i++)
                cout<<vec[i]<<" ";
        }
        else if (selection=='a' || selection=='A'){
            cout<<"\nPodaj nowy element,ktory chcesz dodac do bazy: ";
            cin>>element;
            vec.push_back(element);
            cout<<"Dodano "<< element<<endl;
            }
        else if (selection=='m' || selection=='M') {
            if(vec.size()<8)
                    cout<<"\nZbyt malo daych, aby obliczyc srednia. Potrzeba przynajmniej 8 pomiarow"<<endl;
            else
            for (int i {0}; i<vec.size();i++){
                sum+=vec[i];
                mean=sum/vec.size();
                }
                cout<<"\nSrednia temperatur to: "<<mean;
        }
        else if (selection=='s' || selection == 'S'){
            mini=vec.at(0);
            cout<<"Size: "<<vec.size()<<endl;
//            for(int i{0}; i<vec.size();i++){
                   for (auto i:vec) {
                        if( i < mini)
                            mini=i;
                            cout<<i<<endl;
                }

                
            
            cout<<"\nNajnizsza temperatur to: "<< mini<<endl; 
        }
        else if (selection=='l' || selection == 'L'){
            maxi=vec.at(0);
//                for (auto i:vec)
//                    if (i>maxi)
//                        maxi=i;
                for (int i {};i<vec.size();i++){
                        if(vec[i]>maxi)
                            maxi = vec[i];
                            
    }
    cout<<"\nNajwyzsza temperatur to: "  << maxi<<endl; 
        }
        else if (selection=='q' || selection == 'Q'){
            cout<<"\nDziekuje za skorzystanie z bazy."<<endl;
        }
        else{
            cout<<"Bledna literka";
    }
    
    
}   while(selection !='q' && selection !='Q');
    
    return 0;
}