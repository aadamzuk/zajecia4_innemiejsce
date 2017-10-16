#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <vector>
#include <sstream>

using namespace std;
struct probka
{
    double t;
    double x;
    probka (double _t, double _x){
    t=_t;
    x=_x;
    }

};
vector <probka> wczytaj (string nazwa)
{
    vector <probka> tab;
    ifstream plik(nazwa);

        string linia;
        {
        while(getline(plik,linia)){
            stringstream aa(linia);
    double _t, _x;
    aa>>_t;
    aa.ignore();
    aa>>_x;
    cout<<_t<<endl;
    cout<<_x<<endl;
    tab.push_back(probka(_t,_x));
        }
    }
    plik.close();
    return tab;
}
void zapis (vector <probka> dane,string nazwa)
{
    ofstream zapisanie(nazwa);
    for(int i=0;i<dane.size();i++)
    {

    zapisanie<<dane[i].t<<endl;
    }
zapisanie.close();

}
//vector <probka> tablica;
//tablica push_back(p1);
//cout<<tablica[0];

int main(int argc, char* argv[])
{
    if (argc != 2) { return -1;
}
string nazwa_pliku = argv[1];
vector<probka>dane=wczytaj(argv[1]);
zapis(dane,"nazwa.csv");
cin.get();

return 0;
}
