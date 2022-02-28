#include "Tracker.h"

void Tracker::addData() {
    WOT.push_back(Routine());
    std::string aMove;
    std::string *ptr1;
    int aReps;
    int *ptr2;
    int aSets;
    int *ptr3;

    std::cout << "Give a move: ";
    std::getline(std::cin>>std::ws, aMove);
    ptr1 = &aMove;
    WOT[list].move = *ptr1;


    std::cout << "Give a reps: ";
    std::cin>> aReps;
    ptr2 = &aReps;
    WOT[list].reps = *ptr2;

    std::cout << "Give a sets: ";
    std::cin >> aSets;
    ptr3 = &aSets;
    WOT[list].sets = *ptr3;
    list++;
   }

void Tracker::alterData() {

}

   void Tracker::listAll(){
       std::cout << list << "\n";
       for (int i = 0; i < 100; i++){
           std::cout << WOT[i].move <<" \n" <<WOT[i].sets << "\n"<< WOT[i].reps << "\n";
       }
   }