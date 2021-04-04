#include "bayesian.h"

#include <fstream>
#include <iostream>

namespace machinelearning {
namespace baysian {

void Bayesian::ParseConfiguration(char *cfg_file) {
  std::ifstream configure;
  configure.open(cfg_file);
  if (!configure) {
    std::cout << "Can't open configura