#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Mitarbeiter
{
private:
    string Name;
    string Vorname;
    string Geburtsdatum;
    int Tag;
    int Monat;
    int Jahr;
    int Urlaubsanspruch = 30;
    int verbrauchterUrlaub = 0;
    int UrlaubBeantragen();

public:

    int resturlaubBerechnen(int,int);
    int verbrauchterUrlaubBer(int,int);
    int tageExtrahieren(string);
    int monateExtrahieren(string);
    int jahreExtrahieren(string);
};

int Mitarbeiter::resturlaubBerechnen(int anspruch,int verbraucht)
{
    int out;
    out = anspruch - verbraucht;
    return out;
}
int Mitarbeiter::verbrauchterUrlaubBer(int verbraucht,int neuGenommeneTage)
{
    int out;
    out = verbraucht + neuGenommeneTage;
    return out;
}
int Mitarbeiter::UrlaubBeantragen()
{
    string startDatum;
    string endDatum;
    cout << "Wann soll Ihr Urlaub starten?" << endl;
    cout << "Bitte geben Sie das Datum in folgendem Format ein: DD.MM.YYYY" << endl;
    cin >> startDatum;
    cout >> "Bis wann soll Ihr Urlaub gehen?" << endl;
    cin >> endDatum;

}
//int Mitarbeiter::tageExtrahieren(string)
//{
//
//}
int main()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    tm *ltm = localtime(&now);
    int dayNow = ltm->tm_mday;
    int monNow = 1+ltm->tm_mon;
    int yearNow = 1900+ltm->tm_year;
    cout << "Hello world!" << endl;
    cout << "heute: " << dt << endl;
    cout << "Tag: " << dayNow << endl;
    cout << "Monat: " << monNow << endl;
    cout << "Jahr: " << yearNow << endl;
    return 0;
}

