#include <LittleComputer.h>
using namespace std;

class LittleComputer {
public:
    /**
     * @brief Construct a new Little Computer object with an empty program
     * 
     */
    LittleComputer();
    LittleComputer(vector<int> instructions){

    
    int getMemoryAt(int location){}
    int getCurrentInstruction(){

    }
    void step(){}
    bool isHalted(){}
    void restart(){}

    /**
     * @brief Get the Program Counter
     * 
     * @return int Current program counter
     */
    int getProgramCounter();

    /**
     * @brief Get the Accumulator value
     * 
     * @return int Current accumulator value
     */
    int getAccumulator(){
      int accu = accumulator;
      return accu;
    }
    
    // Add other public member functions / constructors here

private:
  vector<int> memory = {};
  int accumulator = 0;
  int programCounter = 0;
    // Add member variables here
};

