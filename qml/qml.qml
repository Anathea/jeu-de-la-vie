import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle {

    TextField {
        width: 60
        placeholderText: qsTr("Number")
        validator: IntValidator
    }

    Button {
        y: 25
        width: 60
        text: "Play!"
        onClicked : {
            Context.sendActionToCpp("activate", 'maChaineDuPlateau')
        }
    }

    Button {
        y: 50
        width: 60
        text: "Reset"
        onClicked : {
            Context.sendActionToCpp("reset", 'maChaineDuPlateau')
        }
    }

    Button {
        y: 75
        width: 60
        text: "1 more"
        onClicked : {
            Context.sendActionToCpp("oneMore", 'maChaineDuPlateau')
        }
    }

    Button {
        y: 100
        width: 60
        text: "1 less"
        onClicked : {
            Context.sendActionToCpp("oneLess", 'maChaineDuPlateau')
        }
    }

    Button {
        y: 125
        width: 60
        text: "Save"
        onClicked : {
            Context.sendActionToCpp("save", 'maChaineDuPlateau')
        }
    }

//    Le Slider

//    2 saisies qui permettront de changer la taille de la grille Whatever this means

    PlateauVie {
        x : 120
        y : 20
        nbCellX : 24
        nbCellY : 20
        coteCell : 25
    }

}
