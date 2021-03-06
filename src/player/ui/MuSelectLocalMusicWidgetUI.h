﻿/**
 * MumuMusic
 * 基于Qt的模仿网易云音乐PC客户端的app
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 */

#ifndef MUSELECTLOCALMUSICWIDGETUI_H
#define MUSELECTLOCALMUSICWIDGETUI_H

#include <QWidget>

namespace Ui {
class MuSelectLocalMusicWidgetUI;
}

class MuSelectLocalMusicWidgetUI : public QWidget
{
    Q_OBJECT

public:
    explicit MuSelectLocalMusicWidgetUI(QWidget *parent = nullptr);
    ~MuSelectLocalMusicWidgetUI();

    void addItem(const QString &item);

    QStringList getItemsContent() const;

private:
    Ui::MuSelectLocalMusicWidgetUI *ui;
};

#endif // MUSELECTLOCALMUSICWIDGETUI_H
