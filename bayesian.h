#ifndef BAYESIAN_H_
#define BAYESIAN_H_

#include "machinelearning.h"

namespace machinelearning {
namespace baysian {

class Bayesian : public MachineLearning {
 protected:
  void ParseConfiguration(char *);
  std::vector<double> output_class_cnt_;
  // this array store the total number of
  // each decision's class in training data
  std::vector<int> is_discrete_;
  // this array store th