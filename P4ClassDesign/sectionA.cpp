#include "sectionA.h"
#include <iostream>

WebUrl::WebUrl(std::string webUrl)
    :_webUrl{ webUrl } { }

std::string WebUrl::getwebUrl() {
    std::cout << "Website URL = " << _webUrl << "\n";
    return _webUrl;
}

std::string WebUrl::getScheme() {
    int count = 0;
    int numInBetween = 0;
    int num = 0;


    for (int i = 0; i < _webUrl.size(); i++) {
        if (_webUrl[i] == '/') {
            count++;
        }

        else if (count < 3) {
            numInBetween++;

            if (count < 1) {
                num++;
            }
        }
    }

    _scheme = _webUrl.substr(0, _webUrl.find_first_of("/"));
    std::cout << "Scheme = " << _scheme << "\n";
    return _scheme;
}

std::string WebUrl::getAuthority() {
    int count = 0;
    int numInBetween = 0;
    int num = 0;


    for (int i = 0; i < _webUrl.size(); i++) {
        if (_webUrl[i] == '/') {
            count++;
        }

        else if (count < 3) {
            numInBetween++;

            if (count < 1) {
                num++;
            }
        }
    }

    int lastIndexOfAuthority = (numInBetween + 2) - num;
    _authority = _webUrl.substr(_webUrl.find_first_of("/"), lastIndexOfAuthority);
    std::cout << "Authority = " << _authority << "\n";
    return _authority;

}

std::string WebUrl::getUrlpath() {
    int count = 0;
    int numInBetween = 0;
    int num = 0;


    for (int i = 0; i < _webUrl.size(); i++) {
        if (_webUrl[i] == '/') {
            count++;
        }

        else if (count < 3) {
            numInBetween++;

            if (count < 1) {
                num++;
            }
        }
    }

    int lastIndexOfAuthority = (numInBetween + 2) - num;
    _path = _webUrl.substr(_authority.size() + _scheme.size(), _webUrl.size());
    std::cout << "Path = " << _path << "\n";
    return _path;

}

