#include <LittleComputer.h>
using namespace std;

class LittleComputer {
public:
    /**
     * @brief Construct a new Little Computer object with an empty program
     * 
     */
    LittleComputer(){
      int ACC = m_accumulator;
      int PC = m_programCounter;
      m_memory(100,0);
    };
    LittleComputer(vector<int> instructions);

    
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
    int getProgramCounter(){return m_programCounter;}

    /**
     * @brief Get the Accumulator value
     * 
     * @return int Current accumulator value
     */
    int getAccumulator(){
      return m_accumulator;
    }
    
    // Add other public member functions / constructors here

private:
  vector<int> m_memory = {};
  int m_accumulator = 0;
  int m_programCounter = 0;
    // Add member variables here
};

