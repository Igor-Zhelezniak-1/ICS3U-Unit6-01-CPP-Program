// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program uses an array

#include <iostream>
#include <random>

main() {
    // this function uses an array

    int randomNumbers[10];
    int randomNumber;
    int summ = 0;
    int average;

    std::cout << "Starting..." << std::endl;

    std::cout << "" << std::endl;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [0,100]
        
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomNumber = idist(rgen);
        randomNumbers[loopCounter] = randomNumber;
    }

    for (int loopCounter; loopCounter < 10; loopCounter++) {
        std::cout << "This is random number: "
        << randomNumbers[loopCounter] << std::endl;
        summ = summ + randomNumbers[loopCounter];
    }
    average = summ / 10;

    std::cout << "" << std::endl;
    std::cout << "The average is " << average << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
