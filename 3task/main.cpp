#include <iostream>
#include <vector>

#include "string.h"

using namespace std;


void treatment(vector<string> &urls) {

    for (int i = 0; i < urls.size(); i++) {
        string strbuf = urls.at(i);
        int count_slesh = 0;
        int count_two_points = 0;

        for (int j = 0; j < strbuf.length(); j++) {
            if (strbuf[j] == '/') { count_slesh++; }
            if (strbuf[j] == ':') { count_two_points++; }
        }

        switch (count_slesh) {
            case 0: {
                if (count_two_points == 1) {
                    int pos_point = strbuf.find(':');

                    urls.at(i) = "Protocol:http Host:" + strbuf.substr(0, pos_point) + " Port"
                                 + strbuf.substr(pos_point, strbuf.length() - pos_point) + " Page:/";

                } else { urls.at(i) = "Protocol:http Host:" + strbuf + " Port:80 Page:/"; }
                break;
            }
            case 1: {
                if (count_two_points == 1) {
                    int pos_point = strbuf.find(':');
                    int pos_slesh = strbuf.find('/');

                    urls.at(i) = "Protocol:http Host:" + strbuf.substr(0, pos_point) + " Port"
                                 + strbuf.substr(pos_point, pos_slesh - pos_point) + " Page:" +
                                 strbuf.substr(pos_slesh, strbuf.length() - pos_slesh);

                } else {
                    int pos_slesh = strbuf.find('/');
                    urls.at(i) = "Protocol:http Host:" + strbuf.substr(0, pos_slesh) + " Port:80 Page:/"
                                 + strbuf.substr(pos_slesh + 1, strbuf.length());

                }

                break;
            }
            case 2: {
                if (count_two_points == 2) {
                    int pos_point = strbuf.find(':');
                    urls.at(i) = "Protocol:" + strbuf.substr(0, pos_point) + " Host:";
                    strbuf = strbuf.substr(pos_point + 3, strbuf.length());

                    pos_point = strbuf.find(':');
                    urls.at(i) = urls.at(i) + strbuf.substr(0, pos_point) + " Port" +
                                 strbuf.substr(pos_point, strbuf.length()) + " Page:/";

                } else {
                    int pos_point = strbuf.find(':');
                    urls.at(i) = "Protocol:" + strbuf.substr(0, pos_point) + " Host:"
                                 + strbuf.substr(pos_point + 3, strbuf.length()) + " Port:80 Page:/";
                }

                break;
            }
            case 3: {
                if (count_two_points == 2) {
                    int pos_point = strbuf.find(':');
                    urls.at(i) = "Protocol:" + strbuf.substr(0, pos_point) + " Host:";

                    strbuf = strbuf.substr(pos_point + 3, strbuf.length());
                    pos_point = strbuf.find(':');
                    int pos_slesh = strbuf.find('/');

                    urls.at(i) = urls.at(i) + strbuf.substr(0, pos_point) + " Port" +
                                 strbuf.substr(pos_point, pos_slesh - pos_point)
                                 + " Page:"
                                 + strbuf.substr(pos_slesh, strbuf.length());

                } else {
                    int pos_point = strbuf.find(':');
                    urls.at(i) = "Protocol:" + strbuf.substr(0, pos_point) + " Host:";

                    strbuf = strbuf.substr(pos_point + 3, strbuf.length());
                    int pos_slesh = strbuf.find('/');

                    urls.at(i) = urls.at(i) + strbuf.substr(0, pos_slesh) + " Port:80" + " Page:"
                                 + strbuf.substr(pos_slesh, strbuf.length());
                }

                break;
            }
        }
    }

}


int main() {
    std::vector<std::string> urls;
    urls.push_back("https://mytona.com:325/index.html");
    urls.push_back("https://mytona.com:325/");
    urls.push_back("https://mytona.com/index.html");
    urls.push_back("https://mytona.com:8080");
    urls.push_back("https://mytona.com/index.html");
    urls.push_back("https://mytona.com:326");
    urls.push_back("https://mytona.com");
    urls.push_back("mytona.com:327");
    urls.push_back("mytona.com");
    urls.push_back("mytona.com/index.html");
    urls.push_back("mytona.com:328/index.html");

    treatment(urls);

    for (int i = 0; i < urls.size(); i++) {
        cout << urls.at(i) << endl;
    }
    return 0;
}