#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QWidget>

class ImageView : public QWidget
{
	Q_OBJECT
private:
	QImage image;
public:
	explicit ImageView(QWidget *parent = 0);
	~ImageView();

	virtual void paintEvent(QPaintEvent *);

	void setImage(QImage const &image);

signals:

public slots:
};

#endif // IMAGEVIEW_H
