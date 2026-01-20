#include "LittleComputer.h"
#include <vector>
#include <iostream>

using namespace std;

    LittleComputer::LittleComputer(){
    m_accumulator = 0;
    m_programCounter = 0;
    };
    LittleComputer::LittleComputer(vector<int> instructions){
      m_memory = instructions;
      if(!isHalted()){
        switch(instructions.at(getProgramCounter())){

          case 000: 
          cout << "bingbong";

          case 100:

          case 200:

          case 300:

          case 400:
          
          case 500:

          case 600:

          case 700:

          case 800: 



        }

      incrementCounter();
      }
      else{cout << "Error: isHalted"<< endl;};
    };

    
    int LittleComputer::getMemoryAt(int location){
      return m_memory.at(location);
    }
    void LittleComputer::incrementCounter(){
      m_programCounter += 1; 
    }
    int LittleComputer::getCurrentInstruction(){
      return m_memory.at(m_programCounter);
    }
    void LittleComputer::step(){
      LittleComputer();
    }
    bool LittleComputer::isHalted(){
      if ()
      return false;
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



