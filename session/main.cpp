/*
 * Copyright (C) 2023-2024 Lingmo OS Team.
 */

#include "application.h"
#include <QQuickWindow>

int main(int argc, char *argv[])
{
    // 强制使用 Wayland QPA 插件
    qputenv("QT_QPA_PLATFORM", QByteArrayLiteral("wayland"));

    QQuickWindow::setDefaultAlphaBuffer(true);
    QCoreApplication::setAttribute(Qt::AA_DisableHighDpiScaling);

    Application a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    return a.exec();
}
