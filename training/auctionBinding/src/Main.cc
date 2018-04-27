#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <regex>
#include <exception>

#include <Bid.h>

using namespace std;
int main(int argc, char* argv[])
{
    cout << "[IN ] " << __func__ << endl;

    int initialPrice = 1;
    std::vector<bidder> biddersList;
    if (argc == 2)
    {
        bool isName = true;
        try {
           std::string argvStr = argv[1];
           std::istringstream ss(argvStr);
           std::vector<std::string> inputString;

           bool isFirst(true);
           std::string str;
           while (getline(ss, str, ','))
           {
               if (isFirst)
               {
                   isFirst = false;
                   initialPrice = stoi(str);
                   cout<< "Retrieved init price : [" << initialPrice << "]" << endl;
               }
               else
               {
                   inputString.push_back(str);
               }
           }

           int it = 0;
           while (it + 1 < inputString.size())
           {
               std::string name = inputString.at(it++);
               std::string bid = inputString.at(it++);
               biddersList.push_back({name, stol(bid)});
           }
        }
        catch (exception& e)
        {
            cout << "Bad parameters ... " << e.what() << endl;
            cout << "Exiting" << endl;
            return -1;
        }
    }

    Bid* bid = new Bid (initialPrice);

    for (const auto& iter : biddersList)
    {
        cout << "Retrieved bidders : [" << iter.first << "] - for the price of [" << iter.second << "]" << endl;
    }


    cout << "[OUT] " << __func__ << endl;
    return 0;
}

