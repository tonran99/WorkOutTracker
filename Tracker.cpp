#include "Tracker.h"

void Tracker::addData() {
    WOT.push_back(Routine());
    string aMove;
    string *ptr1;
    int aReps;
    int *ptr2;
    int aSets;
    int *ptr3;

    cout << "Give a move: ";
    getline(cin>>ws, aMove);
    ptr1 = &aMove;
    WOT[list].move = *ptr1;


    cout << "Give a reps: ";
    cin>> aReps;
    ptr2 = &aReps;
    WOT[list].reps = *ptr2;

    cout << "Give a sets: ";
    cin >> aSets;
    WOT[list].sets = aSets;
    list++;
   }

void Tracker::alterData() {

}

   void Tracker::listAll(){
       cout << list << "\n";
       for (int i = 0; i < 100; i++){
           cout << WOT[i].move <<" \n" <<WOT[i].sets << "\n"<< WOT[i].reps << "\n";
       }
   }