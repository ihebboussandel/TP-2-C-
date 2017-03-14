/* 
 * File:   main.cpp
 * Author: iheb
 *
 * Created on March 12, 2017, 5:10 PM
 */

#include <cstdlib>
#include <iostream>
#define NBMAX 30
using namespace std;
class Note{
    public:
    Note();
    
    Note(string c_nom, string c_prenom,int c_number) : nom(c_nom), prenom(c_prenom),value(c_number) {};
    void setnom(string nom){
        this->nom=nom;
    }
    void setprenom(string prenom){
        this->prenom=prenom;
    }
    void setvalue(int value){
        this->value=value;
    }
    string getnom(){
        return nom;
    }
    string getprenom(){
        return prenom;
    }
    int getvalue(){
        return value;
    }
private:
    string nom;
    string prenom;
    int value;
};
Note::Note(){
}
class ListeNote{
public:
    int nb,increment;
    Note **tableauNotes;
    ~ListeNote();
    ListeNote(int c_nb);
    void ajoutNote(string name ,string subject,int score);
    void afficheliste(){
        for (int i = 0; i < this->nb; i++) {
            if(tableauNotes[i]->getnom()!=""){
        cout<<"_____________"<<endl;
        cout<<tableauNotes[i]->getnom()<<endl;
        cout<<tableauNotes[i]->getprenom()<<endl;
        cout<<tableauNotes[i]->getvalue()<<endl;
        cout<<"_____________"<<endl;
        }
        }
   
    };
    void reinitialiseTableau(){
        int number;
        cout<<"set table max saize again"<<endl;
        cin>>number;
        for (int i = 0; i < number; i++) {
        tableauNotes[i] = new Note();
    }
        nb=number;
    };
    void afichemoyenne();
};
void ListeNote::afichemoyenne(){
    double max =tableauNotes[0]->getvalue();
    double min =tableauNotes[0]->getvalue();
    double avrage=0;
    int not_empty=0;
    for (int i = 0; i < nb; i++){
        
        if(tableauNotes[i]->getnom()!=""){
            not_empty++;
        if ((int)tableauNotes[i]->getvalue()>max){
            max=tableauNotes[i]->getvalue();
        }
        if(tableauNotes[i]->getvalue()<min){
            min=tableauNotes[i]->getvalue();
        }
        avrage=avrage+tableauNotes[i]->getvalue();

    }
    }
    cout<<"\nmin:"<<min<<"\nmax:"<<max<<"\navrage:"<<avrage/not_empty<<"   "<<not_empty<<endl;
    }
ListeNote::ListeNote(int c_nb){
    string str1;
    string str2;
    int value;
    nb=c_nb;
    increment=0;
    tableauNotes=new Note*[NBMAX];
    for (int i = 0; i < nb; i++) {
        tableauNotes[i] = new Note();
    }

    
}
void ListeNote::ajoutNote(string name ,string subject,int score){
    //this->increment++;
    if(increment<nb){    
    tableauNotes[increment]->setnom(name);
    tableauNotes[increment]->setprenom(subject);
    tableauNotes[increment]->setvalue(score);
    increment++;
    }else{
        cout<<"out of memory can no longer add more notes"<<endl;
    }

        
    }
/*
 * 
 */


/*
 
 
 *
 
 
 */
int choice();
void menu(int);
int main(int argc, char** argv) {
    string nom,prenon;
    int valeur;
    ListeNote *Instnce;
    bool exit_s=true;
    int nb;
    int choix;
    cout<<"donné la taille de tableaux"<<endl;
    cin>>nb;
    Instnce=new ListeNote(nb);
    while(exit_s!=false){
        choix =choice();
     switch(choix){
    case 0:cout<<"donné le nom" <<endl;
    cin>>nom;
    cout<<"prenom" <<endl;
    cin>>prenon;
    cout<<"donné note" <<endl;
    cin>>valeur;
    Instnce->ajoutNote(nom,prenon,valeur);
    break;
    case 1: Instnce->afficheliste();
    break;
    case 2: Instnce->reinitialiseTableau();
    break; 
    case 3: Instnce->afichemoyenne();
    break;
    case 4:
        cout<<"thank you for using iheb's program see you next time .Bye"<<endl;
    exit_s=false;
    break;
    default: cout << "error out of range";
    break;}
    };
    return 0;
}

/*
 *
 *
 */
int choice(){
    int key;
    cout<<"que voullé vous faire:"<<endl;
    cout<<"0.Ajouté une note"<<endl;
    cout<<"1.Afficher la liste des notes."<<endl;
    cout<<"2.refaire une novelle liste."<<endl;
    cout<<"3.Afficher la mmoyénne des notes."<<endl;
    cout<<"4.exit"<<endl;
    cin>>key;
    return key;
}