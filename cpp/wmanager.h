#ifndef WMANAGER_H
#define WMANAGER_H

#include <QObject>
// #include <QQuickWidget>
#include <QQuickView>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QQmlEngine>
#include <QQmlContext>

#include <QDebug>
#include <QStringList>
#include <QPoint>
#include <vector>
#include "GameOfLife.h"


class WManager : public QObject
{
    Q_OBJECT

public:
    explicit WManager(QObject *parent = 0);

    // Permet d'avoir une seule instance
    static WManager *getInstance()
    {
        if (NULL == _singleton)
        {
            _singleton = new WManager ;
        }
        return _singleton ;
    }

    void load();

    void makeQMLtab(QString nomFichierQMLsansExtension);

    void displayInitialInformations();

    //...........................................................................

    void updateQML_ListView(QString nomModele, QStringList sl);

    Q_INVOKABLE void sendActionToCpp(unsigned int a = 10, unsigned int b = 10);
    Q_INVOKABLE void sendCaseToCpp(QPoint);

    Q_INVOKABLE void multipleStep(unsigned int a = 110);
    Q_INVOKABLE void step();
    Q_INVOKABLE void prevStep();
    Q_INVOKABLE void reset();

    Q_INVOKABLE void save();

    //http://annabellecollin.perso.math.cnrs.fr/TPS/TP_3.pdf
    QStringList createStringFromPlateau(std::vector<std::vector<int>> plateau);

private :
//    std::vector<std::vector<int>> m_plateau;
    GameOfLife gl;
    void initPlateau(int i = 10, int j = 10);

protected:
    std::vector<QQuickView*> quickViews;

    QString getRepertoireProjet(bool trace = false);
    
    QVector<QQmlContext *>          m_QMLcontexts;
    QQmlContext*                    m_qmlContext;

signals:

public slots:

    
private :
    static WManager *_singleton ;
};

#endif // WMANAGER_H
