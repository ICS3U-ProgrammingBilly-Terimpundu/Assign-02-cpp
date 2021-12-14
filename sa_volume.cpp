// Copyright (c) 2021 Ms Raffin All rights reserved.
// 
// Created by: Billy Terimpundu
// Created on: Dec. 2, 2021
// This program asks the user for the length
// of a cube then calcules surface area of a rectangular prism
#include <iostream>
#include <cmath>

// declare variables
float height, width, length, volume, surfaceArea;

int main() {
  // get input from user
  std::cout << "Today we will calculate the volume and surfaceArea of a rectangular prism\n";
  std::cout << "Enter the length (cm): ";
  std::cin >> length;
  std::cout << "Enter the width (cm): ";
  std::cin >> width;
  std::cout << "Enter the height (cm): ";
  std::cin >> height;
  
  // calculate volume and surfaceArea
  volume = (length * width * height);
  surfaceArea = 2 * ((width*length) + (height*length) + (height*width));

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Volume = " << volume << " cm^2.\n";
  std::cout << "Surface area = " << surfaceArea << "cm.\n";
}