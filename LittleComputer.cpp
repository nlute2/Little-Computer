#include "LittleComputer.h"
#include <iostream>
#include <vector>

using namespace std;

//initialize
LittleComputer::LittleComputer()
{
  m_accumulator = 0;
  m_programCounter = 0;
};

//intialize with instructions
LittleComputer::LittleComputer(const vector<int>& instructions)
{
  m_accumulator = 0;
  m_programCounter = 0;

  m_memory = instructions;
}

int LittleComputer::getMemoryAt(int location)
{
  return m_memory.at(location);
}
void LittleComputer::incrementCounter()
{
  m_programCounter += 1;
}
int LittleComputer::getCurrentInstruction()
{
  cout << getProgramCounter();
  return m_memory.at(getProgramCounter());
}

void LittleComputer::step()
{
  cout << getProgramCounter();
  int instruction = m_memory.at(getProgramCounter());
  bool skip = false;
  if (!isHalted()) {
    switch (m_memory.at(getProgramCounter()) / 100) {
    case 0:
      isHalted();
      break;
    case 1:
      m_accumulator = getAccumulator() + getMemoryAt(instruction % 100);

      break;
    case 2:
      m_accumulator = getAccumulator() - getMemoryAt(instruction % 100);

      break;
    case 3:
      m_memory.at(instruction % 100) = m_accumulator;

      break;
    case 5:
      m_accumulator = getMemoryAt(instruction % 100);

      break;
    case 6:
      m_programCounter = instruction % 100;
      cout << m_programCounter;
      skip = true;
      break;
    case 7:
      if (m_accumulator == 0) {
        m_programCounter = instruction % 100;
        skip = true;
      }
      break;
      // case 8:

      // case 9:
    }

    if (!isHalted()&&!skip) {
      incrementCounter();
    }
  } else {
    cout << "Error: isHalted" << endl;
  };
}
//program halts when an empty instruction or end of memory is reached.
bool LittleComputer::isHalted()
{
  if (m_programCounter >= static_cast<int>(m_memory.size())) {
    return true;
  } 
    return m_memory[getProgramCounter()]==0;
  }

void LittleComputer::restart()
{
  m_programCounter = 0;
  m_accumulator = 0;
}

int LittleComputer::getProgramCounter()
{
  return m_programCounter;
}

int LittleComputer::getAccumulator()
{
  return m_accumulator;
}

// Add other public member functions / constructors here
