#include "ImageView.h"
#include "NinePatch.h"
#include <QPainter>

ImageView::ImageView(QWidget *parent) : QWidget(parent)
{
}

ImageView::~ImageView()
{

}


void ImageView::setImage(QImage const &image)
{
	this->image = image;
	update();
}

void ImageView::paintEvent(QPaintEvent *)
{
	if (image.isNull()) {
		return;
	}
	int dw = width();
	int dh = height();
	QPixmap pixmap = createPixmapFromNinePatchImage(image, dw, dh);
	QPainter pr(this);
	pr.drawPixmap(0, 0, dw, dh, pixmap);
}
