//----------------------------------------------------------
// CS162 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may be republished without approval.
//----------------------------------------------------------

// Bring in unit testing code and tell it to build a main function
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

// Use Approx from doctest without saying doctest::Approx
using doctest::Approx;
//-----------------------------------------------------------------------------------

#include <string>
#include <vector>
#include "LittleComputer.h"

using namespace std;



// TEST_CASE("default constructor - memory not tested")
// {
//     LittleComputer c1;
//     CHECK(c1.getAccumulator() == 0);
//     CHECK(c1.getProgramCounter() == 0);
// }

// TEST_CASE("constructor that takes program and getMemoryAt")
// {
//     // Program that adds 10 to itself and prints answer
//     vector<int> program = {504, 104, 902, 0, 10};

//     LittleComputer c1(program);

//     // verify program was stored
//     for (size_t i = 0; i < program.size(); i++)
//         CHECK(c1.getMemoryAt(i) == program.at(i));
// }

// TEST_CASE("getCurrentInstruction start")
// {
//     // Program does not have to do anything meaningful for this test
//     vector<int> program = {504, 104, 902, 0, 10};

//     LittleComputer c1(program);
//     CHECK(c1.getCurrentInstruction() == 504);
// }

// TEST_CASE("step advances to next instruction")
// {
//     // Program does not have to do anything meaningful for this test
//     vector<int> program = {502, 102, 5};

//     LittleComputer c1(program);
//     c1.step();
//     CHECK(c1.getProgramCounter() == 1);
//     CHECK(c1.getCurrentInstruction() == 102);
// }

// TEST_CASE("isHalted and step does not advance halted program")
// {
//     // Program does not have to do anything meaningful for this test
//     vector<int> program = {103, 103, 0, 5};

//     LittleComputer c1(program);
//     CHECK(c1.isHalted() == false);
//     c1.step();
//     CHECK(c1.isHalted() == false);
//     c1.step();
//     CHECK(c1.isHalted() == true);
//     CHECK(c1.getProgramCounter() == 2);
//     c1.step();
//     CHECK(c1.isHalted() == true);
//     CHECK(c1.getProgramCounter() == 2);
// }

// TEST_CASE("step add and subtract work")
// {
//     // Program that adds 5 twice then subtracts 7
//     vector<int> program = {104, 104, 205, 0, 5, 7};

//     LittleComputer c1(program);
//     c1.step();
//     CHECK(c1.getAccumulator() == 5);
//     c1.step();
//     CHECK(c1.getAccumulator() == 10);
//     c1.step();
//     CHECK(c1.getAccumulator() == 3);
// }

// TEST_CASE("step load and store work")
// {
//     // Program that loads from 5, stores it to location 12,
//     //  loads from 6, reloads the value that was stored to 12
//     vector<int> program = {505, 312, 506, 512, 0, 3, 8, 0, 0, 0, 0, 0, 0};

//     LittleComputer c1(program);
//     c1.step();
//     CHECK(c1.getAccumulator() == 3);
//     c1.step();
//     CHECK(c1.getAccumulator() == 3);
//     CHECK(c1.getMemoryAt(12) == 3);
//     c1.step();
//     CHECK(c1.getAccumulator() == 8);
//     c1.step();
//     CHECK(c1.getAccumulator() == 3);
// }

// TEST_CASE("branch always")
// {
//     // Program that jumps to instruction 3 then 1
//     vector<int> program = {603, 0, 0, 601, 0};

//     LittleComputer c1(program);
//     c1.step();
//     CHECK(c1.getProgramCounter() == 3);
//     c1.step();
//     CHECK(c1.getProgramCounter() == 1);
// }

// TEST_CASE("branch if 0")
// {
//     // Program that skips instruction 1 due to branch
//     // Then loads 5 and hits another branch. Does not take it.
//     vector<int> program = {702, 0, 505, 701, 0, 5};

//     LittleComputer c1(program);
//     c1.step();
//     CHECK(c1.getProgramCounter() == 2);
//     c1.step();
//     c1.step();
//     CHECK(c1.getProgramCounter() == 4);
// }

TEST_CASE("restart")
{
    // Program that Adds 5 to itself and halts
    vector<int> program = {103, 103, 0, 5};

    LittleComputer c1(program);
    c1.step();
    c1.step();
    CHECK(c1.isHalted() == true);

    c1.restart();
    CHECK(c1.isHalted() == false);
    CHECK(c1.getProgramCounter() == 0);
    CHECK(c1.getAccumulator() == 0);

    c1.step();
    CHECK(c1.getProgramCounter() == 1);
    CHECK(c1.getAccumulator() == 5);
}
