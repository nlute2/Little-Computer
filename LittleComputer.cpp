#include "LittleComputer.h"
#include <iostream>
#include <vector>

using namespace std;

LittleComputer::LittleComputer()
{
  m_accumulator = 0;
  m_programCounter = 0;
};
LittleComputer::LittleComputer(const vector<int>& instructions)
{
  m_accumulator = 0;
  m_programCounter = 0;
  bool increment = false;
  m_memory = instructions;
  cout << getProgramCounter();
  int instruction = m_memory.at(getProgramCounter());
  if (!isHalted()) {
    switch (m_memory.at(getProgramCounter()) / 100) {
    case 0:
      cout << "bingbong";
      break;
    case 1:
      m_accumulator = getAccumulator() + getMemoryAt(instruction % 100);
      increment = true;
      break;
    case 2:
      m_accumulator = getAccumulator() - getMemoryAt(instruction % 100);
      increment = true;
      break;
    case 3:
      m_memory.at(instruction % 100) = m_accumulator;
      increment = true;
      break;
    case 5:
      m_accumulator = getMemoryAt(instruction % 100);
      increment = true;
      break;
    case 6:
      m_programCounter = getMemoryAt(instruction % 100);
      increment = true;
      break;
    case 7:
      if (m_accumulator == 0) {
        m_programCounter = getMemoryAt(instruction % 100);
      }
      break;
      // case 8:

      // case 9:
    }

    if(increment){incrementCounter();
  } else {
    cout << "Error: isHalted" << endl;
  };
};
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
  LittleComputer();
}
bool LittleComputer::isHalted()
{
  if (m_memory.at(getProgramCounter()) == 0) {
    return true;
  } else {
    return false;
  }
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
