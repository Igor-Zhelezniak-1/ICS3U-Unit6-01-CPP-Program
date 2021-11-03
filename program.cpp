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

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0,100]
        randomNumber = idist(rgen);
        randomNumbers[loop_counter] = randomNumber;
    }

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        std::cout << "This is random number: "
        << randomNumbers[loop_counter] << std::endl;
        summ = summ + randomNumbers[loop_counter];
    }
    average = summ / 10;

    std::cout << "" << std::endl;
    std::cout << "The average is " << average << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
