#include <Bid.h>

Bid::Bid() :
  step_(0),
  initPrice_(1),
  currentPrice_(1),
  highestBidder_({"", 1})
{
  cout << "[I/O] " << __func__ << endl;
}

Bid::Bid(int64_t initPriceParam) :
  step_(0),
  initPrice_(initPriceParam),
  currentPrice_(initPriceParam),
  highestBidder_({"", initPriceParam})
{
  cout << "[I/O] " << __func__ << endl;
}

Bid::~Bid()
{
  cout << "[I/O] " << __func__ << endl;
}

int64_t 
Bid::getCurrentPrice()
{
  cout << "[I/O] " << __func__ << endl;
  return currentPrice_;
}

int64_t 
Bid::getInitPrice()
{
  cout << "[I/O] " << __func__ << endl;
  return initPrice_;
}

bidder
Bid::getHighestBidder()
{
  cout << "[I/O] " << __func__ << endl;
  return highestBidder_;
}

void
Bid::computeStep(bidder bidderToEvaluate)
{
    //Some Logic to put here
}
  
