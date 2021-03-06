#ifndef MEMSTORAGE_H
#define MEMSTORAGE_H

#include <QApplication>
#include <vector>
using namespace std;

class MemStorage
{
    private:
    vector<QString> memory;
    vector<string> stringmem; //for the parser to use in calculating
    int pos;

    QString at(const int index) const;
    string atParse(const int index) const;
    int size() const;


    public:
    MemStorage();
    QString up();
    QString down();
    QString push(QString str);
    QString recentMem();
    void returnBegin();
    string upParse();
    string downParse();
    string pushParse(string str);
    string recentMemParse();

};

#endif
