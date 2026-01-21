#include "LittleComputer.h"
#include <vector>
#include <iostream>

using namespace std;

    LittleComputer::LittleComputer(){
    m_accumulator = 0;
    m_programCounter = 0;
    };
    LittleComputer::LittleComputer(const vector<int>& instructions){
     m_accumulator = 0;
      m_programCounter = 0;
      m_memory = instructions; 
      if(!isHalted()){
        switch(m_memory.at(getProgramCounter())/100){
          int instruction = m_memory.at(getProgramCounter());

          case 0: 
          cout << "bingbong";

          case 1:
          m_accumulator +=  getMemoryAt(instruction%100); 
          case 2:
          m_accumulator -= getMemoryAt(instruction % 100);
          case 3:
          m_memory.at(instruction%100) = m_accumulator;
          case 5:
          m_accumulator = getMemoryAt(instruction % 100);
          case 6:
          m_programCounter = getMemoryAt(instruction % 100);
          case 7:
          if 

          case 8: 
          
          case 9:


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
      if (m_memory.at(getProgramCounter())==0){
        return true;
      }else{
      return false;}
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



