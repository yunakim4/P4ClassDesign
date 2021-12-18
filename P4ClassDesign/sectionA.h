#include <string>

class WebUrl {
public:
    WebUrl(std::string webUrl);

    std::string getwebUrl();
    std::string getScheme();
    std::string getAuthority();
    std::string getUrlpath();

private:
    std::string _webUrl;
    std::string _scheme;
    std::string _authority;
    std::string _path;

};
