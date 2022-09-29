#include "machinelearning.h"

#include <fstream>
#include <iostream>

namespace machinelearning {

// calculate the Accuracy
void MachineLearning::Accuracy(std::vector<int>& outcome,
                               std::vector<int>& truth) const {
  double correct = 0;  // store the number of correct predictions

  for 