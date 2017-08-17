import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle {

    TextField {
        id : idTextFieldIteration
        x : 5
        y : 5
        width : 80
        height : 20
        placeholderText : qsTr("Number")
//        validator : IntValidator
    }

    Button {
        x : 5
        y : 30
        width : 80
        text : "Play!"
        onClicked : {
            Context.multipleStep(idTextFieldIteration.displayText)
        }
    }

    Button {
        x : 5
        y : 55
        width : 80
        text : "Reset"
        onClicked : {
            Context.reset()
        }
    }

    Button {
        x : 5
        y : 80
        width : 80
        text : "1 more"
        onClicked : {
            Context.step()
        }
    }

    Button {
        x : 5
        y : 105
        width : 80
        text : "1 less"
        onClicked : {
            Context.prevStep()
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
        id : idTextFieldLignes
        x : 5
        y : 180
        width : 130
        placeholderText : qsTr("Number of lines")
    }

    TextField {
        id : idTextFieldColonnes
        x : 5
        y : 205
        width : 130
        placeholderText : qsTr("Number of columns")
    }

    Button {
        x : 5
        y : 230
        width : 80
        text : "New board"
        onClicked : {
            Context.sendActionToCpp(idTextFieldLignes.displayText, idTextFieldColonnes.displayText)
        }
    }

    PlateauVie {
        x : 150
        y : 5
        nbCellX : 240
        nbCellY : 200
        coteCell : 25
    }

}
