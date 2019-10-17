import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls 2.5

import ToDo 1.0

Frame {
    ListView{
        implicitWidth: 500
        implicitHeight: 500
        clip: true

        model: ToDoModel {

        }
        delegate: RowLayout {
            width: parent.width
            CheckBox {
                checked: model.done
                onClicked: model.done = checked
            }
            TextField {
                Layout.fillWidth: true
                onEditingFinished: model.description = text
                text: model.description
            }
        }

}
}
