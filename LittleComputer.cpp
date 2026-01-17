#include "LittleComputer.h"
#include <vector>
using namespace std;

    LittleComputer::LittleComputer(){
    m_accumulator = 0;
    m_programCounter = 0;
    };
    LittleComputer::LittleComputer(vector<int> instructions){
      m_memory = instructions;
      if(!isHalted()){
        for ()

    
        

      
      }
    };

    
    int LittleComputer::getMemoryAt(int location){
      return m_memory.at(location);
    }
    int LittleComputer::getCurrentInstruction(){
      return m_memory.at(m_programCounter);
    }
    void LittleComputer::step(){
      LittleComputer();
    }
    bool LittleComputer::isHalted(){
      return true;
    }
    void LittleComputer::restart(){}

    /**
     * @brief Get the Program Counter
     * 
     * @return int Current program counter
     */
    int LittleComputer::getProgramCounter(){return m_programCounter;}

    /**
     * @brief Get the Accumulator value
     * 
     * @return int Current accumulator value
     */
    int LittleComputer::getAccumulator(){
      return m_accumulator;
    }
    
    // Add other public member functions / constructors here



