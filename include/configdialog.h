/*
 *  canspy - A simple tool for users who need to interface with a device based on
 *           CAN (CAN/CANopen/J1939/NMEA2000/DeviceNet) such as motors,
 *           sensors and many other devices.
 *  Copyright (C) 2015-2016  Manuele Conti (manuele.conti@gmail.com)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * This code is made available on the understanding that it will not be
 * used in safety-critical situations without a full and competent review.
 */


#ifndef CONFIGDIALOG_H
#define CONFIGDIALOG_H

#include "ui_configdialog.h"
#include <QObject>
#include <QWidget>
#include <QDialog>

class QCanalyzerConfigDialog : public QDialog , public Ui::ConfigurationDialog
{
	Q_OBJECT
public:
	QCanalyzerConfigDialog(QWidget *parent= 0);
	~QCanalyzerConfigDialog();
public slots:
	void changePage(QListWidgetItem *current, QListWidgetItem *previous);
	void on_logFileCheckBox_stateChanged();

private slots:
	void selectSimulationFile(void);
	void selectConfigurationFile(void);
	void acceptDriver(void);
private:
	void saveSettings(void);
};

#endif
