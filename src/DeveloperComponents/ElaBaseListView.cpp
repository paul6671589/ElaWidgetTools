#include "ElaBaseListView.h"

#include "ElaScrollBar.h"
ElaBaseListView::ElaBaseListView(QWidget* parent)
    : QListView(parent)
{
    setStyleSheet(
        "QListView{background-color: transparent;border:0px;}"
        "QListView::item{border:none;}");
    setAutoScroll(false);
    setFocusPolicy(Qt::NoFocus);
    setVerticalScrollBar(new ElaScrollBar(this));
    setHorizontalScrollBar(new ElaScrollBar(this));
    setSelectionMode(QAbstractItemView::NoSelection);
    setMouseTracking(true);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
    setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
}

ElaBaseListView::~ElaBaseListView()
{
}
