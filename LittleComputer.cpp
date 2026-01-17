#include "LittleComputer.h"
#include <vector>
using namespace std;


 
    LittleComputer::LittleComputer(){
      int ACC = m_accumulator;
      int PC = m_programCounter;
      
    };
    LittleComputer::LittleComputer(vector<int> instructions){
      m_memory = instructions;
    };

    
    int LittleComputer::getMemoryAt(int location){
      return m_memory.at(location);
    }
    LittleComputer::getCurrentInstruction(){
      return m_memory.at(m_programCounter);
    }
    void step(){
      LittleComputer();
    }
    bool isHalted(){
      return true;
    }
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
  vector<int> m_memory{100, 0};
  int m_accumulator = 0;
  int m_programCounter = 0;
    // Add member variables here
};

