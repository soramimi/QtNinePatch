#ifndef NINEPATCH_H
#define NINEPATCH_H

#include <QImage>
#include <QPixmap>

QPixmap createPixmapFromNinePatchImage(QImage const &image, int dw, int dh);

#endif // NINEPATCH_H
