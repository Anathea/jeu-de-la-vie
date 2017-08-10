import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle{
    Button{
        width: 20
        onClicked : {
            Context.sendActionToCpp("activate", 'maChaineDuPlateau')
        }
    }

    PlateauVie {
        x : 120
        y : 20
        nbCellX : 24
        nbCellY : 20
        coteCell : 25
    }

}
