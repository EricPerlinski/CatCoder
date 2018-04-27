#pragma once
#include <string>
#include <iostream>

using namespace std;
using bidder = std::pair<std::string, int64_t>;

class Bid 
{
public:
  Bid();
  ~Bid();
  Bid(int64_t initPriceParam);

  int64_t getCurrentPrice();
  int64_t getInitPrice();
  bidder getHighestBidder();

  void computeStep(bidder bidderToEvaluate);

private:
  int64_t step_;
  int64_t initPrice_;
  int64_t currentPrice_;
  bidder highestBidder_;
};
