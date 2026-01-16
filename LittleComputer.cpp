#include <LittleComputer.h>
using namespace std;

class LittleComputer {
public:
    /**
     * @brief Construct a new Little Computer object with an empty program
     * 
     */
    LittleComputer();

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
    int getAccumulator();
    
    // Add other public member functions / constructors here

private:
    // Add member variables here
};

