#ifndef ELASCROLLPAGE_H
#define ELASCROLLPAGE_H

#include <QWidget>

#include "stdafx.h"
class ElaScrollArea;
class ElaText;
class QHBoxLayout;
class ElaScrollPagePrivate;
class ELA_EXPORT ElaScrollPage : public QWidget
{
    Q_OBJECT
    Q_Q_CREATE(ElaScrollPage)
    Q_PROPERTY_CREATE_Q_H(QWidget*, CustomWidget)
public:
    explicit ElaScrollPage(QWidget* parent = nullptr);
    ~ElaScrollPage();

    void addCentralWidget(QWidget* centralWidget, bool isWidgetResizeable = true, bool isVerticalGrabGesture = true, qreal mousePressEventDelay = 0.5);

    void navigation(int widgetIndex, bool isLogRoute = true);

    void setPageTitleSpacing(int spacing);
    int getPageTitleSpacing() const;
    void setTitleVisible(bool isVisible);
    void setBreadBarClickIgnore(bool ignore);
};

#endif // ELASCROLLPAGE_H
