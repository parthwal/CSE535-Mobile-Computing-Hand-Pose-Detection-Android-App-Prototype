#include <string>
#include <sstream>

            std::string s;
            for(int i = 0; i < sizeof(classes) / sizeof(classes[0]); i++){
                std::stringstream ss;
                ss << classes[i] << ": " << std::fixed << std::setprecision(1) << confidences[i] * 100 << "%\n";
                s += ss.str();
            }
