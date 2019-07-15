#include "inf_tape.cpp"
#include "tape_deque.cpp"
#include <chrono>
#include <iostream>

int main(){
    auto t1 = std::chrono::high_resolution_clock::now();
    infTape<int> tape1;
    auto t2 = std::chrono::high_resolution_clock::now();
    std::cout << "create infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tapeDeque<int> tape2;
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "create tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape1.increment(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "add 100 entries (back) infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape2.increment(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "add 100 entries (back) tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";
    
    t1 = std::chrono::high_resolution_clock::now();
    tape1.decrement(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "move back 100 entries infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape2.decrement(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "move back 100 entries tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape1.decrement(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "add 100 entries (front) infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape2.decrement(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "add 100 entries (front) tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape1.increment(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "move forward 100 entries infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape2.increment(100);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "move forward 100 entries tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape1.set(20);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "set entry infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape2.set(20);
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "set entry tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape1.get();
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "get entry infTape took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";

    t1 = std::chrono::high_resolution_clock::now();
    tape2.get();
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "get entry tapeDeque took " << 
        std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count() <<
        " microseconds\n";
}