#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWebEngineView>
#include <QLineEdit>
#include "Oktan.h"



int main(int argc, char**argv)
{
    QApplication app(argc, argv);

    auto mainWindow = new Oktan;

    auto vBox = new QVBoxLayout(mainWindow);

    auto lineEdit = new QLineEdit;
    auto webView = new QWebEngineView;

    webView->setUrl(QUrl("http://skillbox.ru"));

    auto button = new QPushButton("Test");
    auto button2 = new QPushButton("Test2");

    vBox->addWidget(lineEdit);
    vBox->addWidget(webView);
    vBox->addWidget(button);
    vBox->addWidget(button2);

    QWidget::connect(lineEdit, &QLineEdit::returnPressed, [lineEdit, webView, mainWindow](){
        webView->load(lineEdit->text());
    });

  
    QWidget::connect(button, &QPushButton::clicked, [&mainWindow](){
        mainWindow->setWindowTitle("Oktan");
    });

    QWidget::connect(button2, &QPushButton::clicked, [&mainWindow](){
        mainWindow->setWindowTitle("-=Oktan=-");
    });

    mainWindow->show();

    

    return app.exec();

}
