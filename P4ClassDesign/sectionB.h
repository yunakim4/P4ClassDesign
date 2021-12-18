#include <string>
class ImageMD {
public:
    ImageMD(std::string file, std::string imgType, int month, int day, int year,
        double sizeMB, std::string author, int width, int height, std::string aSize,
        std::string expTime, int IsoValue, bool flash);

    std::string getFile();
    void setFile(std::string file);
    std::string getImgType();
    void setImgType(std::string imgType);
    int getMonth();
    void setMonth(int month);
    int getDay();
    void setDay(int day, ImageMD imageMD);
    int getYear();
    void setYear(int year);
    double getSizeMB();
    void setSizeMB(double sizeMB);
    std::string getAuthor();
    void setAuthor(std::string author);
    int getWidth();
    int getHeight();
    void setWidth(int width);
    void setHeight(int height);
    std::string getASize();
    void setASize(std::string aSize);
    std::string getExpTime();
    void setExpTime(std::string expTime);
    int getIsoValue();
    void setIsoValue(int IsoValue);
    bool getFlash();
    void setFlash(bool flash);

private:
    std::string _file;
    std::string _imgType;
    int _month;
    int _day;
    int _year;
    double _sizeMB;
    std::string _author;
    int _width;
    int _height;
    std::string _aSize;
    std::string _expTime;
    int _isoValue;
    bool _flash;

};

void printImageMetaData(ImageMD imageMD);
