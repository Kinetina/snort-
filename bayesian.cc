#include "bayesian.h"

#include <fstream>
#include <iostream>

namespace machinelearning {
namespace baysian {

void Bayesian::ParseConfiguration(char *cfg_file) {
  std::ifstream configure;
  configure.open(cfg_file);
  if (!configure) {
    std::cout << "Can't open configuration file!" << std::endl;
    return;
  }

  configure >> num_train_instances_ >> num_test_instances_ >> num_attributes_;
  // read the number of training instances and attributes

  is_d