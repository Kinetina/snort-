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

  is_discrete_.resize(num_attributes_);
  // this array store the information about each attribute is continuous or not
  for (int i = 0; i < num_attributes_; ++i) configure >> is_discrete_[i];
  //  read the