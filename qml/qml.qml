import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle {

    TextField {
        x : 5
        y : 5
        width : 80
        height : 20
        placeholderText : qsTr("Number")
        validator : IntValidator
    }

    Button {
        x : 5
        y : 30
        width : 80
        text : "Play!"
        onClicked : {
            Context.sendActionToCpp("activate", 'maChaineDuPlateau')
        }
    }

    Button {
        x : 5
        y : 55
        width : 80
        text : "Reset"
        onClicked : {
            Context.sendActionToCpp("reset", 'maChaineDuPlateau')
        }
    }

    Button {
        x : 5
        y : 80
        width : 80
        text : "1 more"
        onClicked : {
            Context.sendActionToCpp("oneMore", 'maChaineDuPlateau')
        }
    }

    Button {
        x : 5
        y : 105
        width : 80
        text : "1 less"
        onClicked : {
            Context.sendActionToCpp("oneLess", 'maChaineDuPlateau')
        }
    }

    Button {
        x : 5
        y : 130
        width : 80
        text : "Save"
        onClicked : {
            Context.sendActionToCpp("save", 'maChaineDuPlateau')
        }
    }

    Slider {
        x : 5
        y : 155
        width : 80
    }

    TextField {
        x : 5
        y : 180
        width : 130
        placeholderText : qsTr("Number of lines")
        validator : IntValidator
    }

    TextField {
        x : 5
        y : 205
        width : 130
        placeholderText : qsTr("Number of columns")
        validator : IntValidator
    }

    Button {
        x : 5
        y : 230
        width : 80
        text : "New board"
        onClicked : {
            Context.sendActionToCpp("dimensions", 'maChaineDuPlateau')
        }
    }

    PlateauVie {
        x : 150
        y : 5
        nbCellX : 24
        nbCellY : 20
        coteCell : 25
    }

}
