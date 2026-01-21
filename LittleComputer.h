#ifndef LITTLECOMPUTER_H
#define LITTLECOMPUTER_H
using namespace std;
#include <vector>

/**
 * @brief A simple little computer simulator.
 * 
 */
class LittleComputer {
public:
    /**
     * @brief Construct a new Little Computer object with an empty program
     * 
     */
    LittleComputer();

    /**
     * @brief Construct a new Little Computer object with given instructions
     * 
     * @param instructions 
     */
    LittleComputer(const vector<int>& instructions);

    /**
     * @brief Get the Memory At object
     * 
     * @param location 
     * @return memory value at given location 
     */
    int getMemoryAt(int location);
    /**
     * @brief Get the Current Instruction value
     * 
     * @return int 
     */
    int getCurrentInstruction();
    /**
     * @brief move the program forward
     * 
     */
    void step();
    /**
     * @brief checks the programs status
     * 
     * @return true 
     * @return false 
     */
    bool isHalted();
    /**
     * @brief rests the LittleComputer
     * 
     */
    void restart();

    /**
     * @brief Get the Program Counter
     * 
     * @return int Current program counter
     */
    int getProgramCounter();
    void incrementCounter();

    /**
     * @brief Get the Accumulator value
     * 
     * @return int Current accumulator value
     */
    int getAccumulator();
    
    // Add other public member functions / constructors here

private:
  vector<int> m_memory{100, 0};
  int m_accumulator = 0;
  int m_programCounter;
    // Add member variables here
};
#endif // LITTLECOMPUTER_H
