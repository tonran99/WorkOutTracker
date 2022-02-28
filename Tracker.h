#include <iostream>
#include <string>
#include <vector>


struct Routine{
    std::string move = "N/A";
    int reps =0;
    int sets = 0;
};

class Tracker{
    private:
    int list = 0;
    std::vector<Routine> WOT; //WOT = Work Out Rountine
    public:
   void addData();
   void alterData();
   void listAll();
};