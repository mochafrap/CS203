#ifndef CANVAS_H
#define CANVAS_H

#include <vector>

#include <QLine>
#include <QPaintEvent>
#include <QWidget>

class Canvas: public QWidget {
    Q_OBJECT
    std::vector<QLine> lines;

    void drawH(int, int, int);

public:
    explicit Canvas(QWidget *parent=0);
    ~Canvas();

    void drawBranches(int order, int x=250, int y=250, int size=250);
    void reset();

protected:
    void paintEvent(QPaintEvent*);

};

#endif