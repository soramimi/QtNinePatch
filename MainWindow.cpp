#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_action_file_open_triggered()
{
	QString path;
	path = QFileDialog::getOpenFileName(this, qApp->applicationName(), path, "9patch files (*.9.png);;All files (*.*)");
	QImage image;
	if (image.load(path)) {
		ui->imageview->setImage(image);
	}
}

void MainWindow::on_action_file_exit_triggered()
{
	close();
}
