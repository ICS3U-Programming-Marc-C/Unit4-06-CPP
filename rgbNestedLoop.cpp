// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April 2022
// This program displays the rgb code colors
// from 0 to 50

#include <iostream>

int main() {
       // Declaring variables
       int counter1;
       int counter2;
       int counter3;

       // First loop
       for (counter1 = 0; counter1 < 51; counter1++) {
              // Second loop
              for (counter2 = 0; counter2 < 51; counter2++) {
                     // Third loop
                     for (counter3 = 0; counter3 < 51; counter3++) {
                            // Displaying all the possibilities
                            std::cout <<"(" << counter1 << ",";
                            std::cout << counter2 << "," counter3 << ")\n";
                     }
              }
       }
}
