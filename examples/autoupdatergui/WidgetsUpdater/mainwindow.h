#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtAutoUpdaterGui/UpdateController>
#include <QtAutoUpdaterGui/UpdateButton>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow() override;

private slots:
	void on_configPathToolButton_clicked();
	void on_checkUpdatesButton_clicked();
	void on_cancelButton_clicked();
	void on_activeBox_toggled(bool checked);
	void on_hasParentWindowCheckBox_clicked(bool checked);

private:
	Ui::MainWindow *ui;
	QtAutoUpdater::UpdateController *controller;
	QtAutoUpdater::UpdateButton *button;
};

#endif // MAINWINDOW_H
